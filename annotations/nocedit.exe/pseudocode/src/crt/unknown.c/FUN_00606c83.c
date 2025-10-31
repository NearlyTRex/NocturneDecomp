// Name: crt_unknown.c_FUN_00606c83
// Address: 00606c83
// Address Range: [[00606c83, 00606ca2]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c83()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606c83(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606c83: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606c83
//   XREF to: Stack[0xc] (WRITE)
// 00606c87: FXCH ST3
// 00606c89: FLD ST0
// 00606c8b: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606c8e: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606c92: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606c97: FXCH ST3
// 00606c99: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606c9d: FXCH ST4
// 00606c9f: ADD ESP,0x2c
// 00606ca2: RET
