// Name: crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
// Address: 00606f13
// Address Range: [[00606f13, 00606f25]]
// Convention: __fpustack
// Signature: float10 crt_math.c_pentiumFdivpWorkaround_FUN_00606f13(float10 dividend, float10 divisor)
// Cross-references:
//   crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98 (00606f98) at 00606fcb [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 __fpustack crt_math_c_pentiumFdivpWorkaround_FUN_00606f13(float10 dividend,float10 divisor)

{
  float10 fVar1;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(dividend,divisor);
  return fVar1;
}


// Assembly code:
// 00606f13: SUB ESP,0x2c
//   Label: crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
// 00606f16: FSTP extended double ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00606f19: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (WRITE)
// 00606f1d: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606f22: ADD ESP,0x2c
// 00606f25: RET
