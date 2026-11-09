// Name: core_cloth.cpp_FUN_005b1550
// Address: 005b1550
// Address Range: [[005b1550, 005b15b8]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_005b1550(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_005b1550(CClothList *this_ptr)

{
  uint uVar1;
  int iVar2;
  CClothList *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (*(int *)(pCVar3 + 0x194) != 0) {
        uVar1 = core_necklace_cpp_FUN_005ade00(*(int *)(pCVar3 + 0x194),0);
        FUN_005b7fdc(uVar1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar2 < *(int *)this_ptr);
  }
  *(uint *)this_ptr = 0;
  memset(this_ptr + 4,0,400);
  memset(this_ptr + 0x194,0,0x28);
  return;
}
