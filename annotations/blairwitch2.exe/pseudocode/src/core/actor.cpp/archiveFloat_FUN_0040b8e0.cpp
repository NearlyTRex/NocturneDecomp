// Name: core_actor.cpp_archiveFloat_FUN_0040b8e0
// Address: 0040b8e0
// Address Range: [[0040b8e0, 0040b956]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveFloat_FUN_0040b8e0(float *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveFloat_FUN_0040b8e0(float *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,&DAT_005cab3e);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Floating point value",param_2);
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,&DAT_005cab41,&DAT_00609590,(double)*param_1);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Floating point value",param_2);
  return;
}
