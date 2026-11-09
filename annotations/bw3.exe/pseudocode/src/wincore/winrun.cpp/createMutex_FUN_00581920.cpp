// Name: wincore_winrun.cpp_createMutex_FUN_00581920
// Address: 00581920
// Address Range: [[00581920, 0058192d]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_00581920(void)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createMutex_FUN_00581920(void)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return pvVar1;
}
