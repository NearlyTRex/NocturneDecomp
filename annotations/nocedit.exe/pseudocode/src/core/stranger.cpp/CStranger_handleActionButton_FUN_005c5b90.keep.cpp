// Name: core_stranger.cpp_CStranger_handleActionButton_FUN_005c5b90
// Address: 005c5b90
// MANUAL RECONSTRUCTION
// Address Range: [[005c5b90, 005c5e78]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_005c5b90(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_005c5b90(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar3;
  CDoor *pCVar4;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar5;
  float fVar6;
  CDoor *pCVar2;
  
  if (((((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->action_pending == 0))
      && (iVar3 = core_stranger_cpp_CStranger_tryThrowDynamite_FUN_005c5e80(this_ptr), iVar3 == 0))
     && (this_ptr->guns_drawn == 0)) {
    pCVar3 = &(this_ptr->base).base.model;
    fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar3->motion_controller,0);
    fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar3->motion_controller,1);
    if ((float)0.99990000000000001 < fVar5 + fVar4) {
      iVar5 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
      switch(iVar5) {
      case 0:
        pCVar4 = (this_ptr->base).door_to_open;
        if (pCVar4 != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",pCVar4->base.actor_name);
        }
        break;
      case 1:
        pCVar2 = (this_ptr->base).door_to_open;
        if (pCVar2 != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",pCVar2->base.actor_name);
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x1c,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0x1d,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0x1e,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
    }
    iVar5 = core_stranger_cpp_CStranger_tryPlaceObject_FUN_005c2850(this_ptr);
    if (iVar5 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar5 = core_stranger_cpp_CStranger_tryPickupObject_FUN_005c1680(this_ptr,"!CBodyPart");
    if (iVar5 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar5 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
    if (iVar5 == 0) {
      iVar5 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(&this_ptr->base);
      if (iVar5 != 0) {
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
      iVar5 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004f3120(&this_ptr->base);
      pCVar3 = &(this_ptr->base).base.model;
      if (iVar5 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,6,1);
        return;
      }
      if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
         (fVar6 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                            ((CCharacter *)this_ptr,0), (float)0.98999999999999999 < fVar6)) {
        iVar5 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
        if (iVar5 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0x1f,1);
          return;
        }
        iVar5 = core_stranger_cpp_CStranger_tryClimbLadder_FUN_005c1fe0(this_ptr);
        if (iVar5 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar5 = core_stranger_cpp_CStranger_tryDescendLadder_FUN_005c2400(this_ptr);
        if (iVar5 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar5 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004f33b0(&this_ptr->base);
        if (iVar5 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar5 = core_stranger_cpp_CStranger_tryPickupObject_FUN_005c1680
                          (this_ptr,"CBodyPart");
        if (iVar5 != 0) {
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
