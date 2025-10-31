// Name: crt_unknown.c_FUN_00606c04
// Address: 00606c04
// Address Range: [[00606c04, 00606c1d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c04()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606c04(void)

{
  float10 fVar1;
  float10 in_ST1;
  float10 in_ST2;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return fVar1;
}


// Assembly code:
// 00606c04: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606c04
//   XREF to: Stack[0x0] (DATA)
// 00606c07: FXCH ST2
// 00606c09: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606c0d: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606c12: FXCH ST2
// 00606c14: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606c18: FXCH ST3
// 00606c1a: ADD ESP,0x2c
// 00606c1d: RET
