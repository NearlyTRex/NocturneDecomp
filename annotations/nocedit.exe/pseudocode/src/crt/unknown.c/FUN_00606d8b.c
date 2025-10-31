// Name: crt_unknown.c_FUN_00606d8b
// Address: 00606d8b
// Address Range: [[00606d8b, 00606d9e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606d8b()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606d8b(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606d8b: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606d8b
//   XREF to: Stack[0x0] (DATA)
// 00606d8e: FXCH ST4
// 00606d90: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606d94: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606d99: FXCH ST4
// 00606d9b: ADD ESP,0x2c
// 00606d9e: RET
