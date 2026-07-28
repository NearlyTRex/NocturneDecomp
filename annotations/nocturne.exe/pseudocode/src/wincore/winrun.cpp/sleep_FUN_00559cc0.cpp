// Name: wincore_winrun.cpp_sleep_FUN_00559cc0
// Address: 00559cc0
// Address Range: [[00559cc0, 00559d15]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_00559cc0(double seconds)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_sleep_FUN_00559cc0(double seconds)

{
  double dVar1;
  
  if (seconds <= 0.0) {
    Sleep(0);
    return;
  }
  dVar1 = (double)ceil(seconds * 1000);
  dVar1 = round(dVar1);
  Sleep((DWORD)(longlong)ROUND(dVar1));
  return;
}
