#include<list>
#include<string>
#include<stdio.h>

using namespace std;

int main() {
	//vector<int>b;
	list<const char *> stations=
	{
		"Komagome","Tabata","Nippori","Uguisudani","Ueno","Okachimachi"
		,"Akihabara","Kanda","Tokyo","Yurakucho","Shimbashi","Hamamatsucho","Tamachi"
		,"Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya","Harajuku","Yoyogi"
		,"Shinjuku","Shinjuku","Shin-Okubo","Takadababa","Mejiro","Ikebukuro","Otsuka"
		,"Sugamo","Komagome"
	};

	//1970
	printf("----1970----\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	//1971”N"Nishi-Nippori"‚ª’Ç‰Á
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Nippori") == 0)
		{
			stations.insert(itr, "Nishi-Nippori");
			break;
		}
	}

	printf("----2019----\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	//2020”N"TakanawaGateway"‚ª’Ç‰Á
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Shinagawa") == 0)
		{
			stations.insert(itr, "TakanawaGateway");
			break;
		}
	}

	printf("----2022----\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	
	return 0;

}