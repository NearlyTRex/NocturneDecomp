// Name: core_fldnotes.cpp_SNotesEntry_ctor_FUN_004a3280
// Address: 004a3280
// Address Range: [[004a3280, 004a32bc]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesEntry_ctor_FUN_004a3280(SNotesEntry *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesEntry_ctor_FUN_004a3280(SNotesEntry *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&this_ptr->lines);
  *(byte *)&pCVar1[-0x11].data_array = 0;
  pCVar1[-1].vtable._us = (CStrList_vtable *)0x0;
  pCVar1[-1].data_array = (char **)0xffffffff;
  pCVar1[1].item_count = -1;
  *(byte *)&pCVar1[-0x15].data_array = 0;
  return;
}
