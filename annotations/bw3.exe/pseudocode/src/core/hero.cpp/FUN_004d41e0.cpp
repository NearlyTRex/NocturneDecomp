// Name: core_hero.cpp_FUN_004d41e0
// Address: 004d41e0
// Address Range: [[004d41e0, 004d41f7]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004d41e0(CHero *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004d41e0(CHero *this_ptr,uint key_mask)

{
  core_inv_cpp_FUN_004de6e0((CInventory *)(this_ptr + 0x206e8),key_mask);
  return;
}
