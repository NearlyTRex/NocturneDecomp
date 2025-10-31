// Name: crt_unknown.c_FUN_00606ce7
// Address: 00606ce7
// Address Range: [[00606ce7, 00606cfa]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606ce7()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606ce7(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606ce7: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606ce7
//   XREF to: Stack[0x0] (DATA)
// 00606cea: FXCH ST3
// 00606cec: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606cf0: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606cf5: FXCH ST3
// 00606cf7: ADD ESP,0x2c
// 00606cfa: RET
