// Name: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
// Address Range: [[005f40e0, 005f4135]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

{
  double dVar1;
  
  if (seconds <= 0.0) {
    (*g_SleepFunc)(0);
    return;
  }
  dVar1 = ceil(seconds * 1000);
  dVar1 = round(dVar1);
  (*g_SleepFunc)((DWORD)(longlong)ROUND(dVar1));
  return;
}
