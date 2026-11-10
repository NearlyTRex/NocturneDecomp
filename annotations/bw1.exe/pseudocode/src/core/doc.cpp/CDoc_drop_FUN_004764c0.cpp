// Name: core_doc.cpp_CDoc_drop_FUN_004764c0
// Address: 004764c0
// Address Range: [[004764c0, 00476505]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_drop_FUN_004764c0(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_drop_FUN_004764c0(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  if (carrier == *(CDemonActor **)&this_ptr->field_0x20004) {
    *(uint *)&this_ptr->field_0x20004 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00431490((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
