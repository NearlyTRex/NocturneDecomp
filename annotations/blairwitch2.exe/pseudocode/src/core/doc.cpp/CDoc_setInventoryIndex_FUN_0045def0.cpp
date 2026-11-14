// Name: core_doc.cpp_CDoc_setInventoryIndex_FUN_0045def0
// Address: 0045def0
// Address Range: [[0045def0, 0045df22]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setInventoryIndex_FUN_0045def0(CDoc *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_setInventoryIndex_FUN_0045def0(CDoc *this_ptr,int index)

{
  core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0(&this_ptr->base,index);
  this_ptr->lantern_mode = 0;
  this_ptr->lantern_tween_pct = 0.0;
  *(uint *)&this_ptr->field_0x2578c = 0;
  return;
}
