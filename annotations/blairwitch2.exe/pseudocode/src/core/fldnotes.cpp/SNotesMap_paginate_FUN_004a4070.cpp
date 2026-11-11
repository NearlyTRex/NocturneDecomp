// Name: core_fldnotes.cpp_SNotesMap_paginate_FUN_004a4070
// Address: 004a4070
// Address Range: [[004a4070, 004a411d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004a4070(SNotesMap *this_ptr,STextView *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_fldnotes_cpp_SNotesMap_paginate_FUN_004a4070(SNotesMap *this_ptr,STextView *param_2)

{
  SPageResourceMap *this_ptr_00;
  uint *puVar1;
  int iVar2;
  uint *extraout_EAX;
  
  this_ptr_00 = (SPageResourceMap *)operator_new(0x1c);
  puVar1 = (uint *)0x0;
  if (this_ptr_00 != (SPageResourceMap *)0x0) {
    core_fldnotes_cpp_SPageResourceMap_ctor_FUN_004a4120(this_ptr_00,(int)this_ptr);
    puVar1 = extraout_EAX;
  }
  if (puVar1 == (uint *)0x0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x82f;
    core_main_c_FUN_004e4500("Out of memory");
  }
  iVar2 = core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(param_2,puVar1);
  if (iVar2 == 0) {
    core_fldnotes_cpp_STextView_layoutChunk_FUN_004a28b0(param_2,&DAT_005d5e36);
    iVar2 = core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(param_2,puVar1);
    if (iVar2 == 0) {
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0x836;
      core_main_c_FUN_004e4500("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
