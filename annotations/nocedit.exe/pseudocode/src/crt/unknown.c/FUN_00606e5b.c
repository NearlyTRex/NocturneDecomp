// Name: crt_unknown.c_FUN_00606e5b
// Address: 00606e5b
// Address Range: [[00606e5b, 00606e6e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e5b()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606e5b(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606e5b: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606e5b
//   XREF to: Stack[0xc] (WRITE)
// 00606e5f: FXCH ST5
// 00606e61: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606e64: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606e69: FXCH ST5
// 00606e6b: ADD ESP,0x2c
// 00606e6e: RET
