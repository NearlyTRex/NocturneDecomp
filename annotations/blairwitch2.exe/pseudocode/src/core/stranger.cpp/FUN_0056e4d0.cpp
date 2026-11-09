// Name: core_stranger.cpp_FUN_0056e4d0
// Address: 0056e4d0
// Address Range: [[0056e4d0, 0056e7ba]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0056e4d0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_0056e4d0(CStranger *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  if ((((*(int *)&this_ptr->field_0x10a74 != 0) && (*(int *)&this_ptr->field_0x256a4 == 0)) &&
      (iVar1 = core_stranger_cpp_FUN_0056e7c0(this_ptr), iVar1 == 0)) &&
     (*(int *)&this_ptr->field_0x25640 == 0)) {
    this_ptr_00 = &this_ptr->field_0x2b4;
    fVar2 = (float)core_motion_cpp_FUN_005038a0(this_ptr_00,0);
    fVar3 = (float)core_motion_cpp_FUN_005038a0(this_ptr_00,1);
    if ((float)_DAT_005ebe3d < fVar3 + fVar2) {
      uVar4 = core_hero_cpp_FUN_004cf030(this_ptr,0);
      switch(uVar4) {
      case 0:
        if (*(int *)&this_ptr->field_0x25604 != 0) {
          shape_edittool_cpp_FUN_0047be40
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                     *(int *)&this_ptr->field_0x25604);
        }
        break;
      case 1:
        if (*(int *)&this_ptr->field_0x25604 != 0) {
          shape_edittool_cpp_FUN_0047be40
                    (g_CEditorToolsPtr,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1,
                     *(int *)&this_ptr->field_0x25604);
          *(uint *)&this_ptr->field_0x10a74 = 0;
          return;
        }
        *(uint *)&this_ptr->field_0x10a74 = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x1c,1);
        *(uint *)&this_ptr->field_0x256a4 = 5;
        *(uint *)&this_ptr->field_0x10a74 = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0x1d,1);
        *(uint *)&this_ptr->field_0x256a4 = 5;
        *(uint *)&this_ptr->field_0x10a74 = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0x1e,1);
        *(uint *)&this_ptr->field_0x256a4 = 5;
        *(uint *)&this_ptr->field_0x10a74 = 0;
        return;
      default:
        core_hero_cpp_FUN_004cf230((CHero *)this_ptr);
        *(uint *)&this_ptr->field_0x10a74 = 0;
        return;
      }
    }
    iVar1 = core_stranger_cpp_FUN_0056acd0(this_ptr);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x10a74 = 0;
      return;
    }
    iVar1 = core_stranger_cpp_FUN_00569620(this_ptr,"!CBodyPart");
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x10a74 = 0;
      return;
    }
    iVar1 = core_hero_cpp_FUN_004cec50(this_ptr);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)this_ptr);
      if (iVar1 != 0) {
        *(uint *)&this_ptr->field_0x10a74 = 0;
        return;
      }
      iVar1 = core_hero_cpp_FUN_004cf4e0(this_ptr);
      if (iVar1 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,6,1);
        return;
      }
      if ((*(int *)&this_ptr->field_0x2698 == 0) &&
         (fVar2 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,0), (float)_DAT_005ebe45 < fVar2))
      {
        iVar1 = core_hero_cpp_FUN_004cf2b0((CHero *)this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0x10a74 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0x1f,1);
          return;
        }
        iVar1 = core_stranger_cpp_FUN_0056a240(this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0x10a74 = 0;
          return;
        }
        iVar1 = core_stranger_cpp_FUN_0056a780(this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0x10a74 = 0;
          return;
        }
        iVar1 = core_hero_cpp_FUN_004cf890((CHero *)this_ptr);
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0x10a74 = 0;
          return;
        }
        iVar1 = core_stranger_cpp_FUN_00569620(this_ptr,"CBodyPart");
        if (iVar1 != 0) {
          *(uint *)&this_ptr->field_0x10a74 = 0;
          return;
        }
      }
      *(uint *)&this_ptr->field_0x10a74 = 0;
      return;
    }
  }
  return;
}
