// Name: core_battery.cpp_FUN_00417f20
// Address: 00417f20
// Address Range: [[00417f20, 00417f3b]]
// Convention: __cdecl
// Signature: int __cdecl core_battery_cpp_FUN_00417f20(void)

#include "nocturne.h"

int __cdecl core_battery_cpp_FUN_00417f20(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
