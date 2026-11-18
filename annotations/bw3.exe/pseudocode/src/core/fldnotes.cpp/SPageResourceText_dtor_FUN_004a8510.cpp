// Name: core_fldnotes.cpp_SPageResourceText_dtor_FUN_004a8510
// Address: 004a8510
// Address Range: [[004a8510, 004a8564]]
// Convention: __cdecl
// Signature: SPageResourceText * __cdecl core_fldnotes_cpp_SPageResourceText_dtor_FUN_004a8510(SPageResourceText *this_ptr,uint flags)

#include "nocturne.h"

SPageResourceText * __cdecl core_fldnotes_cpp_SPageResourceText_dtor_FUN_004a8510(SPageResourceText *this_ptr,uint flags)

{
  SPageResourceText *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_PageResource_TextTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTextVTable;
  ptr = (SPageResourceText *)core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0(&this_ptr->base);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
