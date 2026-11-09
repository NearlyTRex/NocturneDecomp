// Name: wincore_wddvmem.cpp_freeLibrary_FUN_0057ad00
// Address: 0057ad00
// Address Range: [[0057ad00, 0057ad0c]]
// Convention: __cdecl
// Signature: BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_0057ad00(HMODULE hLibModule)

#include "nocturne.h"

BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_0057ad00(HMODULE hLibModule)

{
  BOOL BVar1;
  
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}
