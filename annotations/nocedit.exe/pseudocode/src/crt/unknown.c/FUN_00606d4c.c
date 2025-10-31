// Name: crt_unknown.c_FUN_00606d4c
// Address: 00606d4c
// Address Range: [[00606d4c, 00606d65]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606d4c()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606d4c(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606d4c: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606d4c
//   XREF to: Stack[0x0] (DATA)
// 00606d4f: FXCH ST4
// 00606d51: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606d55: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606d5a: FXCH ST4
// 00606d5c: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606d60: FXCH ST5
// 00606d62: ADD ESP,0x2c
// 00606d65: RET
