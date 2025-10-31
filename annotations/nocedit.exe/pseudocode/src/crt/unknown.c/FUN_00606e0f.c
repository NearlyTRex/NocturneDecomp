// Name: crt_unknown.c_FUN_00606e0f
// Address: 00606e0f
// Address Range: [[00606e0f, 00606e2e]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606e0f()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606e0f(void)

{
  unkbyte10 in_ST0;
  float10 in_ST2;
  float10 in_ST3;
  undefined4 uStack00000020;
  undefined6 uStack00000024;
  undefined4 uStack0000002a;
  
  uStack00000020 = (undefined4)in_ST0;
  uStack00000024 = (undefined6)((unkuint10)in_ST0 >> 0x20);
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return CONCAT46(uStack0000002a,uStack00000024);
}


// Assembly code:
// 00606e0f: FXCH ST6
//   Label: crt_unknown.c_FUN_00606e0f
// 00606e11: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606e15: FXCH ST5
// 00606e17: FLD ST0
// 00606e19: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606e1c: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606e20: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606e25: FXCH ST5
// 00606e27: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606e2b: ADD ESP,0x2c
// 00606e2e: RET
