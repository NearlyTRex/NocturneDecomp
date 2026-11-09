// Name: core_flame.cpp_FUN_004a5aa0
// Address: 004a5aa0
// Address Range: [[004a5aa0, 004a5acc]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_004a5aa0(CDemonActor *param_1)

#include "nocturne.h"

void core_flame_cpp_FUN_004a5aa0(CDemonActor *param_1)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00408890(param_1);
  core_flame_cpp_FUN_004a5ad0(*(uint *)&param_1[1].field_0x50);
  uVar1 = rand();
  *(uint *)&param_1[1].field_0x13c = uVar1 & 1;
  return;
}
