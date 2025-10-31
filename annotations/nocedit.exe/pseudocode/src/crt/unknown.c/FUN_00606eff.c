// Name: crt_unknown.c_FUN_00606eff
// Address: 00606eff
// Address Range: [[00606eff, 00606f12]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606eff()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606eff(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606eff: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606eff
//   XREF to: Stack[0xc] (WRITE)
// 00606f03: FXCH ST6
// 00606f05: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606f08: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606f0d: FXCH ST6
// 00606f0f: ADD ESP,0x2c
// 00606f12: RET
