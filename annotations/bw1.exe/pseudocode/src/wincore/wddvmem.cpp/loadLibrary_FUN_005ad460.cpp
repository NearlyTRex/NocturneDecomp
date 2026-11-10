// Name: wincore_wddvmem.cpp_loadLibrary_FUN_005ad460
// Address: 005ad460
// Address Range: [[005ad460, 005ad46c]]
// Convention: __cdecl
// Signature: HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_005ad460(LPCSTR lpLibFileName)

#include "nocturne.h"

HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_005ad460(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}
