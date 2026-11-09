// Name: core_stranger.cpp_FUN_00591120
// Address: 00591120
// Address Range: [[00591120, 0059140a]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00591120(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00591120(CStranger *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  if ((((*(int *)&this_ptr->field_0xc1e4 != 0) && (*(int *)&this_ptr->field_0x1ff5c == 0)) &&
      (iVar1 = core_stranger_cpp_FUN_00591410(this_ptr), iVar1 == 0)) &&
     (*(int *)&this_ptr->field_0x1ffac == 0)) {
    this_ptr_00 = &this_ptr->field_0x158;
    fVar2 = (float)core_motion_cpp_FUN_00524a40(this_ptr_00,0);
    fVar3 = (float)core_motion_cpp_FUN_00524a40(this_ptr_00,1);
    if ((float)_DAT_005f70b1 < fVar3 + fVar2) {
      uVar4 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
      switch(uVar4) {
      case 0:
        if (*(int *)&this_ptr->field_0x1ff74 != 0) {
          shape_edittool_cpp_FUN_004943a0
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                     *(int *)&this_ptr->field_0x1ff74);
        }
        break;
      case 1:
        if (*(int *)&this_ptr->field_0x1ff74 != 0) {
          shape_edittool_cpp_FUN_004943a0
                    (g_CEditorToolsPtr,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1,
                     *(int *)&this_ptr->field_0x1ff74);
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          return;
        }
        *(uint *)&this_ptr->field_0xc1e4 = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x27,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        *(uint *)&this_ptr->field_0xc1e4 = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,0x28,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        *(uint *)&this_ptr->field_0xc1e4 = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,0x29,1);
        *(uint *)&this_ptr->field_0x1ff5c = 5;
        *(uint *)&this_ptr->field_0xc1e4 = 0;
        return;
      default:
        core_hero_cpp_FUN_004eb5e0((CHero *)this_ptr);
        *(uint *)&this_ptr->field_0xc1e4 = 0;
        return;
      }
    }
    iVar1 = core_stranger_cpp_FUN_0058d910(this_ptr);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0xc1e4 = 0;
      return;
    }
    iVar1 = core_stranger_cpp_FUN_0058c260(this_ptr,"!CBodyPart");
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0xc1e4 = 0;
      return;
    }
    iVar1 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)this_ptr);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)this_ptr);
      if (iVar1 != 0) {
        *(uint *)&this_ptr->field_0xc1e4 = 0;
        return;
      }
      iVar1 = core_hero_cpp_FUN_004eb890(this_ptr);
      if (iVar1 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x11,1);
        return;
      }
      if ((*(int *)&this_ptr->field_0x2628 == 0) &&
         (fVar2 = (float)core_charactr_cpp_FUN_00434590(this_ptr,0), (float)_DAT_005f70b9 < fVar2))
      {
        iVar1 = core_hero_cpp_FUN_004eb660((CHero *)this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0x2c,1);
          return;
        }
        iVar1 = core_stranger_cpp_FUN_0058ce80(this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          return;
        }
        iVar1 = core_stranger_cpp_FUN_0058d3c0(this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          return;
        }
        iVar1 = core_hero_cpp_FUN_004ebc40((CHero *)this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          return;
        }
        iVar1 = core_stranger_cpp_FUN_0058c260(this_ptr,"CBodyPart");
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          return;
        }
      }
      *(uint *)&this_ptr->field_0xc1e4 = 0;
      return;
    }
  }
  return;
}
