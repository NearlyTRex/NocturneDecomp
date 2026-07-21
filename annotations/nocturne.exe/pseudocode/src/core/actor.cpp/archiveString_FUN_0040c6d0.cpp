// Name: core_actor.cpp_archiveString_FUN_0040c6d0
// Address: 0040c6d0
// Address Range: [[0040c6d0, 0040c7e3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveString_FUN_0040c6d0(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s\"%s\"",&DAT_005acc90,param_1);
    core_actor_cpp_archiveDescription_FUN_0040c3a0("String",param_2);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
  } while (((&DAT_005c168c)[(byte)((char)iVar1 + 1)] & 2) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("String",param_2);
  }
  iVar1 = _fgetc(DAT_00763e84);
  if (iVar1 == 0x22) {
    *param_1 = 0;
  }
  else {
    _ungetc(iVar1,DAT_00763e84);
    iVar1 = _fscanf(DAT_00763e84,"%[^\"]",param_1);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("String",param_2);
    }
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320("String",param_2);
      core_actor_cpp_archiveDescription_FUN_0040c3a0("String",param_2);
      return;
    }
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("String",param_2);
  return;
}
