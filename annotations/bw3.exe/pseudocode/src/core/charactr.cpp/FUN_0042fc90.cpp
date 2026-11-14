// Name: core_charactr.cpp_FUN_0042fc90
// Address: 0042fc90
// Address Range: [[0042fc90, 0042fdbe]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042fc90(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042fc90(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_107c [1014];
  uint *puVar3;
  uint local_94;
  CVector3f local_88;
  float local_7c;
  float afStack_78 [5];
  float local_64 [4];
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
  if (0 < *(int *)(param_1 + 0x3284)) {
    local_1c = param_1 + 0xfd8;
    local_14 = (int *)(param_1 + 0x3288);
    do {
      if (*(int *)(param_1 + 0x2298 + *local_14 * 4) != 0) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(0.1);
        if (iVar1 != 0) {
          local_34 = 0;
          local_30 = 0;
          local_2c = 0xbe4ccccd;
          core_xform_cpp_FUN_00583260(auStack_54 + 8,local_14 + 2,local_14[1] * 0x30 + local_1c);
          auStack_54[2] = local_64[3];
          auStack_54[(uint)bVar2 * -2 + 3] = auStack_54[(uint)bVar2 * -2];
          auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
               auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          core_xform_cpp_FUN_00583260(auStack_54 + 2);
          puVar3 = auStack_54 + 5;
          local_40[0] = local_94;
          auStack_54[(uint)bVar2 * -2 + 6] = *(uint *)(&stack0xffffff70 + (uint)bVar2 * -8);
          auStack_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
               *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          core_actor_cpp_FUN_00408b80(param_1,puVar3);
          local_28.x = local_7c;
          *(float *)((int)&local_28 + (uint)bVar2 * -8 + 4) = afStack_78[(uint)bVar2 * -2];
          *(float *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               afStack_78[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
          local_64[0] = 3.0;
          local_64[1] = 0.0;
          local_64[2] = 0.0;
          core_actor_cpp_FUN_00408b00(param_1,afStack_78 + 5);
          local_88.x = afStack_78[2];
          *(float *)((int)&local_88 + (uint)bVar2 * -8 + 4) = afStack_78[(uint)bVar2 * -2 + 3];
          *(float *)((int)&local_88 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
               afStack_78[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004ce8a0
                    (g_CGorePtr,&local_28,&local_88,*(EBloodType *)(param_1 + 0x27a0));
        }
      }
      local_14 = local_14 + 0xe;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x3284));
  }
  return;
}
