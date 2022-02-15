#include <bits/stdc++.h>
using namespace std;

int main() {

  freopen("input - a (example).txt", "r", stdin);
  freopen("output - a (example).txt", "w", stdout);

  int numOfCus;

  cin>>numOfCus;

  set<string> likes;

  for(int i=0; i<numOfCus; i++){

    int numOfLikes;
    cin>> numOfLikes;

    for(int x=0; x<numOfLikes; x++) {
      string lk;
      cin >> lk;
      likes.insert(lk);
    }

    int numOfDLikes;
    cin>> numOfDLikes;

    for(int x=0; x<numOfDLikes; x++) {
      string dlk;
      cin >> dlk;
      likes.erase(dlk);
    }

  }

  cout << likes.size() << " ";

  for (auto it: likes) {
      cout << it << " ";
  }

  return 0;
}