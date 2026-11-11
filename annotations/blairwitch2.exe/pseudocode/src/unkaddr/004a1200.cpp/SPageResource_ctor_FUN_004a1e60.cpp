// Name: unkaddr_004a1200.cpp_SPageResource_ctor_FUN_004a1e60
// Address: 004a1e60
// Address Range: [[004a1e60, 004a1e8b]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_004a1200_cpp_SPageResource_ctor_FUN_004a1e60(SPageResource *this_ptr)

#include "nocturne.h"

void __cdecl unkaddr_004a1200_cpp_SPageResource_ctor_FUN_004a1e60(SPageResource *this_ptr)

{
  this_ptr->link = (char *)0x0;
  this_ptr->height = 0;
  this_ptr->y = 0;
  this_ptr->vtable = &g_SPageResourceVTable;
  this_ptr->width = this_ptr->height;
  this_ptr->x = this_ptr->y;
  return;
}
