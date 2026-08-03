// Name: wincore_wddvmem.cpp_freeLibrary_FUN_00553d20
// Address: 00553d20
// Address Range: [[00553d20, 00553d2c]]
// Convention: __cdecl
// Signature: BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_00553d20(HMODULE hLibModule)

#include "nocturne.h"

BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_00553d20(HMODULE hLibModule)

{
  BOOL BVar1;
  
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}
