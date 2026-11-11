// Name: core_bird.cpp_CBird_processDamage_FUN_00410110
// Address: 00410110
// Address Range: [[00410110, 004101b1]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_processDamage_FUN_00410110(CBird *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_processDamage_FUN_00410110(CBird *this_ptr,SDamageInfo *damage_info)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  byte *puVar4;
  
  pCVar3 = (*((this_ptr->base).base.vtable._ub)->getActorType)((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CBirdClassInfo) {
    fVar2 = (this_ptr->base).hit_points - damage_info->damage_amount;
    (this_ptr->base).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base).base.vtable._ub;
      (this_ptr->base).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(&this_ptr->base);
      puVar4 = &DAT_005b6452;
    }
    else {
      if ((damage_info->damage_amount <= 0.0) || ((this_ptr->base).grabbed_by != (CDemonActor *)0x0)
         ) goto LAB_00410173;
      puVar4 = &DAT_005b6456;
    }
    unkafter_bird_cpp_FUN_00410030(&(this_ptr->base).model,puVar4);
  }
LAB_00410173:
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(&this_ptr->base,damage_info);
  return;
}
