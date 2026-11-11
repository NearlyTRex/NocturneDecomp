// Name: core_baal.cpp_CBaal_processDamage_FUN_00597af0
// Address: 00597af0
// Address Range: [[00597af0, 00597bd5]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_processDamage_FUN_00597af0(CBaal *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_baal_cpp_CBaal_processDamage_FUN_00597af0(CBaal *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter_full_vtable *pCVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  
  if (damage_info->damage_type != DAMAGE_TYPE_BODY_PART) {
    fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = fVar2;
    if (fVar2 <= 0.0) {
      (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
      pCVar1 = (this_ptr->base).base.base.vtable._uc;
      (this_ptr->base).base.hit_points = 0.0;
      (*(pCVar1->_uc).dropCarriedObject)((CCharacter *)this_ptr,0,(CVector3f *)0x0);
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
      if ((pSVar4->state_index != 9) && (pSVar4->state_index != 8)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,8,1);
        (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
        core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
        return;
      }
    }
    else {
      iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
      if (iVar3 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,7,1);
      }
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      if (0x5a < iVar3) {
        core_baal_cpp_FUN_00597be0(this_ptr,0);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  }
  return;
}
