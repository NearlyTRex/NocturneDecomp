// Name: core_hero.cpp_FUN_004ce4a0
// Address: 004ce4a0
// Address Range: [[004ce4a0, 004ce4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004ce4a0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004ce4a0(CHero *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)(this_ptr + 0x2b4));
  core_charactr_cpp_FUN_00422930((CCharacter *)this_ptr);
  *(uint *)(this_ptr + 0x10a60) = 0;
  core_inv_cpp_FUN_004dc850(this_ptr + 0x2437c);
  *(uint *)(this_ptr + 0x255f0) = 0;
  *(uint *)(this_ptr + 0x255f4) = 0;
  *(uint *)(this_ptr + 0x255f8) = 0;
  *(uint *)(this_ptr + 0x25600) = 0x7149f2ca;
  return;
}
