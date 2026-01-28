// Name: wincore_winrun.cpp_releaseMutex_FUN_005f4050
// Address: 005f4050
// Address Range: [[005f4050, 005f4061]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)

{
  if (mutex_handle == (HANDLE)0x0) {
    return;
  }
  (*g_ReleaseMutexFunc)(mutex_handle);
  return;
}
