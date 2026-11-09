// Name: core_motion.cpp_CMotionController_advance_FUN_004fbb70
// Address: 004fbb70
// Address Range: [[004fbb70, 004fbefd]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_advance_FUN_004fbb70(CMotionController *this_ptr,float *delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionController_advance_FUN_004fbb70(CMotionController *this_ptr,float *delta_time)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SMotion *pSVar4;
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
    if (*delta_time <= (float)_DAT_005c9c94) break;
    iVar2 = core_motion_cpp_CMotionController_findAndStartTransition_FUN_004fbf20(this_ptr);
    if (iVar2 != 0) goto LAB_004fbbd2;
    local_b0 = *delta_time;
    iVar2 = 0;
    if (*(float *)&this_ptr->field_0x14 < 0.0) {
      iVar2 = core_motion_cpp_FUN_004fc680
                        (this_ptr,*(int *)&this_ptr->field_0x4,*(float *)&this_ptr->field_0x8,
                         &local_b0,local_44);
      switch(local_40) {
      case 1:
      case 2:
        *(uint *)&this_ptr->field_0x4 = local_3c;
        *(uint *)&this_ptr->field_0x8 = local_38;
        if (local_30 != 0) {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
          *(uint *)&this_ptr->field_0x28 = *(uint *)(pSVar4 + 0x24);
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        core_motion_cpp_CMotionController_startTransition_FUN_004fc190(this_ptr,local_44);
        break;
      default:
        _DAT_01d71de0 = "..\\core\\motion.cpp";
        _DAT_01d71de4 = 0x1f6;
        core_main_c_FUN_004e4330("Invalid transition command returned by CMotionControler::advanceComplex: %d",local_40);
      }
      goto LAB_004fbd11;
    }
    if (*(int *)&this_ptr->field_0x20 == 0) {
      local_ac = (float)_DAT_005c9c9c - *(float *)&this_ptr->field_0x14;
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
    if (local_b0 <= 0.0) goto switchD_004fbc79_caseD_3;
    switch(*(uint *)&this_ptr->field_0xc) {
    case 3:
      break;
    case 4:
      core_motion_cpp_FUN_004fc850
                (this_ptr,*(uint *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
                 &local_b0);
      local_14 = 1;
      break;
    case 5:
      core_motion_cpp_FUN_004fc850
                (this_ptr,*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
                 &local_b0);
      goto LAB_004fbc8a;
    case 6:
      core_motion_cpp_FUN_004fc850
                (this_ptr,*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
                 &local_b0);
      core_motion_cpp_FUN_004fc850
                (this_ptr,*(uint *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
                 &local_b0);
      local_14 = 1;
      goto LAB_004fbc8a;
    default:
      _DAT_01d71de0 = "..\\core\\motion.cpp";
      _DAT_01d71de4 = 0x1bd;
      core_main_c_FUN_004e4330
                ("CMotionController::advance: Tweening active but invalid tweenType: %d",*(uint *)&this_ptr->field_0xc);
    }
switchD_004fbc79_caseD_3:
    if (local_1c != 0) {
LAB_004fbc8a:
      iVar2 = core_motion_cpp_FUN_004fc4b0
                        (this_ptr,local_28,local_20,local_b0,*(float *)&this_ptr->field_0x14);
    }
    if ((local_14 != 0) &&
       (iVar3 = core_motion_cpp_FUN_004fc4b0
                          (this_ptr,local_24,local_2c,local_b0,1.0 - *(float *)&this_ptr->field_0x14
                          ), iVar2 == 0)) {
      iVar2 = iVar3;
    }
    if (*(int *)&this_ptr->field_0x20 == 0) {
      fVar1 = local_b0 * *(float *)&this_ptr->field_0x10 + *(float *)&this_ptr->field_0x14;
      *(float *)&this_ptr->field_0x14 = fVar1;
      if (((float)_DAT_005c9ca4 < fVar1) &&
         (core_motion_cpp_CMotionController_reverseTransition_FUN_004fc010(this_ptr),
         *(int *)&this_ptr->field_0x24 != 0)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
        *(uint *)&this_ptr->field_0x28 = *(uint *)(pSVar4 + 0x24);
      }
    }
    else {
      fVar1 = *(float *)&this_ptr->field_0x14 - local_b0 * *(float *)&this_ptr->field_0x10;
      *(float *)&this_ptr->field_0x14 = fVar1;
      if (fVar1 < (float)_DAT_005c9cac) {
        core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(this_ptr);
      }
    }
LAB_004fbd11:
    *delta_time = *delta_time - local_b0;
    if ((*(int *)&this_ptr->field_0x2c != 0) &&
       (*(int *)(*(int *)&this_ptr->field_0x2c + 8) == *(int *)&this_ptr->field_0x4)) {
      *(uint *)&this_ptr->field_0x2c = 0;
    }
    if (iVar2 != 0) {
      FUN_005a28c0(local_a8,"signal%d",iVar2);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,local_a8);
      return iVar2;
    }
LAB_004fbbd2:
    local_18 = local_18 + 1;
  } while (local_18 < 5);
  *delta_time = 0.0;
  return 0;
}
