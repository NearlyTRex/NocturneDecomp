// Name: core_stranger.cpp_CStranger_handleActionButton_FUN_00591120
// Address: 00591120
// Address Range: [[00591120, 0059140a]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_00591120(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_handleActionButton_FUN_00591120(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  if (((((this_ptr->base).player_input.action_state.fire != 0) &&
       ((this_ptr->base).action_pending == 0)) &&
      (iVar2 = core_stranger_cpp_CStranger_tryThrowDynamite_FUN_00591410(this_ptr), iVar2 == 0)) &&
     (this_ptr->guns_drawn == 0)) {
    pCVar1 = &(this_ptr->base).base.model;
    fVar3 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0);
    fVar4 = (float)core_motion_cpp_FUN_00524a40(pCVar1,1);
    if ((float)_DAT_005f70b1 < fVar4 + fVar3) {
      uVar5 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
      switch(uVar5) {
      case 0:
        if ((this_ptr->base).door_to_open != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s");
        }
        break;
      case 1:
        if ((this_ptr->base).door_to_open != (CDoor *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                    (g_CEditorToolsPtr,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1);
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0x27,1);
        (this_ptr->base).action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0x28,1);
        (this_ptr->base).action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0x29,1);
        (this_ptr->base).action_pending = 5;
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      default:
        core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
    }
    iVar2 = core_stranger_cpp_CStranger_tryPlaceObject_FUN_0058d910(this_ptr);
    if (iVar2 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar2 = core_stranger_cpp_CStranger_tryPickupObject_FUN_0058c260(this_ptr,"!CBodyPart");
    if (iVar2 != 0) {
      (this_ptr->base).player_input.action_state.fire = 0;
      return;
    }
    iVar2 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(&this_ptr->base);
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(&this_ptr->base);
      if (iVar2 != 0) {
        (this_ptr->base).player_input.action_state.fire = 0;
        return;
      }
      iVar2 = core_hero_cpp_FUN_004eb890(this_ptr);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar2 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0x11,1);
        return;
      }
      if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
         (fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                            ((CCharacter *)this_ptr,0), (float)_DAT_005f70b9 < fVar3)) {
        iVar2 = core_hero_cpp_FUN_004eb660(&this_ptr->base);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0x2c,1);
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_tryClimbLadder_FUN_0058ce80(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_tryDescendLadder_FUN_0058d3c0(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar2 = core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004ebc40(&this_ptr->base);
        if (iVar2 != 0) {
          (this_ptr->base).player_input.action_state.fire = 0;
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_tryPickupObject_FUN_0058c260
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
