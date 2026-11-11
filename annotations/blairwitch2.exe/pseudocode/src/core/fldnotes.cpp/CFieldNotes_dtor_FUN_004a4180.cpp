// Name: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004a4180
// Address: 004a4180
// Address Range: [[004a4180, 004a41a5]]
// Convention: unknown
// Signature: CFieldNotes * core_fldnotes_cpp_CFieldNotes_dtor_FUN_004a4180(CFieldNotes *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFieldNotes * core_fldnotes_cpp_CFieldNotes_dtor_FUN_004a4180(CFieldNotes *this_ptr,uint flags)

{
  core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(this_ptr);
  this_ptr->is_displayed = 0;
  core_fldnotes_cpp_STextView_reset_FUN_004a27e0(&g_STextViewInstance);
  return this_ptr;
}
