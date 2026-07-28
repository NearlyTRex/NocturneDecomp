// Name: wincore_winrun.cpp_createThread_FUN_00559c50
// Address: 00559c50
// Address Range: [[00559c50, 00559c70]]
// Convention: __cdecl
// Signature: HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_00559c50(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)

#include "nocturne.h"

HANDLE __cdecl wincore_winrun_cpp_createThread_FUN_00559c50(LPTHREAD_START_ROUTINE thread_func,LPVOID thread_param)

{
  HANDLE pvVar1;
  DWORD DStack_4;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,thread_func,thread_param,0,&DStack_4);
  return pvVar1;
}
