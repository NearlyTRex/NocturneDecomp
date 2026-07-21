// Name: wincore_winrun.cpp_releaseMutex_FUN_00559c30
// Address: 00559c30
// Address Range: [[00559c30, 00559c41]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00559c30(HANDLE param_1)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_releaseMutex_FUN_00559c30(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(param_1);
  return;
}
