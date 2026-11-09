// Name: core_cloth.cpp_FUN_00441d70
// Address: 00441d70
// Address Range: [[00441d70, 00441dd8]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_00441d70(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_00441d70(CClothList *this_ptr)

{
  uint uVar1;
  int iVar2;
  CClothList *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (*(int *)(pCVar3 + 0x194) != 0) {
        uVar1 = core_cloth_cpp_FUN_0043e620(*(int *)(pCVar3 + 0x194),0);
        FUN_005c0344(uVar1);
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
