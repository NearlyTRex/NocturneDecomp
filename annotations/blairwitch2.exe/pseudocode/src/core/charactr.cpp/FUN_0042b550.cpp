// Name: core_charactr.cpp_FUN_0042b550
// Address: 0042b550
// Address Range: [[0042b550, 0042b5d1]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042b550(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  uint local_c [3];
  
  *(uint *)(param_1 + 0x10a28) = param_2;
  *(uint *)(param_1 + 0x10a2c) = param_3;
  *(uint *)(param_1 + 0x10a30) = param_4;
  *(uint *)(param_1 + 0x10a34) = param_5;
  if ((uint *)(param_1 + 0x10a3c) == local_c) {
    *(uint *)(param_1 + 0x10a38) = param_5;
    return;
  }
  *(uint *)(param_1 + 0x10a3c) = param_6;
  *(uint *)(param_1 + 0x10a40) = param_7;
  *(uint *)(param_1 + 0x10a44) = param_8;
  *(uint *)(param_1 + 0x10a38) = param_5;
  return;
}
