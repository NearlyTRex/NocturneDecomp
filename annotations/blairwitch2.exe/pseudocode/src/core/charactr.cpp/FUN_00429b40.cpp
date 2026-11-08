// Name: FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 00429c52]]
// Convention: unknown
// Signature: void FUN_00429b40(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429b40(int param_1)

{
  byte bVar1;
  uint auStackY_1860 [1521];
  uint local_84;
  uint local_74;
  uint local_64;
  uint local_54;
  uint local_44;
  uint local_34;
  uint local_24;
  uint local_14;
  
  bVar1 = 0;
  if (0.0 < *(float *)(param_1 + 0x27dc)) {
    if (*(int *)(param_1 + 0x27e0) < 0) {
      _DAT_01d046a0 = "..\\core\\charactr.cpp";
      _DAT_01d046a4 = 0x105c;
      FUN_004e4500("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",param_1);
    }
    FUN_00593fa0(*(uint *)(param_1 + 0x27d8));
    local_54 = local_24;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffb4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    *(uint *)
     ((int)(&stack0xffffffb4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) +
          ((uint)bVar1 * -2 + 1) * 4);
    FUN_00593fe0(*(uint *)(param_1 + 0x27d4),&stack0xffffffac);
    local_64 = local_84;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    *(uint *)
     ((int)(&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff84 + (uint)bVar1 * -8 + (uint)bVar1 * -8) +
          ((uint)bVar1 * -2 + 1) * 4);
    FUN_00593c60(&stack0xffffff9c);
    local_74 = local_34;
    *(uint *)((int)&stack0xffffff90 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    *(uint *)
     ((int)(&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) +
          ((uint)bVar1 * -2 + 1) * 4);
    FUN_00593df0(*(int *)(param_1 + 0x27e0) * 0x10 + param_1 + 0x964,&stack0xffffff8c,
                 *(uint *)(param_1 + 0x27dc),*(int *)(param_1 + 0x27e0));
    local_44 = local_14;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar1 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    *(uint *)
     ((int)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) +
          ((uint)bVar1 * -2 + 1) * 4);
    FUN_00546650(param_1 + 0x2b4,&stack0xffffffbc);
  }
  return;
}
