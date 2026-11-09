// Name: core_scat.cpp_FUN_00541e30
// Address: 00541e30
// Address Range: [[00541e30, 00542085]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00541e30(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_FUN_00541e30(CScat *this_ptr,float delta_time)

{
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if ((*(int *)(pSVar2 + 0x24) != 0xc) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158),
     *(int *)(pSVar2 + 0x24) != 0xd)) {
    iVar5 = *(int *)&this_ptr->field_0x1fe20;
    if (*(int *)&this_ptr->field_0x1ffac == 0) {
      iVar5 = 0;
    }
    iVar6 = *(int *)&this_ptr->field_0x1ffc0;
    if (((iVar6 != 0) && (iVar5 != iVar6)) && (*(int *)(iVar6 + 0x2e0) == 8)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158);
      if (*(int *)(pSVar2 + 0x24) == 0) {
        *(uint *)&this_ptr->field_0x1ffc0 = 0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < delta_time) {
      iVar6 = *(int *)&this_ptr->field_0x1ffc0;
      if (iVar5 == iVar6) {
        if (iVar6 != 0) {
          switch(*(uint *)(iVar6 + 0x2e0)) {
          default:
            iVar6 = 2;
            break;
          case 8:
            iVar6 = 0;
          }
        }
      }
      else if (iVar6 == 0) {
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x2e0) != 8)) {
LAB_00542033:
          iVar6 = 1;
        }
      }
      else {
        if (*(int *)(iVar6 + 0x2e0) != 8) goto LAB_00542033;
        iVar6 = 0;
      }
      uVar3 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_004340b0
                        ((CCharacter *)this_ptr,&delta_time,iVar6);
      core_motion_cpp_FUN_00524a00((CMotionController *)&this_ptr->field_0x158);
      if (-1 < (int)uVar3) {
        iVar1 = *(int *)&this_ptr->field_0x1ffc0;
        if (iVar5 != iVar1) {
          if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x2e0) != 8) == uVar3)) {
            (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1ffc0 + 0x154) + 0xdc))
                      (*(int *)&this_ptr->field_0x1ffc0,1);
            *(uint *)&this_ptr->field_0x1ffc0 = 0;
          }
          if (*(int *)&this_ptr->field_0x1ffac != 0) {
            if ((iVar5 == 0) || (*(int *)(iVar5 + 0x2e0) == 8)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            if (((uVar4 == uVar3) && (*(int *)&this_ptr->field_0x1ffc0 = iVar5, iVar5 != 0)) &&
               ((**(code **)(*(int *)(iVar5 + 0x154) + 0xdc))(iVar5,2),
               *(int *)(*(int *)&this_ptr->field_0x1ffc0 + 0x2e0) == 8)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&this_ptr->field_0x158,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00434610
                  ((CCharacter *)this_ptr,iVar6);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}
