#include <iostream>
#include <jni.h>
#include "include/run.h"
#include <string>

using namespace std;


string stringfunc()
{
    string varString = "worhp mobile v1";
    return Run::stringfunc(varString);
}
