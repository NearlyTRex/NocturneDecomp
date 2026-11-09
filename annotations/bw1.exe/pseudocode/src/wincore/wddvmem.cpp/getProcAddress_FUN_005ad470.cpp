// Name: wincore_wddvmem.cpp_getProcAddress_FUN_005ad470
// Address: 005ad470
// Address Range: [[005ad470, 005ad481]]
// Convention: __cdecl
// Signature: FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(HMODULE hModule,LPCSTR lpProcName)

#include "nocturne.h"

FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}
