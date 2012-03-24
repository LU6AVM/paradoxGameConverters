#ifndef CK2CHARACTER_H_
#define CK2CHARACTER_H_


#include <string>
#include "..\Parsers\Object.h"
#include "CK2Dynasty.h"
using namespace std;


class CK2Character
{
	public:
		void init(Object*, map<int, CK2Dynasty*>&);
		string		getName();
		CK2Dynasty*	getDynasty();
	private:
		string		name;
		string		religion;
		string		culture;
		CK2Dynasty*	dynasty;
};







#endif // CK2CHARACTER_H_