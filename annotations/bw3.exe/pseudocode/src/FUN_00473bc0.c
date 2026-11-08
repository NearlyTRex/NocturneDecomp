// Name: FUN_00473bc0
// Address: 00473bc0
// Address Range: [[00473bc0, 00473cce]]
// Convention: unknown
// Signature: void FUN_00473bc0(undefined4 param_1,float *param_2,float *param_3)

#include "nocturne.h"

void FUN_00473bc0(uint param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  float afStackY_1044 [1010];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  fVar1 = (float)FUN_00473cd0(param_1,param_2,param_3,0,0);
  fStack_14 = fVar1;
  if ((0.0 <= fVar1) && (fVar1 < 1.0)) {
    fStack_38 = *param_3 - *param_2;
    fStack_34 = param_3[1] - param_2[1];
    fStack_30 = param_3[2] - param_2[2];
    fStack_20 = *param_3 - *param_2;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fStack_2c = fStack_20 * fVar1;
    fStack_28 = fStack_1c * fVar1;
    fStack_24 = fStack_18 * fVar1;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fStack_44 = *param_2 + fStack_20 * fVar1;
    fStack_40 = param_2[1] + fStack_58;
    fStack_3c = param_2[2] + fStack_54;
    fStack_50 = fStack_44;
    *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *unaff_ESI = fStack_50;
    unaff_ESI[(uint)bVar2 * -2 + 1] = *(float *)(&stack0xffffffb4 + (uint)bVar2 * -8);
    (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         *(float *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    return;
  }
  fStack_50 = *param_3;
  *(float *)(&stack0xffffffb4 + (uint)bVar2 * -8) = param_3[(uint)bVar2 * -2 + 1];
  *(float *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       (param_3 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  *unaff_ESI = fStack_50;
  unaff_ESI[(uint)bVar2 * -2 + 1] = *(float *)(&stack0xffffffb4 + (uint)bVar2 * -8);
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(float *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return;
}
