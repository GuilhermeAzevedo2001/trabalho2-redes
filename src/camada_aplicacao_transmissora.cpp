#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include "functions.h"

using namespace std;

vector<int> CamadaAplicacaoTransmissora(string msg)
{
	vector<int> bits;
	for(int i = 0; i < msg.size(); i++)
	{
		bitset<8> b(msg[i]);
		for(int j = 0; j < 8; j++)bits.push_back(b[j]);
	}

	return bits;
}