// Name: crt_math.c_fdiv_FUN_00606960
// Address: 00606960
// Address Range: [[00606960, 00606a76]]
// Convention: __fpustack
// Signature: float10 crt_math.c_fdiv_FUN_00606960(float10 dividend, float10 divisor)

#include "nocturne.h"

float10 __fpustack crt_math_c_fdiv_FUN_00606960(float10 dividend,float10 divisor)

{
  float10 fVar1;
  float10 fVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  ushort in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  ushort in_stack_00000018;
  
  fVar1 = (float10)CONCAT28 /* combine 2-byte values */(in_stack_0000000c,CONCAT44 /* combine 2-byte values */(in_stack_00000008,in_stack_00000004));
  while( true ) {
    fVar2 = (float10)CONCAT28 /* combine 2-byte values */(in_stack_00000018,CONCAT44 /* combine 2-byte values */(in_stack_00000014,in_stack_00000010));
    if (CARRY4(in_stack_00000008,in_stack_00000008)) break;
    if ((in_stack_00000004 == 0 && in_stack_00000008 == 0) || ((in_stack_0000000c & 0x7fff) != 0))
    goto LAB_00606a04;
    if ((in_stack_00000018 & 0x7fff) == 0) {
      if (CARRY4(in_stack_00000014,in_stack_00000014)) goto LAB_00606a70;
    }
    else if (((in_stack_00000018 & 0x7fff) == 0x7fff) ||
            (!CARRY4(in_stack_00000014,in_stack_00000014))) {
LAB_00606a70:
      return fVar2 / fVar1;
    }
    fVar2 = fVar1 * (float10)9.223372e+18f;
    in_stack_00000004 = SUB104 /* extract 3-byte value */(fVar2,0);
    in_stack_00000008 = (uint)((unkuint10)fVar2 >> 0x20);
    in_stack_0000000c = (ushort)((unkuint10)fVar2 >> 0x40);
  }
  if (((in_stack_00000008 * 2 ^ 0xe000000) & 0xe000000) != 0) {
    return fVar2 / fVar1;
  }
  if (g_IEEE754ExponentClassTable[in_stack_00000008 * 2 >> 0x1c] == 0) {
    return fVar2 / fVar1;
  }
  if (((in_stack_0000000c & 0x7fff) != 0) && ((in_stack_0000000c & 0x7fff) != 0x7fff)) {
    if ((in_stack_00000018 & 0x7fff) == 1) {
      return (fVar2 * (float10)1.0625f) /
             (fVar1 * (float10)1.0625f);
    }
    return (fVar2 * (float10)0.9375f) /
           (fVar1 * (float10)0.9375f);
  }
LAB_00606a04:
  return fVar2 / fVar1;
}
