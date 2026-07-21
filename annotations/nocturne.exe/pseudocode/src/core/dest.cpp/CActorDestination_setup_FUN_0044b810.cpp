// Name: core_dest.cpp_CActorDestination_setup_FUN_0044b810
// Address: 0044b810
// Address Range: [[0044b810, 0044b84b]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0044b810(int param_1)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_setup_FUN_0044b810(int param_1)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar2 = 0x01CC9450;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 4);
  *(uint *)(param_1 + 0x17c) = 0;
  *(uint *)(param_1 + 0x1e8) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
