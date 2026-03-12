// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10
// Address: 005a5e10
// Address Range: [[005a5e10, 005a5e6e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)

{
  double dVar1;
  double dVar2;
  ulonglong local_c;
  int iVar1;
  
  dVar2 = floor(input);
  local_c._0_4_ = (int)(longlong)ROUND(ROUND(dVar2));
  iVar1 = (int)local_c;
  local_c = (longlong)ROUND(ROUND(dVar2)) & 0xffffffff;
  dVar1 = (input - (double)local_c) * 4294967296;
  *out_integer_part = iVar1;
  local_c._0_4_ = (int)(longlong)ROUND(ROUND(dVar1));
  *out_fractional_part = (int)local_c;
  return;
}
