// Name: core_union.cpp_CUnion_processSupportStandState_FUN_005a5130
// Address: 005a5130
// Address Range: [[005a5130, 005a5276]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processSupportStandState_FUN_005a5130(CUnion *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_union_cpp_CUnion_processSupportStandState_FUN_005a5130(CUnion *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  uint uVar1;
  float fVar2;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  
  (this_ptr->base).base.base.base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.base.base.model.accumulated_root_motion.y =
       (this_ptr->base).base.base.base.model.accumulated_root_motion.z;
  (this_ptr->base).base.base.base.model.accumulated_root_motion.x =
       (this_ptr->base).base.base.base.model.accumulated_root_motion.y;
  this_ptr_00 = &(this_ptr->base).base.base.base.model;
  pCVar3 = (*(this_ptr->base).base.base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr)
  ;
  if (pCVar3 == (CDemonActor *)0x0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&this_ptr_00->base,(this_ptr->base).base.idle_motion,1);
    return;
  }
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
  uVar1 = pSVar4->state_index;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
LAB_005a5261:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.base.base.model.base,0,1);
      return;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.base.victim)->base).location.position
              );
    fVar2 = this_ptr->fire_timer - delta_time;
    this_ptr->fire_timer = fVar2;
    if (fVar2 <= 0.0) {
      this_ptr->fire_timer = 0.0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,2,1);
      return;
    }
  }
  else if (uVar1 < 3) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.base.victim)->base).location.position
              );
    if (_DAT_005f056e < (this_ptr->base).base.base.base.model.base.current_frame_number) {
      this_ptr->fire_timer = 5.0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,3,1);
      core_union_cpp_CUnion_fireShotgun_FUN_005a5460(this_ptr);
      this_ptr->ammo_count = this_ptr->ammo_count + -1;
      return;
    }
  }
  else {
    if (uVar1 != 3) goto LAB_005a5261;
    if (_DAT_005f056a < (this_ptr->base).base.base.base.model.base.current_frame_number) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,0,1);
      return;
    }
  }
  return;
}
