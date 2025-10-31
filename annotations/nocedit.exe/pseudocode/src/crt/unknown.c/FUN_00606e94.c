// Name: crt_unknown.c_FUN_00606e94
// Address: 00606e94
// Address Range: [[00606e94, 00606ead]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e94()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606e94(void)

{
  float10 fVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  fVar1 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar1;
}


// Assembly code:
// 00606e94: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606e94
//   XREF to: Stack[0x0] (DATA)
// 00606e97: FXCH ST6
// 00606e99: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606e9d: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606ea2: FXCH ST6
// 00606ea4: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606ea8: FXCH ST7
// 00606eaa: ADD ESP,0x2c
// 00606ead: RET
