// Name: core_fldnotes.cpp_SNotesEntry_dtor_FUN_004bbcf0
// Address: 004bbcf0
// Address Range: [[004bbcf0, 004bbd09]]
// Convention: __cdecl
// Signature: char *** __cdecl core_fldnotes_cpp_SNotesEntry_dtor_FUN_004bbcf0(SNotesEntry *this_ptr)

#include "nocturne.h"

char *** __cdecl core_fldnotes_cpp_SNotesEntry_dtor_FUN_004bbcf0(SNotesEntry *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_004993a0(&this_ptr->lines,0);
  return &pCVar1[-0x15].data_array;
}
