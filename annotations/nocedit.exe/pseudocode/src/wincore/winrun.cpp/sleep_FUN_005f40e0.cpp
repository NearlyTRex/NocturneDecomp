// Name: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
// Address Range: [[005f40e0, 005f4135]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

{
  uint in_EAX;
  uint in_EDX;
  float10 in_ST0;
  double dVar1;
  uint local_10;
  
  if (0.0 >= seconds) {
    (*Sleep)(0);
    return;
  }
  crt_math_c_ceil_FUN_006001b2((double)in_ST0);
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(in_EDX,CONCAT22 /* combine 2-byte values */((short)((uint)in_EAX >> 0x10),
                                                      (ushort)(0.0 < seconds) << 8 |
                                                      (ushort)NAN(seconds) << 10 |
                                                      (ushort)(seconds == 0.0) << 0xe)));
  local_10 = (DWORD)(longlong)ROUND(dVar1);
  (*Sleep)(local_10);
  return;
}
