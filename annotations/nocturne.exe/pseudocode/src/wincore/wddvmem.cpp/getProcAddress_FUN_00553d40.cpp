// Name: wincore_wddvmem.cpp_getProcAddress_FUN_00553d40
// Address: 00553d40
// Address Range: [[00553d40, 00553d51]]
// Convention: __cdecl
// Signature: FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(HMODULE hModule,LPCSTR lpProcName)

#include "nocturne.h"

FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00553d40(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}
