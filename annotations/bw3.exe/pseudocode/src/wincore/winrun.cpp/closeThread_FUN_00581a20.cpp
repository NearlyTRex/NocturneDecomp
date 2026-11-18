// Name: wincore_winrun.cpp_closeThread_FUN_00581a20
// Address: 00581a20
// Address Range: [[00581a20, 00581a31]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_closeThread_FUN_00581a20(HANDLE thread_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_closeThread_FUN_00581a20(HANDLE thread_handle)

{
  if (thread_handle == (HANDLE)0x0) {
    return;
  }
  CloseHandle(thread_handle);
  return;
}
