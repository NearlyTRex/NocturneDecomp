// Name: wincore_winrun.cpp_createMutex_FUN_005f3fe0
// Address: 005f3fe0
// Address Range: [[005f3fe0, 005f3fed]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005f3fe0(void)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005f3fe0(void)

{
  HANDLE pvVar1;
  
  pvVar1 = (*g_CreateMutexAFunc)((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return pvVar1;
}
