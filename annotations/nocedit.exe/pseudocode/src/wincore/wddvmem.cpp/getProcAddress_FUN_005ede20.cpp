// Name: wincore_wddvmem.cpp_getProcAddress_FUN_005ede20
// Address: 005ede20
// Address Range: [[005ede20, 005ede31]]
// Convention: __cdecl
// Signature: FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(HMODULE hModule,LPCSTR lpProcName)

#include "nocturne.h"

FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ede20(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
  pFVar1 = (*g_GetProcAddressFunc)(hModule,lpProcName);
  return pFVar1;
}
