// Name: core_actor.cpp_archiveVector_FUN_0040b400
// Address: 0040b400
// Address Range: [[0040b400, 0040b490]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveVector_FUN_0040b400(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("3D vector",param_2);
    }
  }
  else {
    FUN_005a3140
              (DAT_007df9b4,"%s%g,%g,%g",&DAT_005f0990,(double)*param_1,(double)param_1[1],
               (double)param_1[2]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("3D vector",param_2);
  return;
}
