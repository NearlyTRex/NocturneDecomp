// Name: core_prye.cpp_CPrye_drop_FUN_00527050
// Address: 00527050
// Address Range: [[00527050, 00527095]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_drop_FUN_00527050(CPrye *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_drop_FUN_00527050(CPrye *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  if (carrier == *(CDemonActor **)&this_ptr->field_0x20c24) {
    *(uint *)&this_ptr->field_0x20c24 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00430810((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
