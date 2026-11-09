// Name: wincore_winrun.cpp_sleep_FUN_0058fd90
// Address: 0058fd90
// Address Range: [[0058fd90, 0058fde5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_0058fd90(double seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_sleep_FUN_0058fd90(double seconds)

{
  float10 fVar1;
  double dVar2;
  
  if (seconds <= 0.0) {
    Sleep(0);
    return;
  }
  dVar2 = ceil(seconds * _DAT_005eeaa2);
  fVar1 = (float10)dVar2;
  round();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
