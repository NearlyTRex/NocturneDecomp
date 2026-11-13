// Name: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004aa7e0
// Address: 004aa7e0
// Address Range: [[004aa7e0, 004aa805]]
// Convention: __cdecl
// Signature: CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004aa7e0(CFieldNotes *this_ptr,uint flags)

#include "nocturne.h"

CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004aa7e0(CFieldNotes *this_ptr,uint flags)

{
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(this_ptr);
  this_ptr->is_displayed = 0;
  core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
  return this_ptr;
}
