// Name: FUN_00433b30
// Address: 00433b30
// Address Range: [[00433b30, 00433c42]]
// Convention: unknown
// Signature: void FUN_00433b30(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433b30(int param_1)

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
  if (0.0 < *(float *)(param_1 + 0x2770)) {
    if (*(int *)(param_1 + 0x2774) < 0) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x1036;
      FUN_005030e0("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",param_1);
    }
    FUN_005b7af0(*(uint *)(param_1 + 0x276c));
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
    FUN_005b7b30(*(uint *)(param_1 + 0x2768),&stack0xffffffac);
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
    FUN_005b77b0(&stack0xffffff9c);
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
    FUN_005b7940(*(int *)(param_1 + 0x2774) * 0x10 + param_1 + 0x808,&stack0xffffff8c,
                 *(uint *)(param_1 + 0x2770),*(int *)(param_1 + 0x2774));
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
    FUN_00568cf0(param_1 + 0x158,&stack0xffffffbc);
  }
  return;
}
