// Name: core_icepick.cpp_FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f242f]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004f2340(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_FUN_004f2340(CIcePick *this_ptr,float delta_time)

{
  int iVar1;
  uint uVar2;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&this_ptr->field_0x158,&delta_time);
    switch(iVar1) {
    case 100:
      iVar1 = *(int *)&this_ptr->field_0x1ffb0 + 1;
      *(int *)&this_ptr->field_0x1ffb0 = iVar1;
      if (4 < iVar1) {
        *(uint *)&this_ptr->field_0x1ffb0 = 0;
      }
      break;
    case 0x65:
      core_icepick_cpp_FUN_004f2430(this_ptr,_DAT_01d06ca8);
      break;
    case 0x66:
      core_icepick_cpp_FUN_004f2430(this_ptr,_DAT_01d06cac);
      break;
    case 0x67:
      uVar2 = rand();
      if ((uVar2 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0x15,1);
      }
      break;
    case 0x68:
      iVar1 = *(int *)&this_ptr->field_0x1ffd0;
      if (iVar1 != 0) {
        *(uint *)&this_ptr->field_0x1ffd0 = 0;
        core_charactr_cpp_FUN_004325b0(this_ptr,1,iVar1,0x3e4ccccd,0);
      }
      break;
    case 0x69:
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
