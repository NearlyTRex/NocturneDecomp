// Name: crt_math.c_acos_FUN_00565ca4
// Address: 00565ca4
// Address Range: [[00565ca4, 00565ce0]]
// Convention: __fpustack_safe
// Signature: void __fpustack_safe crt_math_c_acos_FUN_00565ca4(float10 param_1)

#include "nocturne.h"

void __fpustack_safe acos(float10 param_1)

{
  char cVar1;
  
  if (((float10)1 - param_1 * param_1 != (float10)0) && (cVar1 = FUN_0056c5a8(), cVar1 == '\0')) {
    atan2();
  }
  return;
}
