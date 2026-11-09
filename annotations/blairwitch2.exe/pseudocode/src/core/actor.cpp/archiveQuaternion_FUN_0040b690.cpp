// Name: core_actor.cpp_archiveQuaternion_FUN_0040b690
// Address: 0040b690
// Address Range: [[0040b690, 0040b72d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b690(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b690(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,"%f,%f,%f,%f",param_1,param_1 + 1,param_1 + 2);
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380("Quaternion",param_2);
    }
  }
  else {
    FUN_005b8010
              (DAT_007bc034,"%s%g,%g,%g,%g",&DAT_00609590,(double)*param_1,(double)param_1[1],
               (double)param_1[2],(double)param_1[3]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Quaternion",param_2);
  return;
}
