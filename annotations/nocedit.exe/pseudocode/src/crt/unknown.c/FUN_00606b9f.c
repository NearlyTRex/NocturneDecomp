// Name: crt_unknown.c_FUN_00606b9f
// Address: 00606b9f
// Address Range: [[00606b9f, 00606bb2]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b9f()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606b9f(void)

{
  float10 in_ST1;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST1,in_ST3);
  return;
}


// Assembly code:
// 00606b9f: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606b9f
//   XREF to: Stack[0x0] (DATA)
// 00606ba2: FXCH
// 00606ba4: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606ba8: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606bad: FXCH
// 00606baf: ADD ESP,0x2c
// 00606bb2: RET
