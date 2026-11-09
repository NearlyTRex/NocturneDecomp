// Name: wincore_winrun.cpp_releaseMutex_FUN_005b37b0
// Address: 005b37b0
// Address Range: [[005b37b0, 005b37c1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005b37b0(HANDLE mutex_handle)

{
  if (mutex_handle == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(mutex_handle);
  return;
}
