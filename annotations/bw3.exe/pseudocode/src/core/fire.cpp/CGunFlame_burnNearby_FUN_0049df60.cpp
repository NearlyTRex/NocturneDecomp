// Name: core_fire.cpp_CGunFlame_burnNearby_FUN_0049df60
// Address: 0049df60
// Address Range: [[0049df60, 0049e169]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_burnNearby_FUN_0049df60(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_burnNearby_FUN_0049df60(CGunFlame *this_ptr)

{
  CFlameCan *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint auStackY_103c [996];
  CCharacter *pCVar8;
  uint class_name_hash;
  SDamageInfo SStack_90;
  CVector3f local_54;
  CVector3f local_48 [2];
  int local_2c;
  int local_28;
  CCharacter *local_24;
  float local_18;
  
  bVar7 = 0;
  local_28 = 0;
  if (0 < g_GunFlameCandidateCount) {
    local_2c = 0;
    do {
      local_24 = *(CCharacter **)((int)g_GunFlameCandidates + local_2c);
      fVar1 = (local_24->base).location.position.x - (this_ptr->position).x;
      fVar3 = (local_24->base).location.position.y - (this_ptr->position).y;
      fVar2 = (local_24->base).location.position.z - (this_ptr->position).z;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= 100.0f) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(&local_24->model);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  (&local_24->base,&this_ptr->position,local_48);
        pCVar8 = local_24;
        local_54.x = local_48[0].x;
        *(uint *)((int)local_48 + (uint)bVar7 * -8 + -8) =
             *(uint *)((int)local_48 + (uint)bVar7 * -8 + 4);
        class_name_hash = g_CHeroClassInfo.name_hash;
        *(uint *)((int)local_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
             *(uint *)((int)local_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(&pCVar8->base,class_name_hash);
        if (((pCVar4 != (CDemonActor *)0x0) && (this_ptr->flame_type == 2)) ||
           ((pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (&local_24->base,g_CHeroClassInfo.name_hash),
            pCVar4 == (CDemonActor *)0x0 && (this_ptr->flame_type == 1)))) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_90);
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
          pCVar8 = local_24;
          SStack_90.damage_amount = (local_18 * this_ptr->lifetime) / 2.0f;
          if (&SStack_90.impact_direction != &local_54) {
            SStack_90.impact_direction.x = local_54.x;
            SStack_90.impact_direction.y = local_54.y;
            SStack_90.impact_direction.z = local_54.z;
          }
          SStack_90.ammo_type = AMMO_TYPE_MANA;
          SStack_90.damage_type = DAMAGE_TYPE_GUN_FLAME;
          (*(((local_24->base).vtable._uc)->_uc).processDamage)(local_24,&SStack_90);
          core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0(pCVar8,&local_54,0,0,1.0,1,5.0);
        }
      }
      local_2c = local_2c + 4;
      local_28 = local_28 + 1;
    } while (local_28 < g_GunFlameCandidateCount);
  }
  iVar6 = 0;
  if (0 < g_FlameCanCount) {
    iVar5 = 0;
    do {
      this_ptr_00 = *(CFlameCan **)((int)g_FlameCans + iVar5);
      fVar1 = (this_ptr_00->base).location.position.x - (this_ptr->position).x;
      fVar3 = (this_ptr_00->base).location.position.y - (this_ptr->position).y;
      fVar2 = (this_ptr_00->base).location.position.z - (this_ptr->position).z;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)25) {
        core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_00);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < g_FlameCanCount);
  }
  return;
}
