// Name: core_stranger.cpp_CStranger_handleActionButton_FUN_0056e4d0
// Address: 0056e4d0
// Address Range: [[0056e4d0, 0056e7ba]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_0056e4d0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_0056e4d0(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  if (((((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->action_pending == 0))
      && (iVar2 = core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0056e7c0(this_ptr), iVar2 == 0))
     && (this_ptr->guns_drawn == 0)) {
    pCVar1 = &(this_ptr->base).base.model;
    fVar3 = (float)core_motion_cpp_FUN_005038a0(pCVar1,0);
    fVar4 = (float)core_motion_cpp_FUN_005038a0(pCVar1,1);
    if ((float)_DAT_005ebe3d < fVar4 + fVar3) {
      uVar5 = core_hero_cpp_FUN_004cf030(this_ptr,0);
      switch(uVar5) {
      case 0:
        if ((this_ptr->base).door_to_open != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s");
        }
        break;
      case 1:
        if ((this_ptr->base).door_to_open != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                    (g_CEditorToolsPtr,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1);
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0x1c,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x1d,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x1e,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&this_ptr->base);
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
    }
    iVar2 = core_stranger_cpp_CStranger_tryPlaceObject_FUN_0056acd0(this_ptr);
    if (iVar2 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar2 = core_stranger_cpp_CStranger_tryPickupObject_FUN_00569620(this_ptr,"!CBodyPart");
    if (iVar2 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar2 = core_hero_cpp_FUN_004cec50(this_ptr);
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(&this_ptr->base);
      if (iVar2 != 0) {
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
      iVar2 = core_hero_cpp_FUN_004cf4e0(this_ptr);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar2 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,6,1);
        return;
      }
      if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
         (fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                            ((CCharacter *)this_ptr,0), (float)_DAT_005ebe45 < fVar3)) {
        iVar2 = core_hero_cpp_FUN_004cf2b0(&this_ptr->base);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0x1f,1);
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_tryClimbLadder_FUN_0056a240(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_tryDescendLadder_FUN_0056a780(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar2 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004cf890(&this_ptr->base);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_tryPickupObject_FUN_00569620
                          (this_ptr,"CBodyPart");
        if (iVar2 != 0) {
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
