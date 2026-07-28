// Name: core_stranger.cpp_FUN_0053fc60
// Address: 0053fc60
// Address Range: [[0053fc60, 0053ff48]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0053fc60(CStranger *param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_0053fc60(CStranger *param_1)

{
  CDeformableModelInstance *pCVar1;
  CDoor *pCVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  
  if (((((param_1->base).player_input.action_state.fire != 0) && (param_1->action_pending == 0)) &&
      (iVar3 = core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0053ff50(param_1), iVar3 == 0)) &&
     (param_1->guns_drawn == 0)) {
    pCVar1 = &(param_1->base).base.model;
    fVar4 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCVar1,0);
    fVar5 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(pCVar1,1);
    if ((float)0.99990000000000001 < fVar5 + fVar4) {
      uVar6 = core_hero_cpp_FUN_004b5110(param_1);
      switch(uVar6) {
      case 0:
        pCVar2 = (param_1->base).door_to_open;
        if (pCVar2 != (CDoor *)0x0) {
          shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",pCVar2);
        }
        break;
      case 1:
        pCVar2 = (param_1->base).door_to_open;
        if (pCVar2 != (CDoor *)0x0) {
          shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",pCVar2);
          (param_1->base).player_input.action_state.fire = 0;
          return;
        }
        (param_1->base).player_input.action_state.fire = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0x1c,1);
        param_1->action_pending = 5;
        (param_1->base).player_input.action_state.fire = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x1d,1);
        param_1->action_pending = 5;
        (param_1->base).player_input.action_state.fire = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0x1e,1);
        param_1->action_pending = 5;
        (param_1->base).player_input.action_state.fire = 0;
        return;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&param_1->base);
        (param_1->base).player_input.action_state.fire = 0;
        return;
      }
    }
    iVar3 = core_stranger_cpp_FUN_0053c800(param_1);
    if (iVar3 != 0) {
      (param_1->base).player_input.action_state.fire = 0;
      return;
    }
    iVar3 = core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(param_1,"!CBodyPart");
    if (iVar3 != 0) {
      (param_1->base).player_input.action_state.fire = 0;
      return;
    }
    iVar3 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&param_1->base);
    if (iVar3 == 0) {
      iVar3 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&param_1->base);
      if (iVar3 != 0) {
        (param_1->base).player_input.action_state.fire = 0;
        return;
      }
      iVar3 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(&param_1->base);
      pCVar1 = &(param_1->base).base.model;
      if (iVar3 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,6,1);
        return;
      }
      if (((param_1->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
         (fVar4 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                                   (param_1,0), (float)0.98999999999999999 < fVar4)) {
        iVar3 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&param_1->base);
        if (iVar3 != 0) {
          (param_1->base).player_input.action_state.fire = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0x1f,1);
          return;
        }
        iVar3 = core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(param_1);
        if (iVar3 != 0) {
          (param_1->base).player_input.action_state.fire = 0;
          return;
        }
        iVar3 = core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(param_1);
        if (iVar3 != 0) {
          (param_1->base).player_input.action_state.fire = 0;
          return;
        }
        iVar3 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(&param_1->base);
        if (iVar3 != 0) {
          (param_1->base).player_input.action_state.fire = 0;
          return;
        }
        iVar3 = core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630
                          (param_1,"CBodyPart");
        if (iVar3 != 0) {
          (param_1->base).player_input.action_state.fire = 0;
          return;
        }
      }
      (param_1->base).player_input.action_state.fire = 0;
      return;
    }
  }
  return;
}
