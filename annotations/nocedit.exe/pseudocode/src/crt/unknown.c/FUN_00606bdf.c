// Name: crt_unknown.c_FUN_00606bdf
// Address: 00606bdf
// Address Range: [[00606bdf, 00606bfe]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606bdf()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606bdf(void)

{
  float10 fVar1;
  float10 in_ST1;
  float10 in_ST2;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return fVar1;
}


// Assembly code:
// 00606bdf: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606bdf
//   XREF to: Stack[0xc] (WRITE)
// 00606be3: FXCH ST2
// 00606be5: FLD ST0
// 00606be7: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606bea: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606bee: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606bf3: FXCH ST2
// 00606bf5: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606bf9: FXCH ST3
// 00606bfb: ADD ESP,0x2c
// 00606bfe: RET
