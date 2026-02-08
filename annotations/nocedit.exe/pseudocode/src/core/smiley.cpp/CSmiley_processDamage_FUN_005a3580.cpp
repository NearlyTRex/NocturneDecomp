// Name: core_smiley.cpp_CSmiley_processDamage_FUN_005a3580
// Address: 005a3580
// Address Range: [[005a3580, 005a3685]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_005a3580(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_smiley_cpp_CSmiley_processDamage_FUN_005a3580(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (*(int *)(this_ptr->unk2 + 0x38) != 1) {
    damage_info->damage_type = 100;
    damage_info->damage_amount = 0.0;
    return;
  }
  iVar1 = damage_info->damage_type;
  if (iVar1 == 4) {
    damage_info->damage_type = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_005a35b4;
  damage_info->damage_amount = 0.0;
LAB_005a35b4:
  if (0.0 < damage_info->damage_amount) {
    core_smiley_cpp_CSmiley_FUN_005a32a0(this_ptr);
  }
  fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar2;
  if (fVar2 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar3->state_index != 8) && (pSVar3->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,7,1);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"smiley_die??.wav");
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
