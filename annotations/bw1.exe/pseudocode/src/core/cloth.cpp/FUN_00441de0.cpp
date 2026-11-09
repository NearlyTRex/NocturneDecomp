// Name: core_cloth.cpp_FUN_00441de0
// Address: 00441de0
// Address Range: [[00441de0, 00441e54]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_00441de0(CClothList *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_FUN_00441de0(CClothList *this_ptr,char *filename)

{
  CClothList CVar1;
  CClothList *pCVar2;
  
  if (9 < *(int *)this_ptr) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x5de;
    core_main_c_FUN_005030e0("CClothList::add - list is full");
  }
  pCVar2 = this_ptr + *(int *)this_ptr * 0x28 + 4;
  do {
    CVar1 = (CClothList)*filename;
    *pCVar2 = CVar1;
    if (CVar1 == (CClothList)0x0) break;
    CVar1 = *(CClothList *)(filename + 1);
    filename = filename + 2;
    pCVar2[1] = CVar1;
    pCVar2 = pCVar2 + 2;
  } while (CVar1 != (CClothList)0x0);
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = 0;
  *(int *)this_ptr = *(int *)this_ptr + 1;
  return;
}
