// Name: core_fire.cpp_FUN_004a3b60
// Address: 004a3b60
// Address Range: [[004a3b60, 004a3b9f]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a3b60(undefined4 param_1,int param_2,undefined4 *param_3)

#include "nocturne.h"

void core_fire_cpp_FUN_004a3b60(uint param_1,int param_2,uint *param_3)

{
  if ((-1 < param_2) && (param_2 < 500)) {
    param_2 = param_2 * 0x2c;
    if ((uint *)(param_2 + 0x1cfb8bc) != param_3) {
      *(uint *)(param_2 + 0x1cfb8bc) = *param_3;
      *(uint *)(param_2 + 0x1cfb8c0) = param_3[1];
      *(uint *)(param_2 + 0x1cfb8c4) = param_3[2];
      return;
    }
  }
  return;
}
