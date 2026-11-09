// Name: wincore_wddvmem.cpp_FUN_0057ad10
// Address: 0057ad10
// Address Range: [[0057ad10, 0057ad1c]]
// Convention: __cdecl
// Signature: HMODULE __cdecl wincore_wddvmem_cpp_FUN_0057ad10(LPCSTR lpLibFileName)

#include "nocturne.h"

HMODULE __cdecl wincore_wddvmem_cpp_FUN_0057ad10(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}
