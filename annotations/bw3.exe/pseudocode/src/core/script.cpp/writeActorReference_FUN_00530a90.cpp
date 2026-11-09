// Name: core_script.cpp_writeActorReference_FUN_00530a90
// Address: 00530a90
// Address Range: [[00530a90, 00530ac1]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_writeActorReference_FUN_00530a90(undefined4 param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_writeActorReference_FUN_00530a90(uint param_1,int *param_2)

{
  if (*param_2 == 0) {
    FUN_005a3140(param_1,"\"%s\"\n","(none)");
    return;
  }
  FUN_005a3140(param_1,"\"%s\"\n",*param_2);
  return;
}
