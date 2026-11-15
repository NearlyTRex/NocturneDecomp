// Name: wincore_winrun.cpp_sleep_FUN_00581a40
// Address: 00581a40
// Address Range: [[00581a40, 00581a95]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_00581a40(double seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_sleep_FUN_00581a40(double seconds)

{
  double dVar1;
  
  if (seconds <= 0.0) {
    Sleep(0);
    return;
  }
  dVar1 = ceil(seconds * _DAT_005d7e9b);
  dVar1 = round(dVar1);
  Sleep((DWORD)(longlong)ROUND(dVar1));
  return;
}
