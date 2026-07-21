// Name: core_stranger.cpp_CStranger_renderTransparent_FUN_0053d6c0
// Address: 0053d6c0
// Address Range: [[0053d6c0, 0053d6f4]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_CStranger_renderTransparent_FUN_0053d6c0(int param_1)

#include "nocturne.h"

uint core_stranger_cpp_CStranger_renderTransparent_FUN_0053d6c0(int param_1)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(param_1);
  iVar1 = *(int *)(param_1 + 0x1fa94);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x14c) + 0xc))(iVar1);
  return 1;
}
