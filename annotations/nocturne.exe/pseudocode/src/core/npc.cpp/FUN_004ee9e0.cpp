// Name: core_npc.cpp_FUN_004ee9e0
// Address: 004ee9e0
// Address Range: [[004ee9e0, 004eea17]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_004ee9e0(int param_1)

#include "nocturne.h"

void core_npc_cpp_FUN_004ee9e0(int param_1)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_setup_FUN_00424260(param_1);
  iVar1 = _stricmp(param_1 + 0x23b0,"priest.dfm");
  if (iVar1 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x2608) = 2;
  return;
}
