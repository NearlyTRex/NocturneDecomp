// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10
// Address: 005a5e10
// Address Range: [[005a5e10, 005a5e6e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10(double input,int *out_integer_part,int *out_fractional_part)

{
  double dVar1;
  double dVar2;
  uint unaff_retaddr;
  
  dVar1 = floor(input);
  dVar2 = round(dVar1);
  dVar1 = ((double)CONCAT44(input._0_4_,unaff_retaddr) -
          (double)((longlong)ROUND(dVar2) & 0xffffffff)) * 4294967296;
  *input._4_4_ = (int)(longlong)ROUND(dVar2);
  dVar1 = round(dVar1);
  *out_integer_part = (int)(longlong)ROUND(dVar1);
  return;
}
