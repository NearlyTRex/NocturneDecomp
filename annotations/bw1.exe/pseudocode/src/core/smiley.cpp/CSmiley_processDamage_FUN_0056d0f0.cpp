// Name: core_smiley.cpp_CSmiley_processDamage_FUN_0056d0f0
// Address: 0056d0f0
// Address Range: [[0056d0f0, 0056d1f5]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0056d0f0(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0056d0f0(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (this_ptr->model_variant != 1) {
    *(uint *)(damage_info + 0x30) = 100;
    *(uint *)(damage_info + 4) = 0;
    return;
  }
  iVar1 = *(int *)(damage_info + 0x30);
  if (iVar1 == 4) {
    *(uint *)(damage_info + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_0056d124;
  *(uint *)(damage_info + 4) = 0;
LAB_0056d124:
  if (0.0 < *(float *)(damage_info + 4)) {
    core_smiley_cpp_CSmiley_processDismemberment_FUN_0056ce10(this_ptr,damage_info);
  }
  fVar2 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar3 + 0x24) != 8) && (*(int *)(pSVar3 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,7,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"@smiley_die??.wav" + 1);
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
