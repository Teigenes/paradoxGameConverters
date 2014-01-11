#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_


#include <string>
#include "Date.h"
using namespace std;



class Configuration // Singleton
{
public:
	Configuration();

	static string getEU4Path()
	{
		return getInstance()->EU4Path;
	}

	static string getV2Path()
	{
		return getInstance()->V2Path;
	}

	static string getEU4Gametype()
	{
		return getInstance()->EU4Gametype;
	}

	static string getV2Gametype()
	{
		return getInstance()->V2Gametype;
	}

	static date getStartDate()
	{
		return getInstance()->StartDate;
	}

	static date	getFirstEU4Date()
	{
		return getInstance()->firstEU4Date;
	}

	static void setFirstEU4Date(date _firstDate)
	{
		getInstance()->firstEU4Date = _firstDate;
	}

	static double getMaxLiteracy()
	{
		return getInstance()->MaxLiteracy;
	}

	static string getRemovetype()
	{
		return getInstance()->Removetype;
	}

	static void setOutputName(string name)
	{
		getInstance()->outputName = name;
	}

	static string getOutputName()
	{
		return getInstance()->outputName;
	}

	static Configuration* getInstance()
	{
		if (instance == NULL)
			instance = new Configuration();
		return instance;
	}

private:
	static Configuration* instance;

	string	EU4Path;
	string	V2Path;
	string	EU4Gametype;
	string	V2Gametype;
	string	Removetype;
	date		StartDate;
	date		firstEU4Date;
	double	MaxLiteracy;
	string	outputName;

};

#endif // CONFIGURATION_H_