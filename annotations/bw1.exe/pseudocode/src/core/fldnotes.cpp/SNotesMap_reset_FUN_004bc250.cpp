// Name: core_fldnotes.cpp_SNotesMap_reset_FUN_004bc250
// Address: 004bc250
// Address Range: [[004bc250, 004bc2c2]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SNotesMap_reset_FUN_004bc250(SNotesMap *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SNotesMap_reset_FUN_004bc250(SNotesMap *this_ptr)

{
  this_ptr->entry = (SNotesEntry *)0x0;
  this_ptr->set_count = 0;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&this_ptr->image);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&this_ptr->reveal_mask);
  this_ptr->last_reveal_x = -1;
  this_ptr->last_reveal_y = -1;
  this_ptr->reveal_dirty = 1;
  this_ptr->image_name[0] = '\0';
  if (this_ptr->saved_alpha == (void *)0x0) {
    return;
  }
  FUN_005c09f0(this_ptr->saved_alpha);
  this_ptr->saved_alpha = (void *)0x0;
  return;
}
