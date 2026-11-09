// Name: core_zombie.cpp_FUN_005bdf60
// Address: 005bdf60
// Address Range: [[005bdf60, 005bdf98]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_FUN_005bdf60(CZombie *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_FUN_005bdf60(CZombie *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_zombie_cpp_FUN_005bdec0(this_ptr,object_shape_type);
  if ((-1 < iVar1) && (-1 < *(int *)(&this_ptr->field_0x25ac + iVar1 * 0x78))) {
    return *(int *)(&this_ptr->field_0x2298 + *(int *)(&this_ptr->field_0x25ac + iVar1 * 0x78) * 4);
  }
  return 0;
}
