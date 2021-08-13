// C++14 code to implement two-dimensional map
// and inserting value through insert()

#include <bits/stdc++.h>
using namespace std;

int main()
{

	// First key type is a string
	map<string, map<int, int> > m;

	map<string, map<int, int> >::iterator itr;
	map<int, int>::iterator ptr;

	m.insert(make_pair("a_above", map<int, int>()));
	m["a_above"].insert(make_pair(1, 4));

	m.insert(make_pair("a_above", map<int, int>()));
	m["a_above"].insert(make_pair(2, 5));

	m.insert(make_pair("a_above", map<int, int>()));
	m["a_above"].insert(make_pair(3, 6));

    cout<<"\nKEY\t\tVALUE 1\t\tVALUE 2"<<endl;

	for (itr = m.begin(); itr != m.end(); itr++) {

		for (ptr = itr->second.begin(); ptr != itr->second.end(); ptr++) {
			cout <<itr->first << "\t\t"<< ptr->first<<"\t\t"<<ptr->second << endl;
		}
	}
}
