// Name: core_charactr.cpp_FUN_00427210
// Address: 00427210
// Address Range: [[00427210, 0042725d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00427210(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00427210(CCharacter *this_ptr)

{
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"glass-1.wav@2.0");
  if (this_ptr->field_0x2514 == '\0') {
    *(uint *)&this_ptr->field_0x70 = 2;
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005485c0
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,0);
  *(uint *)&this_ptr->field_0x70 = 2;
  return;
}
