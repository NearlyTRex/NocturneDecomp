// Name: FUN_00429e60
// Address: 00429e60
// Address Range: [[00429e60, 00429f58]]
// Convention: unknown
// Signature: void FUN_00429e60(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429e60(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1850 [1522];
  uint local_74;
  uint local_64;
  uint local_54;
  uint local_44;
  uint local_34;
  uint local_24;
  uint local_14;
  
  bVar3 = 0;
  if (0.0 < *(float *)(param_1 + 0x25d8)) {
    if (*(int *)(param_1 + 0x25dc) < 0) {
      _DAT_01cc4800 = "..\\core\\charactr.cpp";
      _DAT_01cc4804 = 0xdf9;
      FUN_004c8440("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",param_1);
    }
    FUN_0055d4a0(*(uint *)(param_1 + 0x25d4));
    local_44 = local_24;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    FUN_0055d4e0(*(uint *)(param_1 + 0x25d0),&stack0xffffffbc);
    local_54 = local_14;
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffffac);
    local_64 = local_74;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff90 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              (*(int *)(param_1 + 0x25dc) * 0x10 + param_1 + 0x800,&stack0xffffff9c,
               *(uint *)(param_1 + 0x25d8));
    puVar1 = (uint *)(*(int *)(param_1 + 0x25dc) * 0x10 + 0x800 + param_1);
    puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
    *puVar1 = local_34;
    *puVar2 = *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    puVar2[(uint)bVar3 * -2 + 1] =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
