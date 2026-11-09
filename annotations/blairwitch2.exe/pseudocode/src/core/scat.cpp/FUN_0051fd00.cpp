// Name: core_scat.cpp_FUN_0051fd00
// Address: 0051fd00
// Address Range: [[0051fd00, 0051ff5b]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_0051fd00(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_FUN_0051fd00(CScat *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_14;
  
  iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  if ((*(int *)(iVar2 + 0x24) != 0xc) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4), *(int *)(iVar2 + 0x24) != 0xd))
  {
    iVar2 = *(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4);
    if (*(int *)&this_ptr->field_0x25640 == 0) {
      iVar2 = 0;
    }
    iVar5 = *(int *)&this_ptr->field_0x25654;
    if (((iVar5 != 0) && (iVar2 != iVar5)) && (*(int *)(iVar5 + 0x43c) == 9)) {
      iVar5 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
      if (*(int *)(iVar5 + 0x24) == 0) {
        *(uint *)&this_ptr->field_0x25654 = 0;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      }
    }
    local_14 = 0;
    while (0.0 < delta_time) {
      iVar5 = *(int *)&this_ptr->field_0x25654;
      if (iVar2 == iVar5) {
        if (iVar5 != 0) {
          switch(*(uint *)(iVar5 + 0x43c)) {
          default:
            iVar5 = 2;
            break;
          case 9:
            iVar5 = 0;
          }
        }
      }
      else if (iVar5 == 0) {
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x43c) != 9)) {
LAB_0051ff09:
          iVar5 = 1;
        }
      }
      else {
        if (*(int *)(iVar5 + 0x43c) != 9) goto LAB_0051ff09;
        iVar5 = 0;
      }
      uVar3 = core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
                        ((CCharacter *)this_ptr,&delta_time,iVar5);
      core_motion_cpp_FUN_00503860((CMotionController *)&this_ptr->field_0x2b4);
      if (-1 < (int)uVar3) {
        iVar1 = *(int *)&this_ptr->field_0x25654;
        if (iVar2 != iVar1) {
          if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x43c) != 9) == uVar3)) {
            (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25654 + 0x2b0) + 0xe4))
                      (*(int *)&this_ptr->field_0x25654,1);
            *(uint *)&this_ptr->field_0x25654 = 0;
          }
          if (*(int *)&this_ptr->field_0x25640 != 0) {
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x43c) == 9)) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            if (((uVar4 == uVar3) && (*(int *)&this_ptr->field_0x25654 = iVar2, iVar2 != 0)) &&
               ((**(code **)(*(int *)(iVar2 + 0x2b0) + 0xe4))(iVar2,2),
               *(int *)(*(int *)&this_ptr->field_0x25654 + 0x43c) == 9)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&this_ptr->field_0x2b4,6,1);
            }
          }
        }
        core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
                  ((CCharacter *)this_ptr,iVar5);
      }
      local_14 = local_14 + 1;
      if (1 < local_14) {
        return;
      }
    }
  }
  return;
}
