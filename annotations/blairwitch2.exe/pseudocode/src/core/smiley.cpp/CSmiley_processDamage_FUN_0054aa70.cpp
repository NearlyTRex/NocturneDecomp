// Name: core_smiley.cpp_CSmiley_processDamage_FUN_0054aa70
// Address: 0054aa70
// Address Range: [[0054aa70, 0054ab75]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0054aa70(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0054aa70(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  
  if (this_ptr->model_variant != 1) {
    *(uint *)(damage_info + 0x30) = 100;
    *(uint *)(damage_info + 4) = 0;
    return;
  }
  iVar2 = *(int *)(damage_info + 0x30);
  if (iVar2 == 4) {
    *(uint *)(damage_info + 0x30) = 100;
  }
  else if ((iVar2 < 0xc) || (iVar2 == 0x6b)) goto LAB_0054aaa4;
  *(uint *)(damage_info + 4) = 0;
LAB_0054aaa4:
  if (0.0 < *(float *)(damage_info + 4)) {
    core_smiley_cpp_CSmiley_processDismemberment_FUN_0054a790(this_ptr,damage_info);
  }
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr_00,7,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"@smiley_die??.wav" + 1);
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)this_ptr_00,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
