// Name: crt_unknown.c_FUN_00606e6f
// Address: 00606e6f
// Address Range: [[00606e6f, 00606e8e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e6f()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606e6f(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606e6f: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606e6f
//   XREF to: Stack[0xc] (WRITE)
// 00606e73: FXCH ST6
// 00606e75: FLD ST0
// 00606e77: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606e7a: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606e7e: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606e83: FXCH ST6
// 00606e85: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606e89: FXCH ST7
// 00606e8b: ADD ESP,0x2c
// 00606e8e: RET
