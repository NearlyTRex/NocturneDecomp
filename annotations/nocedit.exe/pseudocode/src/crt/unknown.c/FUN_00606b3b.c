// Name: crt_unknown.c_FUN_00606b3b
// Address: 00606b3b
// Address Range: [[00606b3b, 00606b5a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b3b()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606b3b(void)

{
  float10 fVar1;
  float10 in_ST1;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST1,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606b3b: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606b3b
//   XREF to: Stack[0xc] (WRITE)
// 00606b3f: FXCH
// 00606b41: FLD ST0
// 00606b43: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606b46: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606b4a: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606b4f: FXCH
// 00606b51: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606b55: FXCH ST2
// 00606b57: ADD ESP,0x2c
// 00606b5a: RET
