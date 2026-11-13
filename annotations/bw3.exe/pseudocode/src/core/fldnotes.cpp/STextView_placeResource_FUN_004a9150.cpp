// Name: core_fldnotes.cpp_STextView_placeResource_FUN_004a9150
// Address: 004a9150
// Address Range: [[004a9150, 004a91af]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a9150(STextView *this_ptr,SPageResource *resource)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004a9150(STextView *this_ptr,SPageResource *resource)

{
  int iVar1;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004a91b0(this_ptr);
  iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004a9710
                    (this_ptr,resource->width,resource->height);
  if (iVar1 != 0) {
    resource->y = this_ptr->cursor_y;
    resource->x = this_ptr->cursor_x;
    this_ptr->cursor_x = this_ptr->cursor_x + resource->width;
    core_fldnotes_cpp_STextView_addResource_FUN_004a9230(this_ptr,resource);
    return 1;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004a9300(this_ptr);
  return 0;
}
