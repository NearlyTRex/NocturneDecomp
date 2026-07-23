// Name: core_actor.cpp_archiveQuaternion_FUN_0040c630
// Address: 0040c630
// Address Range: [[0040c630, 0040c6cd]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(float *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveQuaternion_FUN_0040c630(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = _fscanf(DAT_00763e84,"%f,%f,%f,%f",param_1,param_1 + 1,param_1 + 2,param_1 + 3);
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320();
    }
  }
  else {
    _fprintf(DAT_00763e84,"%s%g,%g,%g,%g",&DAT_005acc90,(double)*param_1,(double)param_1[1],
               (double)param_1[2],(double)param_1[3]);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Quaternion",param_2);
  return;
}
