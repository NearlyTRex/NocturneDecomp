// Name: wincore_winrun.cpp_createMutex_FUN_005b3740
// Address: 005b3740
// Address Range: [[005b3740, 005b374d]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005b3740(void)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_005b3740(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return pvVar1;
}
