// Name: wincore_wddvmem.cpp_freeLibrary_FUN_005ad450
// Address: 005ad450
// Address Range: [[005ad450, 005ad45c]]
// Convention: __cdecl
// Signature: BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_005ad450(HMODULE hLibModule)

#include "nocturne.h"

BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_005ad450(HMODULE hLibModule)

{
  BOOL BVar1;
  
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}
