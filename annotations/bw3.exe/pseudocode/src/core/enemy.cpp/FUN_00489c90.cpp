// Name: core_enemy.cpp_FUN_00489c90
// Address: 00489c90
// Address Range: [[00489c90, 00489fba]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00489c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_enemy_cpp_FUN_00489c90(int param_1)

{
  char cVar1;
  int iVar2;
  CDemonActor *this_ptr;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1044 [1015];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  int local_38;
  float local_34;
  char *local_30;
  float local_2c;
  int local_28;
  float *local_24;
  float *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0xcecc) == 0) {
    if (0 < *(int *)(param_1 + 0xce64)) {
      local_24 = (float *)(param_1 + 0x20);
      local_20 = (float *)(param_1 + 0x30);
      local_30 = (char *)(param_1 + 0xcf48);
      local_38 = param_1 + 0xce68;
      local_28 = 0;
      do {
        iVar2 = core_inv_cpp_FUN_004dba30(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8,10);
        if (*(char *)(param_1 + 0xce68) == '\0') {
          local_18 = 0.0;
          if (iVar2 != 0) {
            local_18 = 10.0;
          }
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_1c = (_DAT_005bdcdf - *(float *)(iVar2 + 0x2538) * _DAT_005bdcdb) * 10.0;
          local_60 = ((float)_DAT_005bdcef - (float)*(int *)(iVar2 + 0x20b84) * (float)_DAT_005bdce7
                     ) * 10.0;
          local_14 = (float)(5 - *(int *)(iVar2 + 0x20b80) / 0x19);
          local_18 = (float)(int)local_14 * local_18;
          if (local_1c < 0.0) {
            local_1c = 0.0;
          }
          if (local_18 < 0.0) {
            local_18 = 0.0;
          }
          if (local_60 < 0.0) {
            local_60 = 0.0;
          }
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                               (0.0,local_1c + local_18 + local_60);
          fVar6 = (float10)local_14;
          round();
          local_34 = (float)(int)ROUND(fVar6);
          local_2c = (float)(int)local_34;
          local_14 = local_34;
          if (local_2c < local_60) {
            this_ptr = (CDemonActor *)
                       core_actor_cpp_createActorByName_FUN_0040c4f0("CAmmo_Bullet");
          }
          else if (local_60 + local_18 <= local_2c) {
            this_ptr = (CDemonActor *)
                       core_actor_cpp_createActorByName_FUN_0040c4f0("CHealthItemSmall");
          }
          else {
            this_ptr = (CDemonActor *)
                       core_actor_cpp_createActorByName_FUN_0040c4f0("CAmmo_Mana");
          }
        }
        else {
          this_ptr = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(local_38);
          iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (this_ptr,g_CBoxActorClassInfo.name_hash);
          if (iVar2 != 0) {
            iVar3 = -1;
            pcVar4 = local_30;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar3 != -2) {
              core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
                        ((CKeyFramedModelInstance *)(iVar2 + 0x158),local_30);
              *(uint *)(iVar2 + 0x314) = 2;
            }
          }
        }
        if (this_ptr != (CDemonActor *)0x0) {
          local_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-2.0,2.0);
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-2.0,2.0);
          local_3c = local_44;
          local_58 = local_24[1];
          local_5c = *local_24 + local_14;
          local_54 = local_24[2] + local_44;
          local_50 = *local_24 + local_14;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          (this_ptr->location).position.x = local_50;
          (this_ptr->location).position.y = local_4c;
          (this_ptr->location).position.z = local_48;
          (this_ptr->location).area_id = *(int *)(param_1 + 0x2c);
          if (&this_ptr->orient != (UOrientationVector *)local_20) {
            (this_ptr->orient).vec.x = *local_20;
            (this_ptr->orient).vec.y = local_20[1];
            (this_ptr->orient).vec.z = local_20[2];
          }
          (*((this_ptr->vtable)._ub)->setup)(this_ptr);
          core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,this_ptr);
        }
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(param_1 + 0xce64));
    }
    *(uint *)(param_1 + 0xcecc) = 1;
  }
  return;
}
