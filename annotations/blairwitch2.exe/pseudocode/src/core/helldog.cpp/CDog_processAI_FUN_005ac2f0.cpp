// Name: core_helldog.cpp_CDog_processAI_FUN_005ac2f0
// Address: 005ac2f0
// Address Range: [[005ac2f0, 005ac51e]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processAI_FUN_005ac2f0(CDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_helldog_cpp_CDog_processAI_FUN_005ac2f0(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  float fVar2;
  float fVar3;
  SMotion *pSVar4;
  int iVar5;
  uint uVar6;
  char *state_name;
  int iVar7;
  SStateMachine *pSVar8;
  CDemonActor *pCStack_14;
  
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar4->state_index == 1) {
    (this_ptr->base).anim_speed_scale = 1.2;
  }
  else {
    (this_ptr->base).anim_speed_scale = 2.0;
  }
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0
                    (&(this_ptr->base).state_machine,"?ChaseFood" + 1);
  if (iVar5 == 0) {
    this_ptr_00 = &(this_ptr->base).base.base.model;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    if ((pSVar4->state_index == 0) ||
       (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base)
       , pSVar4->state_index == 8)) {
      if ((this_ptr->base).idle_sound[0] == '\0') {
        sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
      }
      else {
        fVar2 = (this_ptr->base).idle_sound_timer - delta_time;
        (this_ptr->base).idle_sound_timer = fVar2;
        if (fVar2 <= 0.0) {
          pCVar1 = (this_ptr->base).base.base.base.vtable._ub;
          (this_ptr->base).idle_sound_timer = (this_ptr->base).idle_sound_interval;
          uVar6 = (*pCVar1->playSound)((CDemonActor *)this_ptr,(this_ptr->base).idle_sound);
          (this_ptr->base).idle_sfx_handle = uVar6;
        }
      }
    }
    pSVar8 = &(this_ptr->base).state_machine;
    iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar8,"Death");
    if ((iVar5 == 0) &&
       (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar8,"Animation"),
       iVar5 == 0)) {
      (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
    }
    iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0
                      (&(this_ptr->base).state_machine,"Death");
    if ((iVar5 == 0) &&
       (fVar2 = this_ptr->food_scan_timer - delta_time, this_ptr->food_scan_timer = fVar2,
       fVar2 <= 0.0)) {
      this_ptr->food_scan_timer = 1.0;
      iVar7 = 0;
      for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
        pCStack_14 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar7),
                                g_CBoxActorClassInfo.name_hash);
        if (pCStack_14 != (CDemonActor *)0x0) {
          _strcmp(pCStack_14[1].create_event,"meat1.kfm");
        }
        iVar7 = iVar7 + 4;
      }
      if ((pCStack_14 != (CDemonActor *)0x0) &&
         (fVar2 = (this_ptr->base).base.base.base.location.position.x -
                  (pCStack_14->location).position.x,
         fVar3 = (this_ptr->base).base.base.base.location.position.z -
                 (pCStack_14->location).position.z,
         SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= _DAT_00600c54)) {
        pSVar8 = &(this_ptr->base).state_machine;
        this_ptr->eat_timer = this_ptr->eat_time;
        this_ptr->food = pCStack_14;
        state_name = core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(pSVar8);
        core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                  (pSVar8,"ChaseFoodComplete",state_name);
        core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(pSVar8,"ChaseFood");
        return;
      }
    }
  }
  return;
}
