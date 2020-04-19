#ifndef TSPSOLVER_H
#define TSPSOLVER_H

#include "citylist.h"
#include "citypath.h"
#include "../random.hpp"

class TspSolver
{
public:
	CityPath SolveRandomly(CityList& cities);
private:
	CityPath path_;
};

#endif