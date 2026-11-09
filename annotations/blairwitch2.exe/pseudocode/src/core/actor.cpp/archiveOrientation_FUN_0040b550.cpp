// Name: core_actor.cpp_archiveOrientation_FUN_0040b550
// Address: 0040b550
// Address Range: [[0040b550, 0040b5e0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf();
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Euler PBH orientation",param_2);
    }
  }
  else {
    FUN_005b8010
              (DAT_007bc034,"%s%g,%g,%g",&DAT_00609590,(double)*param_1,(double)param_1[2],
               (double)param_1[1]);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Euler PBH orientation",param_2);
  return;
}
