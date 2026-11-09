// Name: core_svetlana.cpp_FUN_005940a0
// Address: 005940a0
// Address Range: [[005940a0, 00594137]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_FUN_005940a0(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_FUN_005940a0(CSvetlana *this_ptr,float delta_time)

{
  int iVar1;
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270
                           ((CMotionController *)&this_ptr->field_0x158,&delta_time);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
    }
    else {
      if (bone_index < 0x65) {
        core_svetlana_cpp_FUN_00594140(this_ptr,_DAT_02c8374c);
        iVar1 = *(int *)&this_ptr->field_0x1ffb0;
      }
      else {
        if (bone_index != 0x65) {
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index)
          ;
          goto LAB_005940ee;
        }
        core_svetlana_cpp_FUN_00594140(this_ptr,_DAT_02c83750);
        iVar1 = *(int *)&this_ptr->field_0x1ffb0;
      }
      *(uint *)&this_ptr->field_0x1ffb0 = (uint)(iVar1 == 0);
    }
LAB_005940ee:
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
