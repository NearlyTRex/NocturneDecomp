// Name: unkafter_stranger.cpp_FUN_0045dbf0
// Address: 0045dbf0
// Address Range: [[0045dbf0, 0045dc12]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045dbf0(int param_1,undefined4 param_2)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_0045dbf0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25698);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x14))(iVar1,param_2);
  return;
}
