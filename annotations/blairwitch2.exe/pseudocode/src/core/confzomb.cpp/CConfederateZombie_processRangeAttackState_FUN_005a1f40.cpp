// Name: core_confzomb.cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40
// Address: 005a1f40
// Address Range: [[005a1f40, 005a2123]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40(CConfederateZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_confzomb_cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40(CConfederateZombie *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  SMotion *pSVar4;
  byte bVar5;
  float afStackY_1040 [1015];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [5];
  
  bVar5 = 0;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar4->state_index == 2) {
    if ((this_ptr->base).base.base.model.base.current_frame_number < _DAT_005efe5f) {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
    }
    if (_DAT_005efe63 < (this_ptr->base).base.base.model.base.current_frame_number) {
      (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.base.model.accumulated_root_motion.y =
           (this_ptr->base).base.base.model.accumulated_root_motion.z;
      (this_ptr->base).base.base.model.accumulated_root_motion.x =
           (this_ptr->base).base.base.model.accumulated_root_motion.y;
      pCVar1 = (this_ptr->base).base.victim;
      fVar2 = (this_ptr->base).base.base.base.location.position.x -
              (pCVar1->base).location.position.x;
      fVar3 = (this_ptr->base).base.base.base.location.position.z -
              (pCVar1->base).location.position.z;
      this_ptr_00 = &(this_ptr->base).state_machine;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= _DAT_005fef90) {
        (this_ptr->base).attack_range = _DAT_005fef94;
        core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                  (this_ptr_00,"ChaseComplete","MeleeAttack");
        core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"MeleeAttack");
        return;
      }
      (this_ptr->base).attack_range = _DAT_005fef90;
      core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                (this_ptr_00,"ChaseComplete","RangeAttack");
      core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(this_ptr_00,0.1);
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_00,"Chasing");
    }
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            ((CDemonActor *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position,
             &CStack_58);
  CStack_4c.x = CStack_58.x;
  *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_4c,&CStack_34);
  fStack_28 = CStack_34.x;
  afStack_24[(uint)bVar5 * -2] = *(float *)((int)&CStack_34 + (uint)bVar5 * -8 + 4);
  afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&fStack_40 != &fStack_28) {
    fStack_40 = fStack_28;
    fStack_3c = afStack_24[0];
    uStack_38 = afStack_24[1];
  }
  if ((float)_DAT_005efe57 < fStack_3c) {
    (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.base.model.accumulated_root_motion.y =
         (this_ptr->base).base.base.model.accumulated_root_motion.z;
    (this_ptr->base).base.base.model.accumulated_root_motion.x =
         (this_ptr->base).base.base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,2,1);
  return;
}
