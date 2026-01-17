// Name: wincore_winrun.cpp_createThread_FUN_005f4070
// Address: 005f4070
// Address Range: [[005f4070, 005f4090]]
// Convention: __cdecl
// Signature: HANDLE wincore_winrun.cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)

#include "nocturne.h"

HANDLE __cdecl
wincore_winrun_cpp_createThread_FUN_005f4070(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)

{
  HANDLE pvVar1;
  DWORD DStack_4;
  
  pvVar1 = (*g_CreateThreadFunc)((LPSECURITY_ATTRIBUTES)0x0,0,thread_func,thread_param,0,&DStack_4);
  return pvVar1;
}
