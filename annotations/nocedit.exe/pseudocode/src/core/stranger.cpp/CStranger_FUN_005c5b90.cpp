// Name: core_stranger.cpp_CStranger_FUN_005c5b90
// Address: 005c5b90
// Address Range: [[005c5b90, 005c5e78]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c5b90()

#include "nocturne.h"

void core_stranger_cpp_CStranger_FUN_005c5b90(void)

{
  CMotionController *this_ptr;
  int iVar1;
  float fVar2;
  uint uVar3;
  float unaff_ESI;
  int in_stack_00000004;
  
  if ((((*(int *)(in_stack_00000004 + 0xbe38) != 0) && (*(int *)(in_stack_00000004 + 0x1fc38) == 0))
      && (iVar1 = core_stranger_cpp_CStranger_FUN_005c5e80(), iVar1 == 0)) &&
     (*(int *)(in_stack_00000004 + 0x1fbd4) == 0)) {
    this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
    core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,0);
    fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(this_ptr,1);
    if ((float)0.99990000000000001 < fVar2 + unaff_ESI) {
      uVar3 = core_hero_cpp_FUN_004f2d70();
      switch(uVar3) {
      case 0:
        if (*(int *)(in_stack_00000004 + 0x1fb9c) != 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                     *(int *)(in_stack_00000004 + 0x1fb9c));
        }
        break;
      case 1:
        if (*(int *)(in_stack_00000004 + 0x1fb9c) != 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                     *(int *)(in_stack_00000004 + 0x1fb9c));
          *(uint *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        *(uint *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 0x158),0x1c,1);
        *(uint *)(in_stack_00000004 + 0x1fc38) = 5;
        *(uint *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,0x1d,1);
        *(uint *)(in_stack_00000004 + 0x1fc38) = 5;
        *(uint *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,0x1e,1);
        *(uint *)(in_stack_00000004 + 0x1fc38) = 5;
        *(uint *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      default:
        core_hero_cpp_FUN_004f2ed0();
        *(uint *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      }
    }
    iVar1 = core_stranger_cpp_CStranger_FUN_005c2850();
    if (iVar1 != 0) {
      *(uint *)(in_stack_00000004 + 0xbe38) = 0;
      return;
    }
    iVar1 = core_stranger_cpp_CStranger_FUN_005c1680();
    if (iVar1 != 0) {
      *(uint *)(in_stack_00000004 + 0xbe38) = 0;
      return;
    }
    iVar1 = core_hero_cpp_FUN_004f2af0();
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_FUN_004f2c40();
      if (iVar1 != 0) {
        *(uint *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      }
      iVar1 = core_hero_cpp_FUN_004f3120();
      if (iVar1 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
        return;
      }
      if ((*(int *)(in_stack_00000004 + 0x24f8) == 0) &&
         (fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840(), (float)0.98999999999999999 < fVar2
         )) {
        iVar1 = core_hero_cpp_FUN_004f2f50();
        if (iVar1 != 0) {
          *(uint *)(in_stack_00000004 + 0xbe38) = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 0x158),0x1f,1);
          return;
        }
        iVar1 = core_stranger_cpp_CStranger_FUN_005c1fe0();
        if (iVar1 != 0) {
          *(uint *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        iVar1 = core_stranger_cpp_CStranger_FUN_005c2400();
        if (iVar1 != 0) {
          *(uint *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        iVar1 = core_hero_cpp_FUN_004f33b0();
        if (iVar1 != 0) {
          *(uint *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        iVar1 = core_stranger_cpp_CStranger_FUN_005c1680();
        if (iVar1 != 0) {
          *(uint *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
      }
      *(uint *)(in_stack_00000004 + 0xbe38) = 0;
      return;
    }
  }
  return;
}
