// Name: core_hero.cpp_CHero_reset_FUN_004ec570
// Address: 004ec570
// Address Range: [[004ec570, 004ec602]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_reset_FUN_004ec570(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_reset_FUN_004ec570(CHero *this_ptr)

{
  CHero *pCVar1;
  CHero *pCVar2;
  
  *(uint *)(this_ptr + 0x1ff74) = 0;
  *(uint *)(this_ptr + 0x1ff78) = 0;
  *(uint *)(this_ptr + 0x1ff7c) = 0;
  *(uint *)(this_ptr + 0x1ff80) = 0;
  *(uint *)(this_ptr + 0x1ff84) = 0;
  *(uint *)(this_ptr + 0x1ff88) = 0;
  *(uint *)(this_ptr + 0x1ff8c) = 0;
  *(uint *)(this_ptr + 0x26fc) = 0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004fc310
            ((CInventory *)(this_ptr + 0x1fae8),0xffffffff);
  (**(code **)(*(int *)(this_ptr + 0x154) + 0x144))(this_ptr,0);
  pCVar2 = this_ptr;
  do {
    pCVar1 = pCVar2 + 0x78;
    *(uint *)(pCVar2 + 0x25b0) = 0;
    pCVar2 = pCVar1;
  } while (pCVar1 != this_ptr + 0xf0);
  return;
}
