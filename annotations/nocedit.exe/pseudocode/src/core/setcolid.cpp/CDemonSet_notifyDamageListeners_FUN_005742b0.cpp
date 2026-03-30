// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
// Address Range: [[005742b0, 005743b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

{
  int iVar1;
  CDemonSet *pCVar2;
  SDamageInfo local_5c;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  
  iVar1 = 0;
  if (0 < this_ptr->character_count) {
    pCVar2 = this_ptr;
    do {
      local_5c.hit_part_index = damage_info->hit_part_index;
      local_5c.damage_amount = damage_info->damage_amount;
      local_5c.gore_multiplier = damage_info->gore_multiplier;
      local_5c.impact_point.x = (damage_info->impact_point).x;
      local_5c.impact_point.y = (damage_info->impact_point).y;
      local_5c.impact_point.z = (damage_info->impact_point).z;
      local_5c.impact_force = damage_info->impact_force;
      local_5c.impact_direction.x = (damage_info->impact_direction).x;
      local_5c.impact_direction.y = (damage_info->impact_direction).y;
      local_5c.impact_direction.z = (damage_info->impact_direction).z;
      local_5c.ammo_type = damage_info->ammo_type;
      local_5c.dismember_prob = damage_info->dismember_prob;
      local_5c.damage_type = damage_info->damage_type;
      local_5c.attacker = damage_info->attacker;
      local_5c.wielder = damage_info->wielder;
      (*(((pCVar2->characters[0]->base).vtable._uc)->_uc).testDamageLine)
                (pCVar2->characters[0],position,actor_position,&local_5c,(CVector3f *)0x0);
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->character_count);
  }
  return;
}
