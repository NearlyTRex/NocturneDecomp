// Name: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
// Address Range: [[005f40e0, 005f4135]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

{
  uint extraout_EAX;
  uint extraout_EDX;
  float10 fVar1;
  uint local_8;
  
  if (seconds <= 0.0) {
    (*Sleep)(0);
    return;
  }
  crt_math_c_ceil_FUN_006001b2(seconds * 1000);
  fVar1 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_8 = (DWORD)(longlong)ROUND(fVar1);
  (*Sleep)(local_8);
  return;
}
