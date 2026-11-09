// Name: core_fldnotes.cpp_NotesSection_ctor_FUN_004a9b70
// Address: 004a9b70
// Address Range: [[004a9b70, 004a9b99]]
// Convention: unknown
// Signature: SNotesSection * core_fldnotes_cpp_NotesSection_ctor_FUN_004a9b70(SNotesSection *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesSection * core_fldnotes_cpp_NotesSection_ctor_FUN_004a9b70(SNotesSection *this_ptr)

{
  this_ptr->field_0x40 = 0;
  *(uint *)&this_ptr->field_0x150 = 0;
  *(uint *)&this_ptr->field_0x140 = 0;
  *(uint *)&this_ptr->field_0x144 = 0;
  *(byte *)this_ptr = 0;
  return this_ptr;
}
