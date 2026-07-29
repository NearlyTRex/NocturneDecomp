// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_005235b0
// Address: 005235b0
// Address Range: [[005235b0, 0052360e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005235b0(double input,int *out_integer_part,int *out_fractional_part)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_005235b0(double input,int *out_integer_part,int *out_fractional_part)

{
  double dVar1;
  double dVar2;
  uint unaff_retaddr;
  
  dVar1 = floor(input);
  dVar2 = round(dVar1);
  dVar1 = (__BITCAST_DOUBLE(CONCAT44(input._0_4_,unaff_retaddr)) -
          (double)((longlong)ROUND(dVar2) & 0xffffffff)) * _DAT_0059293e;
  *input._4_4_ = (int)(longlong)ROUND(dVar2);
  dVar1 = round(dVar1);
  *out_integer_part = (int)(longlong)ROUND(dVar1);
  return;
}
