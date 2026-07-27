// Name: core_stone.cpp_FUN_00534d00
// Address: 00534d00
// Address Range: [[00534d00, 00534d21]]
// Convention: unknown
// Signature: void core_stone_cpp_FUN_00534d00(undefined4 param_1)

#include "nocturne.h"

void core_stone_cpp_FUN_00534d00(uint param_1)

{
  int iVar1;
  
  iVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_boxactor_cpp_CBoxActor_setup_FUN_0041e430_005a25d4;
  *(uint *)(iVar1 + 0x664) = 0;
  return;
}
