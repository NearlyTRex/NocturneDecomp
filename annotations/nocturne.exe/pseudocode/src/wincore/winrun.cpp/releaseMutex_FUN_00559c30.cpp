// Name: wincore_winrun.cpp_releaseMutex_FUN_00559c30
// Address: 00559c30
// Address Range: [[00559c30, 00559c41]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00559c30(HANDLE mutex_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00559c30(HANDLE mutex_handle)

{
  if (mutex_handle == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(mutex_handle);
  return;
}
