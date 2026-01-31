// Name: core_stranger.cpp_CStranger_FUN_005c5b90
// Address: 005c5b90
// Address Range: [[005c5b90, 005c5e78]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5b90(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c5b90(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if ((((*(int *)((this_ptr->base).unk2 + 0xc) != 0) && (this_ptr->action_pending == 0)) &&
      (iVar2 = core_stranger_cpp_CStranger_FUN_005c5e80(this_ptr), iVar2 == 0)) &&
     (this_ptr->guns_drawn == 0)) {
    pCVar1 = &(this_ptr->base).base.model;
    fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar1->motion_controller,0);
    fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar1->motion_controller,1);
    if ((float)0.99990000000000001 < fVar4 + fVar3) {
      iVar2 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
      switch(iVar2) {
      case 0:
        iVar2 = *(int *)(this_ptr->base).unk4;
        if (iVar2 != 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",iVar2);
        }
        break;
      case 1:
        iVar2 = *(int *)(this_ptr->base).unk4;
        if (iVar2 != 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",iVar2);
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          return;
        }
        (this_ptr->base).unk2[0xc] = '\0';
        (this_ptr->base).unk2[0xd] = '\0';
        (this_ptr->base).unk2[0xe] = '\0';
        (this_ptr->base).unk2[0xf] = '\0';
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x1c,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).unk2[0xc] = '\0';
        (this_ptr->base).unk2[0xd] = '\0';
        (this_ptr->base).unk2[0xe] = '\0';
        (this_ptr->base).unk2[0xf] = '\0';
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x1d,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).unk2[0xc] = '\0';
        (this_ptr->base).unk2[0xd] = '\0';
        (this_ptr->base).unk2[0xe] = '\0';
        (this_ptr->base).unk2[0xf] = '\0';
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0x1e,1);
        this_ptr->action_pending = 5;
        (this_ptr->base).unk2[0xc] = '\0';
        (this_ptr->base).unk2[0xd] = '\0';
        (this_ptr->base).unk2[0xe] = '\0';
        (this_ptr->base).unk2[0xf] = '\0';
        return;
      default:
        core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
        (this_ptr->base).unk2[0xc] = '\0';
        (this_ptr->base).unk2[0xd] = '\0';
        (this_ptr->base).unk2[0xe] = '\0';
        (this_ptr->base).unk2[0xf] = '\0';
        return;
      }
    }
    iVar2 = core_stranger_cpp_CStranger_FUN_005c2850(this_ptr);
    if (iVar2 != 0) {
      (this_ptr->base).unk2[0xc] = '\0';
      (this_ptr->base).unk2[0xd] = '\0';
      (this_ptr->base).unk2[0xe] = '\0';
      (this_ptr->base).unk2[0xf] = '\0';
      return;
    }
    iVar2 = core_stranger_cpp_CStranger_FUN_005c1680(this_ptr);
    if (iVar2 != 0) {
      (this_ptr->base).unk2[0xc] = '\0';
      (this_ptr->base).unk2[0xd] = '\0';
      (this_ptr->base).unk2[0xe] = '\0';
      (this_ptr->base).unk2[0xf] = '\0';
      return;
    }
    iVar2 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base);
      if (iVar2 != 0) {
        (this_ptr->base).unk2[0xc] = '\0';
        (this_ptr->base).unk2[0xd] = '\0';
        (this_ptr->base).unk2[0xe] = '\0';
        (this_ptr->base).unk2[0xf] = '\0';
        return;
      }
      iVar2 = core_hero_cpp_CHero_FUN_004f3120(&this_ptr->base);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar2 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,6,1);
        return;
      }
      if (((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) &&
         (fVar3 = core_charactr_cpp_CCharacter_FUN_0042e840((CCharacter *)this_ptr),
         (float)0.98999999999999999 < fVar3)) {
        iVar2 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
        if (iVar2 != 0) {
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0x1f,1);
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_FUN_005c1fe0(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_FUN_005c2400(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          return;
        }
        iVar2 = core_hero_cpp_CHero_FUN_004f33b0(&this_ptr->base);
        if (iVar2 != 0) {
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          return;
        }
        iVar2 = core_stranger_cpp_CStranger_FUN_005c1680(this_ptr);
        if (iVar2 != 0) {
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
          return;
        }
      }
      (this_ptr->base).unk2[0xc] = '\0';
      (this_ptr->base).unk2[0xd] = '\0';
      (this_ptr->base).unk2[0xe] = '\0';
      (this_ptr->base).unk2[0xf] = '\0';
      return;
    }
  }
  return;
}
