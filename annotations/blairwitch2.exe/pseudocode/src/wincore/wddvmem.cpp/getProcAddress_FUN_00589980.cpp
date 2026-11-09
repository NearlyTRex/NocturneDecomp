// Name: wincore_wddvmem.cpp_getProcAddress_FUN_00589980
// Address: 00589980
// Address Range: [[00589980, 00589991]]
// Convention: __cdecl
// Signature: FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00589980(HMODULE hModule,LPCSTR lpProcName)

#include "nocturne.h"

FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00589980(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}
