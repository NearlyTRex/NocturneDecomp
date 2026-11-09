// Name: core_motion.cpp_CMotionController_advance_FUN_005030c0
// Address: 005030c0
// Address Range: [[005030c0, 0050344d]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advance_FUN_005030c0(CMotionController *this_ptr,float *delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionController_advance_FUN_005030c0(CMotionController *this_ptr,float *delta_time)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_b0;
  float local_ac;
  char local_a8 [100];
  SMotionTransition local_44 [4];
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  float *local_2c;
  int *local_28;
  int *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_2c = (float *)&this_ptr->field_0x1c;
  local_24 = (int *)&this_ptr->field_0x18;
  local_20 = (float *)&this_ptr->field_0x8;
  local_28 = (int *)&this_ptr->field_0x4;
  local_18 = 0;
  do {
    if (*delta_time <= (float)_DAT_005dfc28) break;
    iVar2 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_00503470(this_ptr);
    if (iVar2 != 0) goto LAB_00503122;
    local_b0 = *delta_time;
    iVar2 = 0;
    if (*(float *)&this_ptr->field_0x14 < 0.0) {
      iVar2 = core_motion_cpp_FUN_00503bd0
                        (this_ptr,*(int *)&this_ptr->field_0x4,*(float *)&this_ptr->field_0x8,
                         &local_b0,local_44);
      switch(local_40) {
      case 1:
      case 2:
        *(uint *)&this_ptr->field_0x4 = local_3c;
        *(uint *)&this_ptr->field_0x8 = local_38;
        if (local_30 != 0) {
          iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
          *(uint *)&this_ptr->field_0x28 = *(uint *)(iVar3 + 0x24);
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        core_motion_cpp_CMotionController_startTransition_FUN_005036e0(this_ptr,local_44);
        break;
      default:
        _DAT_01d046a0 = "..\\core\\motion.cpp";
        _DAT_01d046a4 = 0x1e2;
        core_main_c_FUN_004e4500("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_40);
      }
      goto LAB_00503261;
    }
    if (*(int *)&this_ptr->field_0x20 == 0) {
      local_ac = (float)_DAT_005dfc30 - *(float *)&this_ptr->field_0x14;
    }
    else {
      local_ac = *(float *)&this_ptr->field_0x14;
    }
    local_ac = local_ac / *(float *)&this_ptr->field_0x10;
    if (local_ac < 0.0) {
      local_ac = 0.0;
    }
    if (local_ac < local_b0) {
      local_b0 = local_ac;
    }
    local_1c = 0;
    local_14 = 0;
    if (local_b0 <= 0.0) goto switchD_005031c9_caseD_3;
    switch(*(uint *)&this_ptr->field_0xc) {
    case 3:
      break;
    case 4:
      core_motion_cpp_FUN_00503d80
                (this_ptr,*(uint *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
                 &local_b0);
      local_14 = 1;
      break;
    case 5:
      core_motion_cpp_FUN_00503d80
                (this_ptr,*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
                 &local_b0);
      goto LAB_005031da;
    case 6:
      core_motion_cpp_FUN_00503d80
                (this_ptr,*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
                 &local_b0);
      core_motion_cpp_FUN_00503d80
                (this_ptr,*(uint *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
                 &local_b0);
      local_14 = 1;
      goto LAB_005031da;
    default:
      _DAT_01d046a0 = "..\\core\\motion.cpp";
      _DAT_01d046a4 = 0x1a9;
      core_main_c_FUN_004e4500
                ("CMotionController::advance: Tweening active but invalid tweenType: %d",*(uint *)&this_ptr->field_0xc);
    }
switchD_005031c9_caseD_3:
    if (local_1c != 0) {
LAB_005031da:
      iVar2 = core_motion_cpp_FUN_00503a10
                        (this_ptr,local_28,local_20,local_b0,*(float *)&this_ptr->field_0x14);
    }
    if ((local_14 != 0) &&
       (iVar3 = core_motion_cpp_FUN_00503a10
                          (this_ptr,local_24,local_2c,local_b0,1.0 - *(float *)&this_ptr->field_0x14
                          ), iVar2 == 0)) {
      iVar2 = iVar3;
    }
    if (*(int *)&this_ptr->field_0x20 == 0) {
      fVar1 = local_b0 * *(float *)&this_ptr->field_0x10 + *(float *)&this_ptr->field_0x14;
      *(float *)&this_ptr->field_0x14 = fVar1;
      if (((float)_DAT_005dfc38 < fVar1) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_00503560(this_ptr),
         *(int *)&this_ptr->field_0x24 != 0)) {
        iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
        *(uint *)&this_ptr->field_0x28 = *(uint *)(iVar3 + 0x24);
      }
    }
    else {
      fVar1 = *(float *)&this_ptr->field_0x14 - local_b0 * *(float *)&this_ptr->field_0x10;
      *(float *)&this_ptr->field_0x14 = fVar1;
      if (fVar1 < (float)_DAT_005dfc40) {
        core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(this_ptr);
      }
    }
LAB_00503261:
    *delta_time = *delta_time - local_b0;
    if ((*(int *)&this_ptr->field_0x2c != 0) &&
       (*(int *)(*(int *)&this_ptr->field_0x2c + 8) == *(int *)&this_ptr->field_0x4)) {
      *(uint *)&this_ptr->field_0x2c = 0;
    }
    if (iVar2 != 0) {
      FUN_005b7790(local_a8,"signal%d",iVar2);
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,local_a8);
      return iVar2;
    }
LAB_00503122:
    local_18 = local_18 + 1;
  } while (local_18 < 5);
  *delta_time = 0.0;
  return 0;
}
