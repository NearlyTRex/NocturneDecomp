// Name: core_actor.cpp_archiveQuaternion_FUN_0040b5e0
// Address: 0040b5e0
// Address Range: [[0040b5e0, 0040b67d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040b5e0(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf(DAT_007df9b4,"%f,%f,%f,%f",param_1,param_1 + 1,param_1 + 2);
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("Quaternion",param_2);
    }
  }
  else {
    FUN_005a3140
              (DAT_007df9b4,"%s%g,%g,%g,%g",&DAT_005f0990,(double)*param_1,(double)param_1[1],
               (double)param_1[2],(double)param_1[3]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("Quaternion",param_2);
  return;
}
