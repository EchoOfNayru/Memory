#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

void sum(int a, int b, int& c) { c = a + b; }

struct Item 
{
	int id;
	int value;
};

struct ItemCollection
{
	int itemsPresent;
	Item members[10];
};

void product(float a, float b, float& c) { c = a * b; }

void swap(float& a, float& b) 
{
	float placeholder = b;
	b = a;
	a = placeholder;
}

struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};

void feedAussie(Aussiegochi& aus) 
{
	aus.hunger += 10;
	aus.happiness += 2.5;
	aus.thirst -= 2;
	aus.sanity += 3;
}

void waterAussie(Aussiegochi& aus) 
{
	aus.thirst += 10;
	aus.happiness += 1;
	aus.sanity += 5;
}

void abuseAussie(Aussiegochi& aus) 
{
	aus.sanity -= 500;
	aus.happiness -= 50;
}

void coddleAussie(Aussiegochi& aus) 
{
	aus.happiness += 10;
	aus.sanity += 7;
}

struct Track
{
	string trackName;
	float playtime;
};

struct Playlist
{
	string playlistName;
	Track * trackList;
	int trackCount;
};

void printPlaylist(Playlist& pl) 
{
	cout << "Playlist: " << pl.playlistName << endl;
	for (int i = 0; i < pl.trackCount; i++) 
	{
		cout << pl.trackList[i].playtime << " - " << pl.trackList[i].trackName << endl;
	}
}

void shufflePlaylist(Playlist& pl) 
{
	int forceExit = 1;
	srand(time(NULL));
	Playlist dupe = pl;
	for (int i = 0; i < pl.trackCount; i++) 
	{
		pl.trackList[i].trackName = "NULL";
	}
	for (int i = 0; i < pl.trackCount; i++) 
	{
		int thisThing = rand() % dupe.trackCount;
		for (int j = 0; j < pl.trackCount; j++) 
		{
			while (dupe.trackList[thisThing].trackName == pl.trackList[j].trackName && forceExit > 0) 
			{
				forceExit = 0;
				thisThing = rand() % dupe.trackCount;
				for (int k = 0; k < pl.trackCount; k++) 
				{
					if (dupe.trackList[thisThing].trackName == pl.trackList[k].trackName) 
					{
						forceExit++;
					}
				}
			}
		}
		pl.trackList[i] = dupe.trackList[thisThing];
	}
}

void dedupePlaylist(Playlist& pl) 
{
	Track empty;
	for (int i = 0; i < pl.trackCount; i++) 
	{
		for (int k = 0; k < pl.trackCount; k++) 
		{
			if (pl.trackList[i].trackName == pl.trackList[k].trackName && i != k) 
			{
				pl.trackList[k].playtime = empty.playtime;
				pl.trackList[k].trackName = empty.trackName;
			}
		}
	}
}

int main()
{
	int one = 5;
	int two = 25;
	int three = 0;

	/*
	sum(one, two, three);
	cout << three << endl;

	ItemCollection items;
	items.members[0] = { 0, 10 };
	items.members[1] = { 4, 24 };
	items.members[2] = { 8, 72 };
	items.itemsPresent = 3;

	for (int i = 0; i < items.itemsPresent; i++) 
	{
		Item& item = items.members[i];
		cout << "Item" << endl;
		cout << "ID: " << item.id << endl;
		cout << "Value: " << item.value << endl;
	}*/

	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';

	int& numRef = num;
	float& decRef = dec;
	bool& tf = tf;
	char& letterRef = letter;

	while (true) {}
}