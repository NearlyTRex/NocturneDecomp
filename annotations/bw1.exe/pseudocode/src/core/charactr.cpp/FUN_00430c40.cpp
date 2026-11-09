// Name: core_charactr.cpp_FUN_00430c40
// Address: 00430c40
// Address Range: [[00430c40, 00430c8d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00430c40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00430c40(CCharacter *this_ptr)

{
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"glass-1.wav@2.0");
  if (this_ptr->field_0x24a8 == '\0') {
    *(uint *)&this_ptr->field_0x70 = 2;
    return;
  }
  core_skeleton_cpp_FUN_0056ac60
            ((CDeformableModelInstance *)&this_ptr->field_0x158,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,0);
  *(uint *)&this_ptr->field_0x70 = 2;
  return;
}
