// Name: core_actor.cpp_archiveOrientation_FUN_0040c4f0
// Address: 0040c4f0
// Address Range: [[0040c4f0, 0040c580]]
// Convention: unknown
// Signature: void core_actor_cpp_archiveOrientation_FUN_0040c4f0(float *param_1,char *param_2)

#include "nocturne.h"

void core_actor_cpp_archiveOrientation_FUN_0040c4f0(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("Euler PBH orientation",param_2);
    }
  }
  else {
    _fprintf(DAT_00763e84,"%s%g,%g,%g",&DAT_005acc90,(double)*param_1,(double)param_1[2],
               (double)param_1[1]);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Euler PBH orientation",param_2);
  return;
}
