// Name: core_stranger.cpp_CStranger_handleActionButton_FUN_0053fc60
// Address: 0053fc60
// Address Range: [[0053fc60, 0053ff48]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_0053fc60(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_0053fc60(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDoor *pCVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (((((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->action_pending == 0))
      && (iVar3 = core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0053ff50(this_ptr), iVar3 == 0))
     && (this_ptr->guns_drawn == 0)) {
    pCVar1 = &(this_ptr->base).base.model;
    fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                      (&pCVar1->motion_controller,0);
    fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                      (&pCVar1->motion_controller,1);
    if ((float)0.99990000000000001 < fVar5 + fVar4) {
      iVar3 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004b5110(&this_ptr->base);
      switch(iVar3) {
      case 0:
        pCVar2 = (this_ptr->base).door_to_open;
        if (pCVar2 != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
                    (g_CEditorTools_PTR_005b6d50,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",pCVar2);
        }
        break;
      case 1:
        pCVar2 = (this_ptr->base).door_to_open;
        if (pCVar2 != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
                    (g_CEditorTools_PTR_005b6d50,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",pCVar2);
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0x1c,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x1d,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x1e,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&this_ptr->base);
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
    }
    iVar3 = core_stranger_cpp_CStranger_tryPlaceObject_FUN_0053c800(this_ptr);
    if (iVar3 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar3 = core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(this_ptr,"!CBodyPart");
    if (iVar3 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar3 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&this_ptr->base);
    if (iVar3 == 0) {
      iVar3 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&this_ptr->base);
      if (iVar3 != 0) {
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
      iVar3 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(&this_ptr->base);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar3 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,6,1);
        return;
      }
      if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
         (fVar4 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                            ((CCharacter *)this_ptr,0), (float)0.98999999999999999 < fVar4)) {
        iVar3 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&this_ptr->base);
        if (iVar3 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0x1f,1);
          return;
        }
        iVar3 = core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(this_ptr);
        if (iVar3 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar3 = core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(this_ptr);
        if (iVar3 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar3 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(&this_ptr->base);
        if (iVar3 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar3 = core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630
                          (this_ptr,"CBodyPart");
        if (iVar3 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
      }
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
  }
  return;
}
