// Name: wincore_winrun.cpp_releaseMutex_FUN_0058fd00
// Address: 0058fd00
// Address Range: [[0058fd00, 0058fd11]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_0058fd00(HANDLE mutex_handle)

{
  if (mutex_handle == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(mutex_handle);
  return;
}
