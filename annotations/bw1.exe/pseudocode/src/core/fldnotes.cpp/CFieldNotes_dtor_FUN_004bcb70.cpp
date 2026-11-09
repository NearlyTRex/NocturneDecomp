// Name: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004bcb70
// Address: 004bcb70
// Address Range: [[004bcb70, 004bcb95]]
// Convention: unknown
// Signature: CFieldNotes * core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70(CFieldNotes *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFieldNotes * core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70(CFieldNotes *this_ptr,uint flags)

{
  core_fldnotes_cpp_FUN_004bdaa0(this_ptr);
  *(uint *)&this_ptr->field_0x40 = 0;
  core_fldnotes_cpp_FUN_004bb1c0(&g_STextViewInstance);
  return this_ptr;
}
