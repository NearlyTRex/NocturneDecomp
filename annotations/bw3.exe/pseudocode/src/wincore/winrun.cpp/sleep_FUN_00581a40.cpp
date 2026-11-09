// Name: wincore_winrun.cpp_sleep_FUN_00581a40
// Address: 00581a40
// Address Range: [[00581a40, 00581a95]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_00581a40(double seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_sleep_FUN_00581a40(double seconds)

{
  float10 fVar1;
  double dVar2;
  
  if (seconds <= 0.0) {
    Sleep(0);
    return;
  }
  dVar2 = ceil(seconds * _DAT_005d7e9b);
  fVar1 = (float10)dVar2;
  round();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
