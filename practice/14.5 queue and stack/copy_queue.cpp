#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        int k = q.front();
        q.pop();
        st.push(k);
    }
    while (!st.empty())
    {
        int k = st.top();
        st.pop();
        q.push(k);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}