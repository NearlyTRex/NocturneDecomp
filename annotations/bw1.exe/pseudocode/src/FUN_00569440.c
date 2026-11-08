// Name: FUN_00569440
// Address: 00569440
// Address Range: [[00569440, 005695d1]]
// Convention: unknown
// Signature: void FUN_00569440(undefined4 param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00569440(uint param_1,float *param_2,float param_3,uint param_4,uint param_5,uint param_6)

{
  byte bVar1;
  float afStackY_18ac [1520];
  uint uStack_d0;
  uint uStack_c0;
  uint uStack_b0;
  uint uStack_a0;
  uint uStack_90;
  uint uStack_80;
  uint uStack_70;
  uint uStack_60;
  uint uStack_50;
  uint uStack_4c;
  float fStack_44;
  uint uStack_38;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar1 = 0;
  if (param_3 <= (float)_DAT_005f2529) {
    return;
  }
  FUN_00569f30(param_1);
  FUN_00569040(param_1,param_4);
  fStack_20 = fStack_2c;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_14 = *param_2 - fStack_20;
  fStack_10 = param_2[1] - fStack_1c;
  fStack_c = param_2[2] - fStack_18;
  fStack_44 = *param_2 - fStack_20;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_005a7520(&stack0xffffffbc);
  uStack_50 = uStack_38;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_005b7af0(uStack_50);
  uStack_c0 = uStack_80;
  *(uint *)((int)&stack0xffffff44 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff84 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffff48 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)
   ((int)(&stack0xffffff48 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff88 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4)
  ;
  FUN_005b7b30(uStack_4c,&stack0xffffff40);
  uStack_60 = uStack_70;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffa8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)
   ((int)(&stack0xffffffa8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4)
  ;
  FUN_005b77b0(param_5,&stack0xffffffa0);
  uStack_d0 = uStack_a0;
  *(uint *)((int)&stack0xffffff34 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff64 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffff38 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff68 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)
   ((int)(&stack0xffffff38 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff68 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4)
  ;
  FUN_005b77b0(&stack0xffffff30);
  uStack_90 = uStack_b0;
  *(uint *)((int)&stack0xffffff74 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff54 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffff78 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff58 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  *(uint *)
   ((int)(&stack0xffffff78 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff58 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4)
  ;
  FUN_00568d60(param_1,&stack0xffffff70,param_3,param_4,param_6);
  return;
}
