// Name: crt_unknown.c_FUN_00606b07
// Address: 00606b07
// Address Range: [[00606b07, 00606b16]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b07()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606b07(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606b07: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606b07
//   XREF to: Stack[0x0] (DATA)
// 00606b0a: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606b0e: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606b13: ADD ESP,0x2c
// 00606b16: RET
