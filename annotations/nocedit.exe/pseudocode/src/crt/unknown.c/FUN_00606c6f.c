// Name: crt_unknown.c_FUN_00606c6f
// Address: 00606c6f
// Address Range: [[00606c6f, 00606c82]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c6f()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606c6f(void)

{
  float10 in_ST1;
  float10 in_ST2;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return;
}


// Assembly code:
// 00606c6f: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606c6f
//   XREF to: Stack[0xc] (WRITE)
// 00606c73: FXCH ST2
// 00606c75: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606c78: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606c7d: FXCH ST2
// 00606c7f: ADD ESP,0x2c
// 00606c82: RET
