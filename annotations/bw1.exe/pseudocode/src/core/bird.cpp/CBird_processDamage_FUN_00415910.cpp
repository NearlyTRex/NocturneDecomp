// Name: core_bird.cpp_CBird_processDamage_FUN_00415910
// Address: 00415910
// Address Range: [[00415910, 004159b1]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_processDamage_FUN_00415910(CBird *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_processDamage_FUN_00415910(CBird *this_ptr,SDamageInfo *damage_info)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  char *motion_name;
  
  pCVar3 = (*((this_ptr->base).base.vtable._ub)->getActorType)((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CBirdClassInfo) {
    fVar2 = (this_ptr->base).hit_points - damage_info->damage_amount;
    (this_ptr->base).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base).base.vtable._ub;
      (this_ptr->base).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(&this_ptr->base);
      motion_name = "DIE";
    }
    else {
      if ((damage_info->damage_amount <= 0.0) || ((this_ptr->base).grabbed_by != (CDemonActor *)0x0)
         ) goto LAB_00415973;
      motion_name = "DIE";
    }
    core_bird_cpp_setRandomMotionVariant_FUN_00415830(&(this_ptr->base).model.base,motion_name);
  }
LAB_00415973:
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(&this_ptr->base,damage_info);
  return;
}
