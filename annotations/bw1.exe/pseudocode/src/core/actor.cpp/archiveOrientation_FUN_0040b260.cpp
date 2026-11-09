// Name: core_actor.cpp_archiveOrientation_FUN_0040b260
// Address: 0040b260
// Address Range: [[0040b260, 0040b2f0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b260(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b260(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("Euler PBH orientation",param_2);
    }
  }
  else {
    FUN_005c03c0
              (DAT_007c3034,"%s%g,%g,%g",&DAT_006106c0,(double)*param_1,(double)param_1[2],
               (double)param_1[1]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("Euler PBH orientation",param_2);
  return;
}
