// Name: crt_math.c_dispatch_divide_FUN_00606aaf
// Address: 00606aaf
// Address Range: [[00606aaf, 00606aca]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_dispatch_divide_FUN_00606aaf(void)
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_math_c_dispatch_divide_FUN_00606aaf(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606aaf: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_math.c_dispatch_divide_FUN_00606aaf
//   XREF to: Stack[0xc] (WRITE)
// 00606ab3: FLD ST0
// 00606ab5: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606ab8: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606abc: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606ac1: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606ac5: FXCH
// 00606ac7: ADD ESP,0x2c
// 00606aca: RET
