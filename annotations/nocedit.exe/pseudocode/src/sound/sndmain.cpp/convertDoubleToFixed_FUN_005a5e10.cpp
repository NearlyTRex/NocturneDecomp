// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10
// Address: 005a5e10
// Address Range: [[005a5e10, 005a5e6e]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_convertDoubleToFixed_FUN_005a5e10(double input, int * out_integer_part, int * out_fractional_part)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_convertDoubleToFixed_FUN_005a5e10
          (double input,int *out_integer_part,int *out_fractional_part)

{
  uint extraout_EAX;
  uint extraout_EDX;
  float10 in_ST0;
  float10 fVar1;
  double dVar2;
  uint local_c;
  uint uStack_8;
  
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar1 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_c = (int)(longlong)ROUND(fVar1);
  fVar1 = ((float10)input - (float10)((longlong)ROUND(fVar1) & 0xffffffff)) *
          (float10)4294967296;
  *out_integer_part = local_c;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(out_fractional_part,local_c));
  uStack_8 = (uint)(longlong)ROUND(fVar1);
  *(uint *)((ulonglong)dVar2 >> 0x20) = uStack_8;
  return;
}
