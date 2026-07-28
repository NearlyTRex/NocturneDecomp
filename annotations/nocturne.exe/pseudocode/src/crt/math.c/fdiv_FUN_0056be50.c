// Name: crt_math.c_fdiv_FUN_0056be50
// Address: 0056be50
// Address Range: [[0056be50, 0056bf66]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_fdiv_FUN_0056be50(float10 dividend,float10 divisor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fpustack_safe fdiv(float10 dividend,float10 divisor)

{
  float10 fVar1;
  float10 fVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  ushort in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  ushort in_stack_00000018;
  
  fVar1 = (float10)CONCAT28(in_stack_0000000c,CONCAT44(in_stack_00000008,in_stack_00000004));
  while( true ) {
    fVar2 = (float10)CONCAT28(in_stack_00000018,CONCAT44(in_stack_00000014,in_stack_00000010));
    if (CARRY4(in_stack_00000008,in_stack_00000008)) break;
    if ((in_stack_00000004 == 0 && in_stack_00000008 == 0) || ((in_stack_0000000c & 0x7fff) != 0))
    goto LAB_0056bef4;
    if ((in_stack_00000018 & 0x7fff) == 0) {
      if (CARRY4(in_stack_00000014,in_stack_00000014)) goto LAB_0056bf60;
    }
    else if (((in_stack_00000018 & 0x7fff) == 0x7fff) ||
            (!CARRY4(in_stack_00000014,in_stack_00000014))) {
LAB_0056bf60:
      return fVar2 / fVar1;
    }
    fVar2 = fVar1 * (float10)_DAT_005c3f80;
    in_stack_00000004 = SUB104(fVar2,0);
    in_stack_00000008 = (uint)((unkuint10)fVar2 >> 0x20);
    in_stack_0000000c = (ushort)((unkuint10)fVar2 >> 0x40);
  }
  if (((in_stack_00000008 * 2 ^ 0xe000000) & 0xe000000) != 0) {
    return fVar2 / fVar1;
  }
  if ((&DAT_005c3f68)[(in_stack_00000008 & 0x7fffffff) >> 0x1b] == '\0') {
    return fVar2 / fVar1;
  }
  if (((in_stack_0000000c & 0x7fff) != 0) && ((in_stack_0000000c & 0x7fff) != 0x7fff)) {
    if ((in_stack_00000018 & 0x7fff) == 1) {
      return (fVar2 * (float10)_DAT_005c3f7c) / (fVar1 * (float10)_DAT_005c3f7c);
    }
    return (fVar2 * (float10)_DAT_005c3f78) / (fVar1 * (float10)_DAT_005c3f78);
  }
LAB_0056bef4:
  return fVar2 / fVar1;
}
