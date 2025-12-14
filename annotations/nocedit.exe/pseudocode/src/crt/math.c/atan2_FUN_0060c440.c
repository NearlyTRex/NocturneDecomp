// Name: crt_math.c_atan2_FUN_0060c440
// Address: 0060c440
// Address Range: [[0060c440, 0060c59f] [0060c630, 0060c63f]]
// Convention: __fpustack
// Signature: float10 crt_math.c_atan2_FUN_0060c440(float10 y, float10 x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fpustack crt_math_c_atan2_FUN_0060c440(float10 y,float10 x)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  uint uStack_2c;
  ushort uStack_28;
  uint uStack_20;
  ushort uStack_1c;
  
  uStack_20 = (uint)((unkuint10)y >> 0x20);
  uStack_1c = (ushort)((unkuint10)y >> 0x40);
  uStack_2c = (uint)((unkuint10)x >> 0x20);
  uStack_28 = (ushort)((unkuint10)x >> 0x40);
  if ((((CARRY4(uStack_2c,uStack_2c)) && (CARRY4(uStack_20,uStack_20))) &&
      ((uStack_28 & 0x7fff) != 0)) &&
     ((((uStack_1c & 0x7fff) != 0 && ((uStack_28 & 0x7fff) != 0x7fff)) &&
      ((uStack_1c & 0x7fff) != 0x7fff)))) {
    uVar2 = (uint)(ABS(y) <= ABS(x));
    crt_math_c_function_dispatch_FUN_00606a77(0xf);
    crt_math_c_function_dispatch_FUN_00606a77(0xf);
    uVar1 = (uint)uStack_28 << 0x10;
                    /* WARNING: Could not recover jumptable at 0x0060c599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float10)(*(&PTR_FUN_006874e4)
                       [(uVar2 * 2 + (uint)CARRY4((uint)uStack_1c << 0x10,(uint)uStack_1c << 0x10))
                        * 2 + (uint)CARRY4(uVar1,uVar1)])((uint)uStack_28 << 0x11);
    return fVar3;
  }
  fVar3 = (float10)fpatan(x,y);
  return fVar3;
}
