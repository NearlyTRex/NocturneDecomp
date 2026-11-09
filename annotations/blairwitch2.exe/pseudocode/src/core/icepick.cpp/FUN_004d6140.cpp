// Name: core_icepick.cpp_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d622f]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004d6140(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_FUN_004d6140(CIcePick *this_ptr,float delta_time)

{
  int iVar1;
  uint uVar2;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&this_ptr->field_0x2b4,&delta_time);
    switch(iVar1) {
    case 100:
      iVar1 = *(int *)&this_ptr->field_0x25644 + 1;
      *(int *)&this_ptr->field_0x25644 = iVar1;
      if (4 < iVar1) {
        *(uint *)&this_ptr->field_0x25644 = 0;
      }
      break;
    case 0x65:
      core_icepick_cpp_FUN_004d6230(this_ptr,_DAT_01cee0e8);
      break;
    case 0x66:
      core_icepick_cpp_FUN_004d6230(this_ptr,_DAT_01cee0ec);
      break;
    case 0x67:
      uVar2 = rand();
      if ((uVar2 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x15,1);
      }
      break;
    case 0x68:
      iVar1 = *(int *)&this_ptr->field_0x25664;
      if (iVar1 != 0) {
        *(uint *)&this_ptr->field_0x25664 = 0;
        core_charactr_cpp_FUN_00428b10(this_ptr,1,iVar1,0x3e4ccccd,0);
      }
      break;
    case 0x69:
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,0);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
