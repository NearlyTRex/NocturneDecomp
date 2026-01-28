// Name: core_filmreel.cpp_FUN_004be7b0
// Address: 004be7b0
// Address Range: [[004be7b0, 004be7cb]]
// Convention: unknown
// Signature: undefined4 core_filmreel_cpp_FUN_004be7b0(void)

#include "nocturne.h"

uint core_filmreel_cpp_FUN_004be7b0(void)

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
