// Name: unkafter_asgaya.cpp_FUN_005aea80
// Address: 005aea80
// Address Range: [[005aea80, 005aeac0]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005aea80(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005aea80(int param_1,uint *param_2,uint *param_3)

{
  if (param_1 == 2) {
    *param_2 = 0xc0000000;
    *param_3 = 0x80;
    return;
  }
  if (param_1 == 1) {
    *param_2 = 0x40000000;
    *param_3 = 0x80;
    return;
  }
  *param_2 = 0x80000000;
  *param_3 = 1;
  return;
}
