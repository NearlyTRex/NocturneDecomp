// Name: core_doc.cpp_CDoc_dropCarriedObject_FUN_0045ddd0
// Address: 0045ddd0
// Address Range: [[0045ddd0, 0045de26]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_dropCarriedObject_FUN_0045ddd0(CDoc *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_dropCarriedObject_FUN_0045ddd0(CDoc *this_ptr,int hand_index,CVector3f *drop_direction)

{
  if (*(int *)(&this_ptr->field_0x2620 + hand_index * 0x78) == *(int *)&this_ptr->field_0x25698) {
    *(uint *)&this_ptr->field_0x25698 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00428d60
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
