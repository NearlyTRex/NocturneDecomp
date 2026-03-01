// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
// Address Range: [[005742b0, 005743b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,void *unknown_param)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,void *unknown_param)

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
    local_14 = (float *)((int)unknown_param + 0xc);
    local_10 = (float *)((int)unknown_param + 0x10);
    local_1c = (float *)((int)unknown_param + 0x1c);
    local_18 = (float *)((int)unknown_param + 0x20);
    local_20 = (float *)((int)unknown_param + 0x24);
    pCVar2 = this_ptr;
    do {
      local_5c.fire_type = *(int *)unknown_param;
      local_5c.damage_amount = *(float *)((int)unknown_param + 4);
      local_5c.gore_multiplier = *(float *)((int)unknown_param + 8);
      local_5c.impact_point.x = *local_14;
      local_5c.impact_point.y = *local_10;
      local_5c.impact_point.z = *(float *)((int)unknown_param + 0x14);
      local_5c.impact_force = *(float *)((int)unknown_param + 0x18);
      local_5c.impact_direction.x = *local_1c;
      local_5c.impact_direction.y = *local_18;
      local_5c.impact_direction.z = *local_20;
      local_5c.ammo_type = *(int *)((int)unknown_param + 0x28);
      local_5c.dismember_prob = *(float *)((int)unknown_param + 0x2c);
      local_5c.damage_type = *(int *)((int)unknown_param + 0x30);
      local_5c.attacker = *(CDemonActor **)((int)unknown_param + 0x34);
      local_5c.wielder = *(CDemonActor **)((int)unknown_param + 0x38);
      (*(((pCVar2->characters[0]->base).vtable._uc)->_uc).testDamageLine)
                (pCVar2->characters[0],(CVector3f *)damage_info,actor_position,&local_5c,
                 (CVector3f *)0x0);
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->character_count);
  }
  return;
}
