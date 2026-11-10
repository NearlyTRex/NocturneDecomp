// Name: core_prye.cpp_CPrye_dropCarriedObject_FUN_00526ff0
// Address: 00526ff0
// Address Range: [[00526ff0, 00527046]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_dropCarriedObject_FUN_00526ff0(CPrye *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_dropCarriedObject_FUN_00526ff0(CPrye *this_ptr,int hand_index,CVector3f *drop_direction)

{
  if (*(int *)(&this_ptr->field_0x25b0 + hand_index * 0x78) == *(int *)&this_ptr->field_0x20c24) {
    *(uint *)&this_ptr->field_0x20c24 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00431c40
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
