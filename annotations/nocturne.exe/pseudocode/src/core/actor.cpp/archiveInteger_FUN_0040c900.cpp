// Name: core_actor.cpp_archiveInteger_FUN_0040c900
// Address: 0040c900
// Address Range: [[0040c900, 0040c973]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveInteger_FUN_0040c900(uint *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = _fscanf(DAT_00763e84,"%d",param_1);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("Integer value",param_2);
    }
  }
  else {
    _fprintf(DAT_00763e84,"%s%d",&DAT_005acc90,*param_1);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Integer value",param_2);
  return;
}
