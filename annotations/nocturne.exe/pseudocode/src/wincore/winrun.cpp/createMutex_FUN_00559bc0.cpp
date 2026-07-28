// Name: wincore_winrun.cpp_createMutex_FUN_00559bc0
// Address: 00559bc0
// Address Range: [[00559bc0, 00559bcd]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_00559bc0(void)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_00559bc0(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return pvVar1;
}
