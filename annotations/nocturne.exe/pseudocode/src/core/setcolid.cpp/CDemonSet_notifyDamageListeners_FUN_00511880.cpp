// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880
// Address: 00511880
// Address Range: [[00511880, 00511984]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

{
  int iVar1;
  CDemonSet *pCVar2;
  SDamageInfo local_5c;
  float *local_20;
  CVector3f *local_1c;
  float *local_18;
  CVector3f *local_14;
  float *local_10;
  
  iVar1 = 0;
  if (0 < (int)this_ptr->actors[0x6d6]) {
    local_14 = &damage_info->impact_point;
    local_10 = &(damage_info->impact_point).y;
    local_1c = &damage_info->impact_direction;
    local_18 = &(damage_info->impact_direction).y;
    local_20 = &(damage_info->impact_direction).z;
    pCVar2 = this_ptr;
    do {
      local_5c.hit_part_index = damage_info->hit_part_index;
      local_5c.damage_amount = damage_info->damage_amount;
      local_5c.gore_multiplier = damage_info->gore_multiplier;
      local_5c.impact_point.x = local_14->x;
      local_5c.impact_point.y = *local_10;
      local_5c.impact_point.z = (damage_info->impact_point).z;
      local_5c.impact_force = damage_info->impact_force;
      local_5c.impact_direction.x = local_1c->x;
      local_5c.impact_direction.y = *local_18;
      local_5c.impact_direction.z = *local_20;
      local_5c.ammo_type = damage_info->ammo_type;
      local_5c.dismember_prob = damage_info->dismember_prob;
      local_5c.damage_type = damage_info->damage_type;
      local_5c.attacker = damage_info->attacker;
      local_5c.wielder = damage_info->wielder;
      (*(((((CCharacter *)pCVar2->actors[0x6d7])->base).vtable._uc)->_uc).testDamageLine)
                ((CCharacter *)pCVar2->actors[0x6d7],position,actor_position,&local_5c,
                 (CVector3f *)0x0);
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < (int)this_ptr->actors[0x6d6]);
  }
  return;
}
