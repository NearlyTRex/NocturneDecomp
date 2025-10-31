// Name: crt_unknown.c_FUN_00606e2f
// Address: 00606e2f
// Address Range: [[00606e2f, 00606e42]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e2f()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606e2f(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606e2f: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606e2f
//   XREF to: Stack[0x0] (DATA)
// 00606e32: FXCH ST5
// 00606e34: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606e38: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606e3d: FXCH ST5
// 00606e3f: ADD ESP,0x2c
// 00606e42: RET
