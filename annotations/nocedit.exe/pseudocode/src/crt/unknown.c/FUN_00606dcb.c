// Name: crt_unknown.c_FUN_00606dcb
// Address: 00606dcb
// Address Range: [[00606dcb, 00606dea]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606dcb()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606dcb(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606dcb: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606dcb
//   XREF to: Stack[0xc] (WRITE)
// 00606dcf: FXCH ST5
// 00606dd1: FLD ST0
// 00606dd3: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606dd6: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606dda: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606ddf: FXCH ST5
// 00606de1: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606de5: FXCH ST6
// 00606de7: ADD ESP,0x2c
// 00606dea: RET
