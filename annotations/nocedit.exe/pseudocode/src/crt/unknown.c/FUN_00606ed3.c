// Name: crt_unknown.c_FUN_00606ed3
// Address: 00606ed3
// Address Range: [[00606ed3, 00606ee6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606ed3()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606ed3(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606ed3: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606ed3
//   XREF to: Stack[0x0] (DATA)
// 00606ed6: FXCH ST6
// 00606ed8: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606edc: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606ee1: FXCH ST6
// 00606ee3: ADD ESP,0x2c
// 00606ee6: RET
