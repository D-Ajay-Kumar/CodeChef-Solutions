// https://www.codechef.com/FEB21C/problems/MEET

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int convert(char arr[])
{
    /*for(int i=0; i<7; i++)
    {
        cout << arr[i] << " ";
    }*/

    int time = ((arr[0]-'0')*1000) + ((arr[1]-'0')*100) + ((arr[3]-'0')*10) + (arr[4]-'0');
    // cout << "Hero " << time << endl;
    if(arr[5] == 'A')
    {
        if(arr[0] == '1' && arr[1] == '2')
        {
            time -= 1200;
        }
    }
    else
    {
        if(arr[0] == '1' && arr[1] == '2')
        {
            time = time;
        }
        else
        {
            time += 1200;
        }
    }

    // cout << "Returning " << time << endl;

    return time;
}

void solve()
{
    char arr[7]; // = {'1', '2', ':', '0', '1', 'A', 'M'};

    for(int i=0; i<7; i++)
    {
        cin >> arr[i];
    }

    int meeting = convert(arr);
    // cout << "Meeting at " << meeting << endl;

    ll people;
    cin >> people;

    int people_arr1[people];
    int people_arr2[people];

    char arr1[7], arr2[7];

    for(int i=0; i<people; i++)
    {
        for(int j=0; j<7; j++)
        {
            cin >> arr1[j];
        }
        for(int j=0; j<7; j++)
        {
            cin >> arr2[j];
        }

        // char arr1[7] = {'1', '1', ':', '5', '9', 'A', 'M'};
        // char arr2[7] = {'1', '1', ':', '5', '9', 'P', 'M'};

        people_arr1[i] = convert(arr1);
        people_arr2[i] = convert(arr2);

        // cout << "Free from " << people_arr1[i] << " to " << people_arr2[i] << endl;
    }

    for(int i=0; i<people; i++)
    {
        if(meeting >= people_arr1[i] && meeting <= people_arr2[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    cout << "\n";
}

int main()
{
    ll test;
    cin >> test;

    while(test--)
    {
        solve();
    }

    return 0;
}
