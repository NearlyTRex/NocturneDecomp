// Name: core_charactr.cpp_FUN_00433e80
// Address: 00433e80
// Address Range: [[00433e80, 00433f06]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00433e80(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00433e80(CCharacter *this_ptr,float delta_time)

{
  int iVar1;
  
  core_charactr_cpp_FUN_00432cb0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(this_ptr);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_00432e80(this_ptr);
  core_charactr_cpp_FUN_004328f0(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0x27bc == 0) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_00441fa0
            ((CClothList *)&this_ptr->field_0x2ca0,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2504,
             (CDeformableModelInstance *)&this_ptr->field_0x158);
  return;
}
