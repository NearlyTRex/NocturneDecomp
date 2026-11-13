// Name: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004bcb70
// Address: 004bcb70
// Address Range: [[004bcb70, 004bcb95]]
// Convention: __cdecl
// Signature: CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70(CFieldNotes *this_ptr,uint flags)

#include "nocturne.h"

CFieldNotes * __cdecl core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70(CFieldNotes *this_ptr,uint flags)

{
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(this_ptr);
  this_ptr->is_displayed = 0;
  core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
  return this_ptr;
}
