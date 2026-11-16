// Name: core_enemy.cpp_CEnemy_spawnItems_FUN_00489c90
// Address: 00489c90
// Address Range: [[00489c90, 00489fba]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_spawnItems_FUN_00489c90(CEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_enemy_cpp_CEnemy_spawnItems_FUN_00489c90(CEnemy *this_ptr)

{
  char cVar1;
  CWeapon *pCVar2;
  CDemonActor *actor_ptr;
  CDemonActor *pCVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  double dVar7;
  float afStackY_1044 [1015];
  float fVar8;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  char *local_38;
  char *local_30;
  int local_28;
  CLocation *local_24;
  UOrientationVector *local_20;
  float local_1c;
  char *local_18;
  float local_14;
  
  bVar6 = 0;
  if (this_ptr->spawned_item_already == 0) {
    if (0 < this_ptr->spawn_amount) {
      local_24 = &(this_ptr->base).base.location;
      local_20 = &(this_ptr->base).base.orient;
      local_30 = (this_ptr->spawn_model).model_name;
      local_38 = this_ptr->spawn_item_class;
      local_28 = 0;
      do {
        pCVar2 = core_inv_cpp_CInventory_findWeaponByAmmoType_FUN_004dba30
                           ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                            AMMO_TYPE_MANA);
        if (this_ptr->spawn_item_class[0] == '\0') {
          local_18 = (char *)0x0;
          if (pCVar2 != (CWeapon *)0x0) {
            local_18 = (char *)0x41200000;
          }
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_1c = (_DAT_005bdcdf - *(float *)(iVar4 + 0x2538) * _DAT_005bdcdb) * 10.0;
          local_60 = ((float)_DAT_005bdcef - (float)*(int *)(iVar4 + 0x20b84) * (float)_DAT_005bdce7
                     ) * 10.0;
          local_14 = (float)(5 - *(int *)(iVar4 + 0x20b80) / 0x19);
          local_18 = (char *)((float)(int)local_14 * (float)local_18);
          if (local_1c < 0.0) {
            local_1c = 0.0;
          }
          if ((float)local_18 < 0.0) {
            local_18 = (char *)0x0;
          }
          if (local_60 < 0.0) {
            local_60 = 0.0;
          }
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                               (0.0,local_1c + (float)local_18 + local_60);
          fVar8 = 6.66931e-39;
          dVar7 = round((double)local_14);
          local_38 = (char *)(int)ROUND(dVar7);
          local_30 = (char *)(float)(int)local_38;
          local_18 = local_38;
          if ((float)local_30 < fVar8) {
            actor_ptr = core_actor_cpp_createActorByName_FUN_0040c4f0("CAmmo_Bullet");
          }
          else if (fVar8 + local_1c <= (float)local_30) {
            actor_ptr = core_actor_cpp_createActorByName_FUN_0040c4f0("CHealthItemSmall");
          }
          else {
            actor_ptr = core_actor_cpp_createActorByName_FUN_0040c4f0("CAmmo_Mana");
          }
        }
        else {
          actor_ptr = core_actor_cpp_createActorByName_FUN_0040c4f0(local_38);
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (actor_ptr,g_CBoxActorClassInfo.name_hash);
          if (pCVar3 != (CDemonActor *)0x0) {
            iVar4 = -1;
            pcVar5 = local_30;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
            } while (cVar1 != '\0');
            if (iVar4 != -2) {
              core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
                        ((CKeyFramedModelInstance *)(pCVar3 + 1),local_30);
              pCVar3[2].health = 2;
            }
          }
        }
        if (actor_ptr != (CDemonActor *)0x0) {
          local_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-2.0,2.0);
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-2.0,2.0);
          local_3c = local_44;
          local_58 = (local_24->position).y;
          local_5c = (local_24->position).x + local_14;
          local_54 = (local_24->position).z + local_44;
          local_50 = local_5c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          (actor_ptr->location).position.x = local_50;
          (actor_ptr->location).position.y = local_4c;
          (actor_ptr->location).position.z = local_48;
          (actor_ptr->location).area_id = (this_ptr->base).base.location.area_id;
          if (&actor_ptr->orient != local_20) {
            (actor_ptr->orient).vec.x = (local_20->vec).x;
            (actor_ptr->orient).vec.y = (local_20->vec).y;
            (actor_ptr->orient).vec.z = (local_20->vec).z;
          }
          (*((actor_ptr->vtable)._ub)->setup)(actor_ptr);
          core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(0x01D81080,actor_ptr);
        }
        local_28 = local_28 + 1;
      } while (local_28 < this_ptr->spawn_amount);
    }
    this_ptr->spawned_item_already = 1;
  }
  return;
}
