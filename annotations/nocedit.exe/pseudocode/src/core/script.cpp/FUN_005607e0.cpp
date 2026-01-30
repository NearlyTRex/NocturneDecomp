// Name: core_script.cpp_FUN_005607e0
// Address: 005607e0
// Address Range: [[005607e0, 00560811]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005607e0(_FILE *param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_005607e0(_FILE *param_1,int *param_2)

{
  if (*param_2 == 0) {
    _fprintf(param_1,"\"%s\"\n","(none)");
    return;
  }
  _fprintf(param_1,"\"%s\"\n",*param_2);
  return;
}
