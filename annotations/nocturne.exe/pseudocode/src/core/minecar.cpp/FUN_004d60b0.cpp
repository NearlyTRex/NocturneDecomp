// Name: core_minecar.cpp_FUN_004d60b0
// Address: 004d60b0
// Address Range: [[004d60b0, 004d60c7]]
// Convention: unknown
// Signature: void core_minecar_cpp_FUN_004d60b0(undefined4 param_1)

#include "nocturne.h"

void core_minecar_cpp_FUN_004d60b0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_platfrm_cpp_FUN_004f5d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_minecar_cpp_FUN_004d6020_005a0784;
  return;
}
