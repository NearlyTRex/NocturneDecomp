// Name: core_script.cpp_writeActorReference_FUN_00505280
// Address: 00505280
// Address Range: [[00505280, 005052b1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_00505280(undefined4 param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_00505280(uint param_1,int *param_2)

{
  if (*param_2 == 0) {
    _fprintf(param_1,"\"%s\"\n","(none)");
    return;
  }
  _fprintf(param_1,"\"%s\"\n",*param_2);
  return;
}
