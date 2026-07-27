// Name: core_scat.cpp_FUN_004fcd90
// Address: 004fcd90
// Address Range: [[004fcd90, 004fcfe5]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_004fcd90(int param_1,float param_2)

#include "nocturne.h"

void core_scat_cpp_FUN_004fcd90(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_14;
  
  iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  if ((*(int *)(iVar2 + 0x24) != 0xc) &&
     (iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150),
     *(int *)(iVar2 + 0x24) != 0xd)) {
    iVar2 = *(int *)(param_1 + 0x1f8d0);
    if (*(int *)(param_1 + 0x1fa3c) == 0) {
      iVar2 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x1fa50);
    if (((iVar5 != 0) && (iVar2 != iVar5)) && (*(int *)(iVar5 + 0x2d8) == 8)) {
      iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      if (*(int *)(iVar5 + 0x24) == 0) {
        *(uint *)(param_1 + 0x1fa50) = 0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < param_2) {
      iVar5 = *(int *)(param_1 + 0x1fa50);
      if (iVar2 == iVar5) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x2d8)) {
          default:
            iVar5 = 2;
            break;
          case 8:
            iVar5 = 0;
          }
        }
      }
      else if (iVar5 == 0) {
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2d8) != 8)) {
LAB_004fcf93:
          iVar5 = 1;
        }
      }
      else {
        if (*(int *)(iVar5 + 0x2d8) != 8) goto LAB_004fcf93;
        iVar5 = 0;
      }
      uVar3 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(param_1,&param_2,iVar5);
      core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(param_1 + 0x150);
      if (-1 < (int)uVar3) {
        iVar1 = *(int *)(param_1 + 0x1fa50);
        if (iVar2 != iVar1) {
          if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x2d8) != 8) == uVar3)) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa50) + 0x14c) + 0xd4))
                      (*(int *)(param_1 + 0x1fa50),1);
            *(uint *)(param_1 + 0x1fa50) = 0;
          }
          if (*(int *)(param_1 + 0x1fa3c) != 0) {
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2d8) == 8)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            if (((uVar4 == uVar3) && (*(int *)(param_1 + 0x1fa50) = iVar2, iVar2 != 0)) &&
               ((**(code **)(*(int *)(iVar2 + 0x14c) + 0xd4))(iVar2,2),
               *(int *)(*(int *)(param_1 + 0x1fa50) + 0x2d8) == 8)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042aa50(param_1,iVar5);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}
