// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10
// Address: 005a5e10
// MANUAL RECONSTRUCTION
// Address Range: [[005a5e10, 005a5e6e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)

{
  double dVar2;
  int iVar1;

  dVar2 = floor(input);
  iVar1 = (int)(longlong)ROUND(ROUND(dVar2));
  *out_integer_part = iVar1;
  *out_fractional_part = (int)(longlong)ROUND(ROUND((input - (double)iVar1) * 4294967296.0));
  return;
}
