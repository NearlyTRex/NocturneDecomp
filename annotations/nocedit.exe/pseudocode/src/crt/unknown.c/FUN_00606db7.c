// Name: crt_unknown.c_FUN_00606db7
// Address: 00606db7
// Address Range: [[00606db7, 00606dca]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606db7()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606db7(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606db7: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606db7
//   XREF to: Stack[0xc] (WRITE)
// 00606dbb: FXCH ST4
// 00606dbd: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606dc0: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606dc5: FXCH ST4
// 00606dc7: ADD ESP,0x2c
// 00606dca: RET
