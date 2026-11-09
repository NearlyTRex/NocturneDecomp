// Name: unkafter_djien.cpp_FUN_00461530
// Address: 00461530
// Address Range: [[00461530, 0046158c]]
// Convention: unknown
// Signature: undefined4 unkafter_djien_cpp_FUN_00461530(int param_1,int param_2)

#include "nocturne.h"

uint unkafter_djien_cpp_FUN_00461530(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 == *(int *)(param_1 + 0xc2b0)) {
    uVar1 = 0;
  }
  if (param_2 == *(int *)(param_1 + 0xc2b4)) {
    uVar1 = 1;
  }
  if (param_2 == *(int *)(param_1 + 0xc2b8)) {
    uVar1 = 2;
  }
  if (param_2 == *(int *)(param_1 + 0xc2bc)) {
    uVar1 = 3;
  }
  if (param_2 == *(int *)(param_1 + 0xc2c0)) {
    uVar1 = 4;
  }
  if (param_2 == *(int *)(param_1 + 0xc2c4)) {
    uVar1 = 5;
  }
  return uVar1;
}
