// Name: core_doc.cpp_CDoc_setInventoryIndex_FUN_0045def0
// Address: 0045def0
// Address Range: [[0045def0, 0045df22]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setInventoryIndex_FUN_0045def0(CDoc *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_setInventoryIndex_FUN_0045def0(CDoc *this_ptr,int index)

{
  core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0((CHero *)this_ptr,index);
  *(uint *)&this_ptr->field_0x25758 = 0;
  *(uint *)&this_ptr->field_0x259b0 = 0;
  *(uint *)&this_ptr->field_0x2578c = 0;
  return;
}
