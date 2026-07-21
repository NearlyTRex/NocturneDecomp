// Name: core_actor.cpp_archiveLocation_FUN_0040c590
// Address: 0040c590
// Address Range: [[0040c590, 0040c62a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(float *param_1)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(float *param_1)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320();
    }
  }
  else {
    _fprintf(DAT_00763e84,"%s%d,%g,%g,%g",&DAT_005acc90,param_1[3],(double)*param_1,
               (double)param_1[1],(double)param_1[2]);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0();
  return;
}
