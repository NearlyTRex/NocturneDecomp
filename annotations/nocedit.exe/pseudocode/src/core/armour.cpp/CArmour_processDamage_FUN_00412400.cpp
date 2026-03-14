// Name: core_armour.cpp_CArmour_processDamage_FUN_00412400
// Address: 00412400
// Address Range: [[00412400, 00412438]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_processDamage_FUN_00412400(CArmour *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_processDamage_FUN_00412400(CArmour *this_ptr,SDamageInfo *damage_info)

{
  core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0
            ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"armour.wav");
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
