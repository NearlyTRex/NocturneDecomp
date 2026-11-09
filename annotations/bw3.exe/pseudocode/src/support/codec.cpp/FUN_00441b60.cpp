// Name: support_codec.cpp_FUN_00441b60
// Address: 00441b60
// Address Range: [[00441b60, 00441bee]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_00441b60(int param_1)

#include "nocturne.h"

void support_codec_cpp_FUN_00441b60(int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 4);
  if (puVar1 != (uint *)0x0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (puVar1 != (uint *)0x0)) {
      (**(code **)*puVar1)(puVar1,2);
    }
    *(uint *)(param_1 + 4) = 0;
  }
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 != (uint *)0x0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (puVar1 != (uint *)0x0)) {
      (**(code **)*puVar1)(puVar1,2);
    }
    *(uint *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x10));
    *(uint *)(param_1 + 0x10) = 0;
  }
  *(uint *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
