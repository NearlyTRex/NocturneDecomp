// Name: core_charactr.cpp_FUN_00433350
// Address: 00433350
// Address Range: [[00433350, 004333d6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00433350(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00433350(CCharacter *this_ptr,float delta_time)

{
  int iVar1;
  
  core_charactr_cpp_FUN_004320d0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00433000(this_ptr);
  core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_004322a0(this_ptr);
  core_charactr_cpp_FUN_00431d10(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0x27bc == 0) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_0043fc00
            ((CClothList *)&this_ptr->field_0x2f08,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2504,
             (CDeformableModelInstance *)&this_ptr->field_0x158);
  return;
}
