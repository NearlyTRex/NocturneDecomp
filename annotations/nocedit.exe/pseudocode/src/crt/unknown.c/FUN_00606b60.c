// Name: crt_unknown.c_FUN_00606b60
// Address: 00606b60
// Address Range: [[00606b60, 00606b79]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b60()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606b60(void)

{
  float10 fVar1;
  float10 in_ST1;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST1,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606b60: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606b60
//   XREF to: Stack[0x0] (DATA)
// 00606b63: FXCH
// 00606b65: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606b69: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606b6e: FXCH
// 00606b70: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606b74: FXCH ST2
// 00606b76: ADD ESP,0x2c
// 00606b79: RET
