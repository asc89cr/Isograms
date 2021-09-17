#pragma once
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

class Isogram
{
public:
	static bool is_isogram(string str)

	{
		map<char, int> m;
		int counter = 0;

		transform(str.begin(), str.end(), str.begin(),
			[](unsigned char c) { return tolower(c); });

		for (string::size_type i = 0; i < str.size(); i++) {
			
			
			if (m.find(str[i]) != m.end())
			{
				//is in the map, increase counter for that char
				map<char, int>::iterator it = m.find(str[i]);
				
				if (it != m.end())
					it->second = it->second++;

				return false;
			}
			else {
				
				//is not in the map
				counter++;
				m.insert(make_pair(str[i], counter));
				counter = 0;
			}

		}

		return true;
	}
};

