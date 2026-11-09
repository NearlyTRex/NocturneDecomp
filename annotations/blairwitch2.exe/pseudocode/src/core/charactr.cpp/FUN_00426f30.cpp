// Name: core_charactr.cpp_FUN_00426f30
// Address: 00426f30
// Address Range: [[00426f30, 0042705e]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00426f30(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00426f30(int param_1)

{
  int iVar1;
  byte bVar2;
  uint auStackY_107c [1014];
  uint *puVar3;
  uint local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint auStack_54 [5];
  uint local_40 [3];
  uint local_34;
  uint local_30;
  uint local_2c;
  CVector3f local_28;
  int local_1c;
  int local_18;
  int *local_14;
  
  bVar2 = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x3448)) {
    local_1c = param_1 + 0x1134;
    local_14 = (int *)(param_1 + 0x344c);
    do {
      if (*(int *)(param_1 + 0x23f4 + *local_14 * 4) != 0) {
        iVar1 = core_actor_cpp_FUN_0040d060(0.1);
        if (iVar1 != 0) {
          local_34 = 0;
          local_30 = 0;
          local_2c = 0xbe4ccccd;
          core_xform_cpp_FUN_00591530(auStack_54 + 8,local_14 + 2,local_14[1] * 0x30 + local_1c);
          auStack_54[2] = local_58;
          auStack_54[(uint)bVar2 * -2 + 3] = auStack_54[(uint)bVar2 * -2];
          auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
               auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          core_xform_cpp_FUN_00591530(auStack_54 + 2);
          puVar3 = auStack_54 + 5;
          local_40[0] = local_94;
          auStack_54[(uint)bVar2 * -2 + 6] = *(uint *)(&stack0xffffff70 + (uint)bVar2 * -8);
          auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
               *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          core_actor_cpp_FUN_00408d70(param_1,puVar3);
          local_28._0_4_ = local_7c._0_4_;
          *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_7c + (uint)bVar2 * -8 + 4);
          *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               *(uint *)((int)&local_7c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          local_64 = 0x40400000;
          local_60 = 0;
          local_5c = 0;
          core_actor_cpp_FUN_00408cf0(param_1,&local_64);
          local_88._0_4_ = local_70._0_4_;
          *(uint *)((int)&local_88 + (uint)bVar2 * -8 + 4) =
               *(uint *)((int)&local_70 + (uint)bVar2 * -8 + 4);
          *(uint *)((int)&local_88 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               *(uint *)((int)&local_70 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          core_gore_cpp_FUN_004c9730
                    (g_CGorePtr,&local_28,&local_88,*(EBloodType *)(param_1 + 0x280c));
        }
      }
      local_14 = local_14 + 0xe;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x3448));
  }
  return;
}
