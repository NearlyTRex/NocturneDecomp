// Name: core_armour.cpp_CArmour_processDamage_FUN_0040ec40
// Address: 0040ec40
// Address Range: [[0040ec40, 0040ec83]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_processDamage_FUN_0040ec40(CArmour *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_processDamage_FUN_0040ec40(CArmour *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00430d90
            ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"armour.wav");
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
