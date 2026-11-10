// Name: core_armour.cpp_CArmour_processDamage_FUN_0040f0a0
// Address: 0040f0a0
// Address Range: [[0040f0a0, 0040f0e3]]
// Convention: __cdecl
// Signature: void __cdecl core_armour_cpp_CArmour_processDamage_FUN_0040f0a0(CArmour *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_processDamage_FUN_0040f0a0(CArmour *this_ptr,SDamageInfo *damage_info)

{
  if (*(int *)&(this_ptr->base).base.field_0x281c != 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00427360
            ((CCharacter *)this_ptr,(CVector3f *)0x0,-1.0,1);
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"armour.wav");
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
