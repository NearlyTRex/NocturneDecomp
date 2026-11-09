// Name: core_actor.cpp_archiveLocation_FUN_0040b5f0
// Address: 0040b5f0
// Address Range: [[0040b5f0, 0040b68a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b5f0(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040b5f0(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("4D location",param_2);
    }
  }
  else {
    FUN_005b8010
              (DAT_007bc034,"%s%d,%g,%g,%g",&DAT_00609590,param_1[3],(double)*param_1,
               (double)param_1[1],(double)param_1[2]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("4D location",param_2);
  return;
}
