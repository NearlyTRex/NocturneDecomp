// Name: crt_unknown.c_FUN_00606df0
// Address: 00606df0
// Address Range: [[00606df0, 00606e09]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606df0()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606df0(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606df0: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606df0
//   XREF to: Stack[0x0] (DATA)
// 00606df3: FXCH ST5
// 00606df5: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606df9: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606dfe: FXCH ST5
// 00606e00: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606e04: FXCH ST6
// 00606e06: ADD ESP,0x2c
// 00606e09: RET
