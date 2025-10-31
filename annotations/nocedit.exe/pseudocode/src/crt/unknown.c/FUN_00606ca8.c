// Name: crt_unknown.c_FUN_00606ca8
// Address: 00606ca8
// Address Range: [[00606ca8, 00606cc1]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606ca8()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606ca8(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606ca8: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606ca8
//   XREF to: Stack[0x0] (DATA)
// 00606cab: FXCH ST3
// 00606cad: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606cb1: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606cb6: FXCH ST3
// 00606cb8: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606cbc: FXCH ST4
// 00606cbe: ADD ESP,0x2c
// 00606cc1: RET
