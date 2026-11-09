// Name: sound_sndmain.cpp_convertDoubleToFixed_FUN_00553030
// Address: 00553030
// Address Range: [[00553030, 0055308e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_00553030(double input,int *out_integer_part,int *out_fractional_part)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_convertDoubleToFixed_FUN_00553030(double input,int *out_integer_part,int *out_fractional_part)

{
  int iVar1;
  uint *extraout_EDX;
  float10 fVar2;
  double dVar3;
  ulonglong uStack_c;
  
  dVar3 = floor(input);
  fVar2 = (float10)dVar3;
  round();
  uStack_c._0_4_ = (int)(longlong)ROUND(fVar2);
  iVar1 = (int)uStack_c;
  uStack_c = (longlong)ROUND(fVar2) & 0xffffffff;
  fVar2 = ((float10)input - (float10)uStack_c) * (float10)_DAT_005d2b7a;
  *out_integer_part = iVar1;
  round();
  uStack_c._0_4_ = (int)(longlong)ROUND(fVar2);
  *extraout_EDX = (int)uStack_c;
  return;
}
