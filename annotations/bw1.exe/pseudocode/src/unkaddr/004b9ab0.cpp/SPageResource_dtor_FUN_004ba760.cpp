// Name: unkaddr_004b9ab0.cpp_SPageResource_dtor_FUN_004ba760
// Address: 004ba760
// Address Range: [[004ba760, 004ba78a]]
// Convention: __cdecl
// Signature: int __cdecl unkaddr_004b9ab0_cpp_SPageResource_dtor_FUN_004ba760(SPageResource *this_ptr)

#include "nocturne.h"

int __cdecl unkaddr_004b9ab0_cpp_SPageResource_dtor_FUN_004ba760(SPageResource *this_ptr)

{
  this_ptr->vtable = &g_SPageResourceVTable;
  if (this_ptr->link == (char *)0x0) {
    return (int)this_ptr;
  }
  FUN_005c09f0(this_ptr->link);
  this_ptr->link = (char *)0x0;
  return (int)this_ptr;
}
