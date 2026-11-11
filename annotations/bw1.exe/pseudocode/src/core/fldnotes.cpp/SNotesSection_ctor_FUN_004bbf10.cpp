// Name: core_fldnotes.cpp_SNotesSection_ctor_FUN_004bbf10
// Address: 004bbf10
// Address Range: [[004bbf10, 004bbf39]]
// Convention: unknown
// Signature: SNotesSection * core_fldnotes_cpp_SNotesSection_ctor_FUN_004bbf10(SNotesSection *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesSection * core_fldnotes_cpp_SNotesSection_ctor_FUN_004bbf10(SNotesSection *this_ptr)

{
  this_ptr->title[0] = '\0';
  this_ptr->entry_count = 0;
  this_ptr->first_page = 0;
  this_ptr->page_count = 0;
  this_ptr->name[0] = '\0';
  return this_ptr;
}
