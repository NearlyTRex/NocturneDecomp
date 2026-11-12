// Name: core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0
// Address: 004a83a0
// Address Range: [[004a83a0, 004a83ca]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0(SPageResource *this_ptr)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0(SPageResource *this_ptr)

{
  this_ptr->vtable = &g_SPageResourceVTable;
  if (this_ptr->link == (char *)0x0) {
    return (int)this_ptr;
  }
  FUN_005a3770(this_ptr->link);
  this_ptr->link = (char *)0x0;
  return (int)this_ptr;
}
