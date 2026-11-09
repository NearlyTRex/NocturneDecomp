// Name: core_cloth.cpp_CCloth_allocMemory_FUN_0043e640
// Address: 0043e640
// Address Range: [[0043e640, 0043e690]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043e640(CCloth *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_0043e640(CCloth *this_ptr)

{
  int iVar1;
  
  core_cloth_cpp_FUN_0043e6a0(this_ptr);
  iVar1 = FUN_005c1268(*(int *)(this_ptr + 0x104) << 2);
  *(int *)(this_ptr + 0x3aafc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\cloth.cpp";
  _DAT_01d1d404 = 0x77;
  core_main_c_FUN_005030e0("CCloth::allocMemory - Out of memory");
  return;
}
