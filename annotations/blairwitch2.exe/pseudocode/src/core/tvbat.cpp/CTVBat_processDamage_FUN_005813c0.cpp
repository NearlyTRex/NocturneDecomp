// Name: core_tvbat.cpp_CTVBat_processDamage_FUN_005813c0
// Address: 005813c0
// Address Range: [[005813c0, 00581423]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_processDamage_FUN_005813c0(CTVBat *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_processDamage_FUN_005813c0(CTVBat *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  CGore *this_ptr_00;
  
  if ((this_ptr->base).base.is_invulnerable == 0) {
    fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar1;
    this_ptr_00 = g_CGorePtr;
    if (fVar1 <= 0.0) {
      (this_ptr->base).base.hit_points = 0.0;
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (this_ptr_00,&(this_ptr->base).base.base.location.position,(CVector3f *)0x0,10,
                 BLOOD_TYPE_RED);
      this_ptr->state = 1;
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  }
  return;
}
