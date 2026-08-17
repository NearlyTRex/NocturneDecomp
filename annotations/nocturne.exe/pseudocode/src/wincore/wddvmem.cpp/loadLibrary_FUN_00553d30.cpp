// Name: wincore_wddvmem.cpp_loadLibrary_FUN_00553d30
// Address: 00553d30
// Address Range: [[00553d30, 00553d3c]]
// Convention: __cdecl
// Signature: HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_00553d30(LPCSTR lpLibFileName)

#include "nocturne.h"

HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_00553d30(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}
