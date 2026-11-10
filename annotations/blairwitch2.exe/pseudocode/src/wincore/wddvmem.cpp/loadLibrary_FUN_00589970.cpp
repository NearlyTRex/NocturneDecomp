// Name: wincore_wddvmem.cpp_loadLibrary_FUN_00589970
// Address: 00589970
// Address Range: [[00589970, 0058997c]]
// Convention: __cdecl
// Signature: HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_00589970(LPCSTR lpLibFileName)

#include "nocturne.h"

HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_00589970(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}
