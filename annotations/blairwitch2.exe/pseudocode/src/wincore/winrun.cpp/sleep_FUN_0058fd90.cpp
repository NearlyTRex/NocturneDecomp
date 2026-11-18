// Name: wincore_winrun.cpp_sleep_FUN_0058fd90
// Address: 0058fd90
// Address Range: [[0058fd90, 0058fde5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_0058fd90(double seconds)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_sleep_FUN_0058fd90(double seconds)

{
  double dVar1;
  
  if (seconds <= 0.0) {
    Sleep(0);
    return;
  }
  dVar1 = ceil(seconds * 1000);
  dVar1 = round(dVar1);
  Sleep((DWORD)(longlong)ROUND(dVar1));
  return;
}
