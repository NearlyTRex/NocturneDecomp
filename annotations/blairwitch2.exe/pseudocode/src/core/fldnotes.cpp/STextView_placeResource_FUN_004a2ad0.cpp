// Name: core_fldnotes.cpp_STextView_placeResource_FUN_004a2ad0
// Address: 004a2ad0
// Address Range: [[004a2ad0, 004a2b2f]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(STextView *this_ptr,SPageResource *resource)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a2ad0(STextView *this_ptr,SPageResource *resource)

{
  int iVar1;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004a2b30(this_ptr);
  iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0
                    (this_ptr,resource->width,resource->height);
  if (iVar1 != 0) {
    resource->y = this_ptr->cursor_y;
    resource->x = this_ptr->cursor_x;
    this_ptr->cursor_x = this_ptr->cursor_x + resource->width;
    core_fldnotes_cpp_STextView_addResource_FUN_004a2bb0(this_ptr,resource);
    return 1;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004a2c90(this_ptr);
  return 0;
}
