// Name: crt_math.c_doubleToFloat_FUN_0060b26c
// Address: 0060b26c
// Address Range: [[0060b26c, 0060b2b7]]
// Convention: __watcallRegister
// Signature: float crt_math.c_doubleToFloat_FUN_0060b26c(double val)

#include "nocturne.h"

float crt_math_c_doubleToFloat_FUN_0060b26c(double val)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)((ulonglong)val >> 0x20);
  uVar4 = SUB84 /* extract 2-byte value */(val,0);
  if (((ulonglong)val & 0x7ff0000000000000) != 0) {
    uVar1 = (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)CARRY4(uVar4,uVar4))) << 0x1f;
    uVar2 = uVar4 * 2 + 0x20000000;
    uVar4 = uVar3 * 2 + (uint)CARRY4(uVar4,uVar4) + (uint)(0xdfffffff < uVar4 * 2);
    if ((uVar4 == 0) || (0x8fdfffff < uVar4)) {
      return (float)(uVar1 | 0x7f800000);
    }
    if (0x701fffff < uVar4) {
      return (float)(((uVar4 + 0x90000000) * 2 + (uint)CARRY4(uVar2,uVar2)) * 2 +
                     (uint)CARRY4(uVar2 * 2,uVar2 * 2) | uVar1);
    }
  }
  return 0.0;
}
