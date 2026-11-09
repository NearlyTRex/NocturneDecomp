// Name: core_inv.cpp_CInventory_clear_FUN_004da860
// Address: 004da860
// Address Range: [[004da860, 004da8f4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_clear_FUN_004da860(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_clear_FUN_004da860(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  CInventory *pCVar3;
  
  iVar1 = *(int *)(this_ptr + 0x10);
  while (0 < iVar1) {
    core_inv_cpp_FUN_004db8e0
              (this_ptr,*(uint *)(this_ptr + 0x14),*(int *)(this_ptr + 0x460) == 0);
    iVar1 = *(int *)(this_ptr + 0x10);
  }
  pCVar3 = this_ptr;
  do {
    pCVar2 = pCVar3 + 4;
    *(uint *)(pCVar3 + 0x5fc) = 0;
    *(uint *)(pCVar3 + 0x610) = 0;
    pCVar3 = pCVar2;
  } while (pCVar2 != this_ptr + 0x14);
  iVar1 = *(int *)(this_ptr + 0x464);
  *(uint *)(this_ptr + 0x460) = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xd8))(iVar1,2);
    *(uint *)(this_ptr + 0x464) = 0;
  }
  *(uint *)(this_ptr + 0xc) = 0;
  *(uint *)(this_ptr + 8) = 0;
  return;
}
