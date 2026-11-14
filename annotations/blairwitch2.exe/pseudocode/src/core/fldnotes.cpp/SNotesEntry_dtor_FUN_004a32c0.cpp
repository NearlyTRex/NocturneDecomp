// Name: core_fldnotes.cpp_SNotesEntry_dtor_FUN_004a32c0
// Address: 004a32c0
// Address Range: [[004a32c0, 004a32d9]]
// Convention: __cdecl
// Signature: char *** __cdecl core_fldnotes_cpp_SNotesEntry_dtor_FUN_004a32c0(SNotesEntry *this_ptr)

#include "nocturne.h"

char *** __cdecl core_fldnotes_cpp_SNotesEntry_dtor_FUN_004a32c0(SNotesEntry *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&this_ptr->lines,0);
  return &pCVar1[-0x15].data_array;
}
