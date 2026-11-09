// Name: wincore_winrun.cpp_createMutex_FUN_0058fc90
// Address: 0058fc90
// Address Range: [[0058fc90, 0058fc9d]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_0058fc90(void)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_0058fc90(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return pvVar1;
}
