// Name: wincore_wddvmem.cpp_loadLibrary_FUN_005ede10
// Address: 005ede10
// Address Range: [[005ede10, 005ede1c]]
// Convention: __cdecl
// Signature: HMODULE wincore_wddvmem.cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)

#include "nocturne.h"

HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_005ede10(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
  pHVar1 = (*g_LoadLibraryAFunc)(lpLibFileName);
  return pHVar1;
}
