// Name: core_fldnotes.cpp_SNotesMap_paginate_FUN_004aa6d0
// Address: 004aa6d0
// Address Range: [[004aa6d0, 004aa77d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004aa6d0(SNotesMap *this_ptr,STextView *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004aa6d0(SNotesMap *this_ptr,STextView *param_2)

{
  SPageResourceMap *this_ptr_00;
  uint *puVar1;
  int iVar2;
  uint *extraout_EAX;
  
  this_ptr_00 = (SPageResourceMap *)operator_new(0x1c);
  puVar1 = (uint *)0x0;
  if (this_ptr_00 != (SPageResourceMap *)0x0) {
    core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004aa780(this_ptr_00,(int)this_ptr);
    puVar1 = extraout_EAX;
  }
  if (puVar1 == (uint *)0x0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0x892;
    core_main_c_FUN_004e4330("Out of memory");
  }
  iVar2 = core_fldnotes_cpp_STextView_placeResource_FUN_004a9150(param_2,puVar1);
  if (iVar2 == 0) {
    core_fldnotes_cpp_STextView_addText_FUN_004a8ed0(param_2,&DAT_005c118d);
    iVar2 = core_fldnotes_cpp_STextView_placeResource_FUN_004a9150(param_2,puVar1);
    if (iVar2 == 0) {
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0x899;
      core_main_c_FUN_004e4330("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
