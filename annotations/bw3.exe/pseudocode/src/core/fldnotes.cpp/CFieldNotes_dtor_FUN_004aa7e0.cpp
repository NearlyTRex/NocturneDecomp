// Name: core_fldnotes.cpp_CFieldNotes_dtor_FUN_004aa7e0
// Address: 004aa7e0
// Address Range: [[004aa7e0, 004aa805]]
// Convention: unknown
// Signature: CFieldNotes * core_fldnotes_cpp_CFieldNotes_dtor_FUN_004aa7e0(CFieldNotes *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFieldNotes * core_fldnotes_cpp_CFieldNotes_dtor_FUN_004aa7e0(CFieldNotes *this_ptr,uint flags)

{
  core_fldnotes_cpp_FUN_004ab7a0(this_ptr);
  *(uint *)&this_ptr->field_0x40 = 0;
  core_fldnotes_cpp_FUN_004a8e00(&g_STextViewInstance);
  return this_ptr;
}
