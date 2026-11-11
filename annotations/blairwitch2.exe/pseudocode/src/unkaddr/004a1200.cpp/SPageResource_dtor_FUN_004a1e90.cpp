// Name: unkaddr_004a1200.cpp_SPageResource_dtor_FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a1eba]]
// Convention: __cdecl
// Signature: int __cdecl unkaddr_004a1200_cpp_SPageResource_dtor_FUN_004a1e90(SPageResource *this_ptr)

#include "nocturne.h"

int __cdecl unkaddr_004a1200_cpp_SPageResource_dtor_FUN_004a1e90(SPageResource *this_ptr)

{
  this_ptr->vtable = &g_SPageResourceVTable;
  if (this_ptr->link == (char *)0x0) {
    return (int)this_ptr;
  }
  FUN_005b86a0(this_ptr->link);
  this_ptr->link = (char *)0x0;
  return (int)this_ptr;
}
