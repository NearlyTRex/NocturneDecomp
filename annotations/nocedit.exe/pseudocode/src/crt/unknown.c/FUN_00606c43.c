// Name: crt_unknown.c_FUN_00606c43
// Address: 00606c43
// Address Range: [[00606c43, 00606c56]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c43()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606c43(void)

{
  float10 in_ST1;
  float10 in_ST2;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return;
}


// Assembly code:
// 00606c43: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606c43
//   XREF to: Stack[0x0] (DATA)
// 00606c46: FXCH ST2
// 00606c48: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606c4c: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606c51: FXCH ST2
// 00606c53: ADD ESP,0x2c
// 00606c56: RET
