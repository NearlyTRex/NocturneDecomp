// Name: core_doc.cpp_CDoc_dropCarriedObject_FUN_00476460
// Address: 00476460
// Address Range: [[00476460, 004764b6]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_dropCarriedObject_FUN_00476460(CDoc *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_dropCarriedObject_FUN_00476460(CDoc *this_ptr,int hand_index,CVector3f *drop_direction)

{
  if (*(int *)(&this_ptr->field_0x25b0 + hand_index * 0x78) == *(int *)&this_ptr->field_0x20004) {
    *(uint *)&this_ptr->field_0x20004 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00432820
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
