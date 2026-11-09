// Name: core_hero.cpp_FUN_004eaa10
// Address: 004eaa10
// Address Range: [[004eaa10, 004eaa6f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004eaa10(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004eaa10(CHero *this_ptr)

{
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)(this_ptr + 0x158));
  core_charactr_cpp_FUN_0042c510((CCharacter *)this_ptr);
  *(uint *)(this_ptr + 0xc1d0) = 0;
  core_inv_cpp_FUN_004f9b20(this_ptr + 0x1fae8);
  *(uint *)(this_ptr + 0x1ff60) = 0;
  *(uint *)(this_ptr + 0x1ff64) = 0;
  *(uint *)(this_ptr + 0x1ff68) = 0;
  *(uint *)(this_ptr + 0x1ff70) = 0x7149f2ca;
  return;
}
