// Name: crt_math.c_double_to_float_FUN_0060b26c
// Address: 0060b26c
// Address Range: [[0060b26c, 0060b2b7]]
// Convention: __watcallStack
// Signature: float crt_math.c_double_to_float_FUN_0060b26c(uint double_low, uint double_high)

#include "nocturne.h"

float __watcallStack crt_math_c_double_to_float_FUN_0060b26c(uint double_low,uint double_high)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((double_high & 0x7ff00000) != 0) {
    uVar1 = (uint)(CARRY4(double_high,double_high) ||
                  CARRY4(double_high * 2,(uint)CARRY4(double_low,double_low))) << 0x1f;
    uVar2 = double_low * 2 + 0x20000000;
    uVar3 = double_high * 2 + (uint)CARRY4(double_low,double_low) +
            (uint)(0xdfffffff < double_low * 2);
    if ((uVar3 == 0) || (0x8fdfffff < uVar3)) {
      return (float)(uVar1 | 0x7f800000);
    }
    if (0x701fffff < uVar3) {
      return (float)(((uVar3 + 0x90000000) * 2 + (uint)CARRY4(uVar2,uVar2)) * 2 +
                     (uint)CARRY4(uVar2 * 2,uVar2 * 2) | uVar1);
    }
  }
  return 0.0;
}
