// Name: unkafter_2d.cpp_FUN_005b0da0
// Address: 005b0da0
// Address Range: [[005b0da0, 005b0de9]]
// Convention: unknown
// Signature: void unkafter_2d_cpp_FUN_005b0da0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void unkafter_2d_cpp_FUN_005b0da0(uint *param_1,uint *param_2,uint *param_3)

{
  byte *puVar1;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = (byte *)*param_1;
    *param_1 = PTR_unkafter_2d_cpp_FUN_005b1840_00607f14;
    PTR_unkafter_2d_cpp_FUN_005b1840_00607f14 = puVar1;
  }
  if (param_2 != (uint *)0x0) {
    puVar1 = (byte *)*param_2;
    *param_2 = PTR_unkafter_2d_cpp_FUN_005b1938_00607f18;
    PTR_unkafter_2d_cpp_FUN_005b1938_00607f18 = puVar1;
  }
  if (param_3 != (uint *)0x0) {
    puVar1 = (byte *)*param_3;
    *param_3 = PTR_unkafter_2d_cpp_FUN_005b0d60_00607f1c;
    PTR_unkafter_2d_cpp_FUN_005b0d60_00607f1c = puVar1;
  }
  return;
}
