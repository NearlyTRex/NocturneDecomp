// Name: wincore_wddvmem.cpp_freeLibrary_FUN_00589960
// Address: 00589960
// Address Range: [[00589960, 0058996c]]
// Convention: __cdecl
// Signature: BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_00589960(HMODULE hLibModule)

#include "nocturne.h"

BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_00589960(HMODULE hLibModule)

{
  BOOL BVar1;
  
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}
