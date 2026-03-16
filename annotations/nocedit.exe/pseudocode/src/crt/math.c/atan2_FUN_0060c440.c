// Name: crt_math.c_atan2_FUN_0060c440
// Address: 0060c440
// Address Range: [[0060c440, 0060c59f] [0060c630, 0060c63f]]
// Convention: __fpustack
// Signature: float10 __fpustack crt_math_c_atan2_FUN_0060c440(float10 y,float10 x)

#include "nocturne.h"

float10 __fpustack atan2(float10 y,float10 x)

{
  int iVar1;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar1;
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
    extraout_ST0 = function_dispatch(0xf);
    iVar1 = (int)ROUND((float10)16.0f * extraout_ST0) << 4;
    extraout_ST0_00 = function_dispatch(0xf);
    fVar3 = extraout_ST0_00 * extraout_ST0_00;
    fVar4 = fVar3 * fVar3;
    fVar5 = fVar4 * fVar4;
    fVar1 = *(float10 *)(&DAT_0068755c + iVar1) +
            (0.076416908f * fVar5 * fVar4 + 0.11111111f * fVar5 + 0.2f * fVar4
            + -0.14285714f * fVar4 * fVar3 + -0.090907585f * fVar5 * fVar3 +
              -0.33333333f * fVar3) * extraout_ST0_00 + extraout_ST0_00;
                    /* WARNING: Could not recover jumptable at 0x0060c599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(&PTR_FUN_006874e4)
      [(uVar2 * 2 + (uint)CARRY4((uint)uStack_1c << 0x10,(uint)uStack_1c << 0x10)) * 2 +
       (uint)CARRY4((uint)uStack_28 << 0x10,(uint)uStack_28 << 0x10)])();
    return fVar1;
  }
  fVar1 = (float10)fpatan(x,y);
  return fVar1;
}
