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
  uint *extraout_EDX;
  uint unaff_EBX;
  double dVar1;
  double dVar2;
  uint unaff_retaddr;
  uint uStackY_18;
  
  dVar1 = crt_math_c_floor_FUN_005feb90(input);
  dVar2 = crt_math_c_round_FUN_005fe6b0(dVar1);
  dVar1 = ((double)CONCAT44 /* combine 2-byte values */(unaff_retaddr,unaff_EBX) - (double)((longlong)ROUND(dVar2) & 0xffffffff)
          ) * 4294967296;
  *input._0_4_ = (int)(longlong)ROUND(dVar2);
  dVar1 = crt_math_c_round_FUN_005fe6b0(dVar1);
  uStackY_18 = (uint)(longlong)ROUND(dVar1);
  *extraout_EDX = uStackY_18;
  return;
}
