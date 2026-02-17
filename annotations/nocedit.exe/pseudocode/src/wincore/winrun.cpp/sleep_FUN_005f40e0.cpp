// Name: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
// Address Range: [[005f40e0, 005f4135]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

{
  double dVar1;
  
  if (seconds <= 0.0) {
    (*g_SleepFunc)(0);
    return;
  }
  dVar1 = ceil(seconds * 1000);
  (*g_SleepFunc)((DWORD)(longlong)ROUND(ROUND(dVar1)));
  return;
}
