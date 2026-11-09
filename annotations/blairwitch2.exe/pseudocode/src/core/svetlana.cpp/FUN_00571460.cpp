// Name: core_svetlana.cpp_FUN_00571460
// Address: 00571460
// Address Range: [[00571460, 005714f7]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_FUN_00571460(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_FUN_00571460(CSvetlana *this_ptr,float delta_time)

{
  int iVar1;
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           ((CMotionController *)&this_ptr->field_0x2b4,&delta_time);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
    else {
      if (bone_index < 0x65) {
        core_svetlana_cpp_FUN_00571500(this_ptr,_DAT_0264bf7c);
        iVar1 = *(int *)&this_ptr->field_0x25644;
      }
      else {
        if (bone_index != 0x65) {
          core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index)
          ;
          goto LAB_005714ae;
        }
        core_svetlana_cpp_FUN_00571500(this_ptr,_DAT_0264bf80);
        iVar1 = *(int *)&this_ptr->field_0x25644;
      }
      *(uint *)&this_ptr->field_0x25644 = (uint)(iVar1 == 0);
    }
LAB_005714ae:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
