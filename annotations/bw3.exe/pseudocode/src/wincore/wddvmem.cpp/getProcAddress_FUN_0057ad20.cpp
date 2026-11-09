// Name: wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20
// Address: 0057ad20
// Address Range: [[0057ad20, 0057ad31]]
// Convention: __cdecl
// Signature: FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(HMODULE hModule,LPCSTR lpProcName)

#include "nocturne.h"

FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}
