// Name: core_hero.cpp_CHero_reset_FUN_004d02e0
// Address: 004d02e0
// Address Range: [[004d02e0, 004d0372]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_reset_FUN_004d02e0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_reset_FUN_004d02e0(CHero *this_ptr)

{
  CHero *pCVar1;
  CHero *pCVar2;
  
  *(uint *)(this_ptr + 0x25604) = 0;
  *(uint *)(this_ptr + 0x25608) = 0;
  *(uint *)(this_ptr + 0x2560c) = 0;
  *(uint *)(this_ptr + 0x25610) = 0;
  *(uint *)(this_ptr + 0x25614) = 0;
  *(uint *)(this_ptr + 0x25618) = 0;
  *(uint *)(this_ptr + 0x2561c) = 0;
  *(uint *)(this_ptr + 0x276c) = 0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004def40
            ((CInventory *)(this_ptr + 0x2437c),0xffffffff);
  (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x150))(this_ptr,0);
  pCVar2 = this_ptr;
  do {
    pCVar1 = pCVar2 + 0x78;
    *(uint *)(pCVar2 + 0x2620) = 0;
    pCVar2 = pCVar1;
  } while (pCVar1 != this_ptr + 0xf0);
  return;
}
