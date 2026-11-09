// Name: wincore_winrun.cpp_createThread_FUN_005b37d0
// Address: 005b37d0
// Address Range: [[005b37d0, 005b37f0]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_005b37d0(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_005b37d0(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)

{
  HANDLE pvVar1;
  DWORD DStack_4;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,thread_func,thread_param,0,&DStack_4);
  return pvVar1;
}
