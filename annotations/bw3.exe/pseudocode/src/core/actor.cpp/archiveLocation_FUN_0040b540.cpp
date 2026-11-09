// Name: core_actor.cpp_archiveLocation_FUN_0040b540
// Address: 0040b540
// Address Range: [[0040b540, 0040b5da]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b540(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040b540(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0("4D location",param_2);
    }
  }
  else {
    FUN_005a3140
              (DAT_007df9b4,"%s%d,%g,%g,%g",&DAT_005f0990,param_1[3],(double)*param_1,
               (double)param_1[1],(double)param_1[2]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("4D location",param_2);
  return;
}
