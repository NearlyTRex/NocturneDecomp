// Name: core_zombie.cpp_FUN_00598ee0
// Address: 00598ee0
// Address Range: [[00598ee0, 00598f18]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_FUN_00598ee0(CZombie *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_FUN_00598ee0(CZombie *this_ptr,int object_shape_type)

{
  int iVar1;
  
  iVar1 = core_zombie_cpp_FUN_00598e40(this_ptr,object_shape_type);
  if ((-1 < iVar1) && (-1 < *(int *)(&this_ptr->field_0x261c + iVar1 * 0x78))) {
    return *(int *)(&this_ptr->field_0x23f4 + *(int *)(&this_ptr->field_0x261c + iVar1 * 0x78) * 4);
  }
  return 0;
}
