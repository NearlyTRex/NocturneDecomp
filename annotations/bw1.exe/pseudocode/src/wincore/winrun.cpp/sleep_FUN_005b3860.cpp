// Name: wincore_winrun.cpp_sleep_FUN_005b3860
// Address: 005b3860
// Address Range: [[005b3860, 005b38b5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_005b3860(double seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_sleep_FUN_005b3860(double seconds)

{
  float10 fVar1;
  double dVar2;
  
  if (seconds <= 0.0) {
    Sleep(0);
    return;
  }
  dVar2 = ceil(seconds * _DAT_005f9e7a);
  fVar1 = (float10)dVar2;
  round();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
