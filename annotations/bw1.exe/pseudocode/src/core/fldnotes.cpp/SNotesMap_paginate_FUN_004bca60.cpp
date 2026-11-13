// Name: core_fldnotes.cpp_SNotesMap_paginate_FUN_004bca60
// Address: 004bca60
// Address Range: [[004bca60, 004bcb0d]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004bca60(SNotesMap *this_ptr,STextView *view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004bca60(SNotesMap *this_ptr,STextView *view)

{
  SPageResourceMap *this_ptr_00;
  int iVar1;
  SPageResourceMap *resource;
  
  this_ptr_00 = (SPageResourceMap *)operator_new(0x1c);
  resource = (SPageResourceMap *)0x0;
  if (this_ptr_00 != (SPageResourceMap *)0x0) {
    resource = core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004bcb10(this_ptr_00,this_ptr);
  }
  if (resource == (SPageResourceMap *)0x0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0x894;
    core_main_c_FUN_005030e0("Out of memory");
  }
  iVar1 = core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(view,&resource->base);
  if (iVar1 == 0) {
    core_fldnotes_cpp_STextView_addText_FUN_004bb290(view,&DAT_005dfca0);
    iVar1 = core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(view,&resource->base);
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x89b;
      core_main_c_FUN_005030e0("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
