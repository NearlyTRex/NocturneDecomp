// Name: crt_math.c_integer_power_FUN_005ffeb2
// Address: 005ffeb2
// Address Range: [[005ffeb2, 005ffed4]]
// Convention: __cdecl
// Signature: float10 crt_math.c_integer_power_FUN_005ffeb2(float10 base, ushort exponent)

#include "nocturne.h"

float10 __cdecl crt_math_c_integer_power_FUN_005ffeb2(float10 base,ushort exponent)

{
  ushort uVar1;
  ushort in_AX;
  bool bVar2;
  bool bVar3;
  float10 in_ST0;
  float10 fVar4;
  
  while( true ) {
    bVar2 = (in_AX & 1) != 0;
    in_AX = in_AX >> 1;
    bVar3 = in_AX == 0;
    if (bVar2 || bVar3) break;
    in_ST0 = in_ST0 * in_ST0;
  }
  fVar4 = in_ST0;
  if (bVar2) {
    while (!bVar3) {
      in_ST0 = in_ST0 * in_ST0;
      uVar1 = in_AX & 1;
      in_AX = in_AX >> 1;
      bVar3 = in_AX == 0;
      if (uVar1 != 0) {
        fVar4 = fVar4 * in_ST0;
      }
    }
  }
  else {
    fVar4 = (float10)1;
  }
  return fVar4;
}
