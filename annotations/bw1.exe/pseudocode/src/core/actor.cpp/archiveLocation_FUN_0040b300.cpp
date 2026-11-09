// Name: core_actor.cpp_archiveLocation_FUN_0040b300
// Address: 0040b300
// Address Range: [[0040b300, 0040b39a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b300(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040b300(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090("4D location",param_2);
    }
  }
  else {
    FUN_005c03c0
              (DAT_007c3034,"%s%d,%g,%g,%g",&DAT_006106c0,param_1[3],(double)*param_1,
               (double)param_1[1],(double)param_1[2]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("4D location",param_2);
  return;
}
