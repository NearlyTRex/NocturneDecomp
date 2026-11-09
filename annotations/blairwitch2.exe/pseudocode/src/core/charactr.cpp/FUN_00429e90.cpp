// Name: core_charactr.cpp_FUN_00429e90
// Address: 00429e90
// Address Range: [[00429e90, 00429f16]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00429e90(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00429e90(CCharacter *this_ptr,float delta_time)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_applyGesture_FUN_004291f0(this_ptr);
  core_charactr_cpp_CCharacter_applyLookAt_FUN_00429b40(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  core_charactr_cpp_FUN_00429390(this_ptr);
  core_charactr_cpp_FUN_00428e30(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0x2828 == 0) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
    if (iVar1 != 1) {
      return;
    }
  }
  core_cloth_cpp_CClothList_process_FUN_005b1780
            ((CClothList *)&this_ptr->field_0x2d0c,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2574,
             (CDeformableModelInstance *)&this_ptr->field_0x2b4);
  return;
}
