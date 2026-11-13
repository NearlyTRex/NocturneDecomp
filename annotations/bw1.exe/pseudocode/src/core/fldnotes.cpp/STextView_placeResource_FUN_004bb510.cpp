// Name: core_fldnotes.cpp_STextView_placeResource_FUN_004bb510
// Address: 004bb510
// Address Range: [[004bb510, 004bb56f]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(STextView *this_ptr,SPageResource *resource)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_STextView_placeResource_FUN_004bb510(STextView *this_ptr,SPageResource *resource)

{
  int iVar1;
  
  core_fldnotes_cpp_STextView_flushWord_FUN_004bb570(this_ptr);
  iVar1 = core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0
                    (this_ptr,resource->width,resource->height);
  if (iVar1 != 0) {
    resource->y = this_ptr->cursor_y;
    resource->x = this_ptr->cursor_x;
    this_ptr->cursor_x = this_ptr->cursor_x + resource->width;
    core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(this_ptr,resource);
    return 1;
  }
  core_fldnotes_cpp_STextView_newPage_FUN_004bb6c0(this_ptr);
  return 0;
}
