// Name: core_hiram.cpp_CHiram_process_FUN_004f4550
// Address: 004f4550
// Address Range: [[004f4550, 004f468d]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_process_FUN_004f4550(CHiram *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hiram_cpp_CHiram_process_FUN_004f4550(CHiram *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  CDemonActor *actor_ptr;
  CGlass *this_ptr_00;
  float fVar5;
  
  iVar2 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  if (pSVar3->state_index != 1) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(g_CEventListPtr,this_ptr->unk);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,1,1)
      ;
      uVar4 = g_CGlassClassInfo.name_hash;
      actor_ptr = (CDemonActor *)
                  core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                            (g_CDemonMissionPtr,"GlassHiram");
      this_ptr_00 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,uVar4);
      if (this_ptr_00 != (CGlass *)0x0) {
        core_glass_cpp_CGlass_shatter_FUN_004eaef0
                  (this_ptr_00,&(this_ptr_00->base).location.position);
      }
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fVar5 = delta_time;
  while (0.0 < fVar5) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar4 == 0x29a) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (g_CDemonMissionPtr,(CDemonActor *)this_ptr,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar4);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,fVar5);
  return;
}
