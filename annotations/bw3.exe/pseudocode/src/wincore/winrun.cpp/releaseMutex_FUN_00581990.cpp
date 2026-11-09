// Name: wincore_winrun.cpp_releaseMutex_FUN_00581990
// Address: 00581990
// Address Range: [[00581990, 005819a1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00581990(HANDLE mutex_handle)

{
  if (mutex_handle == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(mutex_handle);
  return;
}
