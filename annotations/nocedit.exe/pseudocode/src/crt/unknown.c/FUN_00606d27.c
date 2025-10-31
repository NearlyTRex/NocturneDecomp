// Name: crt_unknown.c_FUN_00606d27
// Address: 00606d27
// Address Range: [[00606d27, 00606d46]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606d27()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606d27(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606d27: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606d27
//   XREF to: Stack[0xc] (WRITE)
// 00606d2b: FXCH ST4
// 00606d2d: FLD ST0
// 00606d2f: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606d32: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606d36: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606d3b: FXCH ST4
// 00606d3d: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606d41: FXCH ST5
// 00606d43: ADD ESP,0x2c
// 00606d46: RET
