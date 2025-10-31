// Name: crt_unknown.c_FUN_00606d13
// Address: 00606d13
// Address Range: [[00606d13, 00606d26]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606d13()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606d13(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606d13: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606d13
//   XREF to: Stack[0xc] (WRITE)
// 00606d17: FXCH ST3
// 00606d19: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606d1c: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606d21: FXCH ST3
// 00606d23: ADD ESP,0x2c
// 00606d26: RET
