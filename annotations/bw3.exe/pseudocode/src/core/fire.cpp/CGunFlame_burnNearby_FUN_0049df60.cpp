// Name: core_fire.cpp_CGunFlame_burnNearby_FUN_0049df60
// Address: 0049df60
// Address Range: [[0049df60, 0049e169]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_burnNearby_FUN_0049df60(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_burnNearby_FUN_0049df60(CGunFlame *this_ptr)

{
  CFlameCan *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_103c [996];
  uint uVar7;
  SDamageInfo SStack_90;
  float local_54;
  float local_50 [9];
  int local_2c;
  int local_28;
  int local_24;
  float local_18;
  
  bVar6 = 0;
  local_28 = 0;
  if (0 < _DAT_01c74b68) {
    local_2c = 0;
    do {
      local_24 = *(int *)(&DAT_01c74b6c + local_2c);
      fVar1 = *(float *)(local_24 + 0x20) - (this_ptr->position).x;
      fVar3 = *(float *)(local_24 + 0x24) - (this_ptr->position).y;
      fVar2 = *(float *)(local_24 + 0x28) - (this_ptr->position).z;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= _DAT_005c0858) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                  ((CDeformableModelInstance *)(local_24 + 0x158));
        core_actor_cpp_FUN_00408bf0(local_24,this_ptr);
        iVar5 = local_24;
        local_54 = local_50[2];
        local_50[(uint)bVar6 * -2] = local_50[(uint)bVar6 * -2 + 3];
        uVar7 = g_CHeroClassInfo.name_hash;
        local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar5,uVar7);
        if (((iVar5 != 0) && (this_ptr->flame_type == 2)) ||
           ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (local_24,g_CHeroClassInfo.name_hash), iVar5 == 0 &&
            (this_ptr->flame_type == 1)))) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_90);
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
          iVar5 = local_24;
          SStack_90.damage_amount = (local_18 * this_ptr->lifetime) / _DAT_005df900;
          if (&SStack_90.impact_direction != (CVector3f *)&local_54) {
            SStack_90.impact_direction.x = local_54;
            SStack_90.impact_direction.y = local_50[0];
            SStack_90.impact_direction.z = local_50[1];
          }
          SStack_90.ammo_type = AMMO_TYPE_MANA;
          SStack_90.damage_type = DAMAGE_TYPE_GUN_FLAME;
          (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,&SStack_90);
          core_charactr_cpp_FUN_0042fbd0(iVar5,&local_54,0,0,0x3f800000,1,0x40a00000);
        }
      }
      local_2c = local_2c + 4;
      local_28 = local_28 + 1;
    } while (local_28 < _DAT_01c74b68);
  }
  iVar5 = 0;
  if (0 < _DAT_01c74c34) {
    iVar4 = 0;
    do {
      this_ptr_00 = *(CFlameCan **)(&DAT_01c74c38 + iVar4);
      fVar1 = (this_ptr_00->base).location.position.x - (this_ptr->position).x;
      fVar3 = (this_ptr_00->base).location.position.y - (this_ptr->position).y;
      fVar2 = (this_ptr_00->base).location.position.z - (this_ptr->position).z;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)_DAT_005c0860) {
        core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr_00);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < _DAT_01c74c34);
  }
  return;
}
