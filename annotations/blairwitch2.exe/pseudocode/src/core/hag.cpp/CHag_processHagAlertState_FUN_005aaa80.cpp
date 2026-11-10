// Name: core_hag.cpp_CHag_processHagAlertState_FUN_005aaa80
// Address: 005aaa80
// Address Range: [[005aaa80, 005aab4e]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processHagAlertState_FUN_005aaa80(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hag_cpp_CHag_processHagAlertState_FUN_005aaa80(CHag *this_ptr,float delta_time)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x342c = 0;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,delta_time);
  iVar1 = *(int *)&this_ptr->field_0x10a78;
  if (iVar1 == 0) {
    iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if (*(int *)(iVar1 + 0x24) != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      return;
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
    if ((iVar1 == 0) || (*(int *)&this_ptr->field_0x10af0 == 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      *(uint *)&this_ptr->field_0x11394 = _DAT_00600a6c;
      unkaddr_0059d350_cpp_FUN_0059dcb0(&this_ptr->field_0x10af8,0x3f000000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Chasing");
      return;
    }
    *(uint *)&this_ptr->field_0x10af0 = 0;
    *(uint *)&this_ptr->field_0x10a78 = 0;
  }
  return;
}
