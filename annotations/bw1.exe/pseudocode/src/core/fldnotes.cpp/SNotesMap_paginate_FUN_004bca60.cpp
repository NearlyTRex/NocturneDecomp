// Name: core_fldnotes.cpp_SNotesMap_paginate_FUN_004bca60
// Address: 004bca60
// Address Range: [[004bca60, 004bcb0d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004bca60(SNotesMap *this_ptr,STextView *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004bca60(SNotesMap *this_ptr,STextView *param_2)

{
  SPageResourceMap *this_ptr_00;
  uint *puVar1;
  int iVar2;
  uint *extraout_EAX;
  
  this_ptr_00 = (SPageResourceMap *)operator_new(0x1c);
  puVar1 = (uint *)0x0;
  if (this_ptr_00 != (SPageResourceMap *)0x0) {
    core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004bcb10(this_ptr_00,(int)this_ptr);
    puVar1 = extraout_EAX;
  }
  if (puVar1 == (uint *)0x0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0x894;
    core_main_c_FUN_005030e0("Out of memory");
  }
  iVar2 = core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(param_2,puVar1);
  if (iVar2 == 0) {
    core_fldnotes_cpp_STextView_addText_FUN_004bb290(param_2,&DAT_005dfca0);
    iVar2 = core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(param_2,puVar1);
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x89b;
      core_main_c_FUN_005030e0("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
