// Name: core_fldnotes.cpp_SNotesSection_ctor_FUN_004a3520
// Address: 004a3520
// Address Range: [[004a3520, 004a3549]]
// Convention: __cdecl
// Signature: SNotesSection * __cdecl core_fldnotes_cpp_SNotesSection_ctor_FUN_004a3520(SNotesSection *this_ptr)

#include "nocturne.h"

SNotesSection * __cdecl core_fldnotes_cpp_SNotesSection_ctor_FUN_004a3520(SNotesSection *this_ptr)

{
  this_ptr->title[0] = '\0';
  this_ptr->entry_count = 0;
  this_ptr->first_page = 0;
  this_ptr->page_count = 0;
  this_ptr->name[0] = '\0';
  return this_ptr;
}
