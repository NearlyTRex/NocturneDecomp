// Name: wincore_winrun.cpp_closeThread_FUN_005b3840
// Address: 005b3840
// Address Range: [[005b3840, 005b3851]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_closeThread_FUN_005b3840(HANDLE thread_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_closeThread_FUN_005b3840(HANDLE thread_handle)

{
  if (thread_handle == (HANDLE)0x0) {
    return;
  }
  CloseHandle(thread_handle);
  return;
}
