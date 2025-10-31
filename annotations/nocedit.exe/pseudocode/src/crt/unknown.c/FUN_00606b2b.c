// Name: crt_unknown.c_FUN_00606b2b
// Address: 00606b2b
// Address Range: [[00606b2b, 00606b3a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b2b()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606b2b(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606b2b: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606b2b
//   XREF to: Stack[0xc] (WRITE)
// 00606b2f: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606b32: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606b37: ADD ESP,0x2c
// 00606b3a: RET
