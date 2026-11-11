// Name: core_spireagl.cpp_CSpiritEagle_processDamage_FUN_00599d60
// Address: 00599d60
// Address Range: [[00599d60, 00599e01]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_processDamage_FUN_00599d60(CSpiritEagle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_CSpiritEagle_processDamage_FUN_00599d60(CSpiritEagle *this_ptr,SDamageInfo *damage_info)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CDemonActorType *pCVar3;
  byte *puVar4;
  
  pCVar3 = (*((this_ptr->base).base.vtable._ub)->getActorType)((CDemonActor *)this_ptr);
  if (pCVar3 == &g_CSpiritEagleClassInfo) {
    fVar2 = (this_ptr->base).hit_points - damage_info->damage_amount;
    (this_ptr->base).hit_points = fVar2;
    if (fVar2 <= 0.0) {
      pCVar1 = (this_ptr->base).base.vtable._ub;
      (this_ptr->base).hit_points = 0.0;
      (*pCVar1->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(&this_ptr->base);
      puVar4 = &DAT_005d9a11;
    }
    else {
      if ((damage_info->damage_amount <= 0.0) || ((this_ptr->base).grabbed_by != (CDemonActor *)0x0)
         ) goto LAB_00599dc3;
      puVar4 = &DAT_005d9a15;
    }
    core_spireagl_cpp_FUN_00599c80(&(this_ptr->base).model,puVar4);
  }
LAB_00599dc3:
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(&this_ptr->base,damage_info);
  return;
}
