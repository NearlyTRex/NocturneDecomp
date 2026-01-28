// Name: core_battery.cpp_FUN_00417f20
// Address: 00417f20
// Address Range: [[00417f20, 00417f3b]]
// Convention: unknown
// Signature: undefined4 core_battery_cpp_FUN_00417f20(void)

#include "nocturne.h"

uint core_battery_cpp_FUN_00417f20(void)

{
  int iVar1;
  uint uVar2;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}
