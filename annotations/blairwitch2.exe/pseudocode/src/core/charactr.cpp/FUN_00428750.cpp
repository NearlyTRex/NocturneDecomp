// Name: core_charactr.cpp_FUN_00428750
// Address: 00428750
// Address Range: [[00428750, 00428791]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00428750(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_00428750(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x27ac) = 1;
  *(uint *)(param_1 + 0x2778) = 0xbf800000;
  *(uint *)(param_1 + 0x2774) = param_2;
  *(uint *)(param_1 + 0x277c) = 0x7149f2ca;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x140))(param_1,0xbf800000);
  return;
}
