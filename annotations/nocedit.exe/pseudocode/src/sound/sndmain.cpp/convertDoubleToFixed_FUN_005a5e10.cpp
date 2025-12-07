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
  uint in_EAX;
  uint unaff_EBX;
  float10 in_ST0;
  double dVar1;
  uint unaff_retaddr;
  uint uStack_18;
  uint uStack_14;
  
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(input._4_4_,in_EAX));
  uStack_14 = (uint)(longlong)ROUND(dVar1);
  dVar1 = ((double)CONCAT44 /* combine 2-byte values */(unaff_retaddr,unaff_EBX) - (double)((longlong)ROUND(dVar1) & 0xffffffff)
          ) * 4294967296;
  *input._0_4_ = uStack_14;
  dVar1 = crt_math_c_round_FUN_005fe6b0(dVar1);
  uStack_18 = (uint)(longlong)ROUND(dVar1);
  *input._4_4_ = uStack_18;
  return;
}
