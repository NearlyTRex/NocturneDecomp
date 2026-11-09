// Name: core_stranger.cpp_FUN_0056bc80
// Address: 0056bc80
// Address Range: [[0056bc80, 0056bcb4]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_0056bc80(int param_1)

#include "nocturne.h"

uint core_stranger_cpp_FUN_0056bc80(int param_1)

{
  int iVar1;
  
  core_charactr_cpp_FUN_004268b0(param_1);
  iVar1 = *(int *)(param_1 + 0x25698);
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x1c))(iVar1);
  return 1;
}
