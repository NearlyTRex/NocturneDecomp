// Name: crt_unknown.c_FUN_00606bcb
// Address: 00606bcb
// Address Range: [[00606bcb, 00606bde]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606bcb()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606bcb(void)

{
  float10 in_ST1;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST1,in_ST3);
  return;
}


// Assembly code:
// 00606bcb: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606bcb
//   XREF to: Stack[0xc] (WRITE)
// 00606bcf: FXCH
// 00606bd1: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606bd4: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606bd9: FXCH
// 00606bdb: ADD ESP,0x2c
// 00606bde: RET
