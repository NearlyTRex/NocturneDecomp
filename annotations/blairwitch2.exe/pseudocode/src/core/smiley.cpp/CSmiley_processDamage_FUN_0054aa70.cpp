// Name: core_smiley.cpp_CSmiley_processDamage_FUN_0054aa70
// Address: 0054aa70
// Address Range: [[0054aa70, 0054ab75]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0054aa70(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0054aa70(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  EDamageType EVar1;
  float fVar2;
  int iVar3;
  
  if (this_ptr->model_variant != 1) {
    damage_info->damage_type = DAMAGE_TYPE_ATTACK_GENERIC;
    damage_info->damage_amount = 0.0;
    return;
  }
  EVar1 = damage_info->damage_type;
  if (EVar1 == DAMAGE_TYPE_FALL_APART) {
    damage_info->damage_type = DAMAGE_TYPE_ATTACK_GENERIC;
  }
  else if (((int)EVar1 < 0xc) || (EVar1 == DAMAGE_TYPE_PIERCING)) goto LAB_0054aaa4;
  damage_info->damage_amount = 0.0;
LAB_0054aaa4:
  if (0.0 < damage_info->damage_amount) {
    core_smiley_cpp_CSmiley_processDismemberment_FUN_0054a790(this_ptr,damage_info);
  }
  fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) != 8) && (*(int *)(iVar3 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,7,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"@smiley_die??.wav" + 1);
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
