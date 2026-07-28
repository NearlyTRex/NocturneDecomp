// Name: crt_math.c_doubleToFloat_FUN_0056f100
// Address: 0056f100
// Address Range: [[0056f100, 0056f14b]]
// Convention: __watcallRegister
// Signature: float __watcallRegister crt_math_c_doubleToFloat_FUN_0056f100(double val)

#include "nocturne.h"

float __watcallRegister doubleToFloat(double val)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)((ulonglong)val >> 0x20);
  uVar4 = SUB84(val,0);
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
