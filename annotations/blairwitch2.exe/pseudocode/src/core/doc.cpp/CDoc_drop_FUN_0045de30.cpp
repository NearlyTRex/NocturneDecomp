// Name: core_doc.cpp_CDoc_drop_FUN_0045de30
// Address: 0045de30
// Address Range: [[0045de30, 0045de75]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_drop_FUN_0045de30(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_drop_FUN_0045de30(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  if (carrier == *(CDemonActor **)&this_ptr->field_0x25698) {
    *(uint *)&this_ptr->field_0x25698 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00427a60((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
