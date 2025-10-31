// Name: crt_unknown.c_FUN_00606d6b
// Address: 00606d6b
// Address Range: [[00606d6b, 00606d8a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606d6b()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606d6b(void)

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
// 00606d6b: FXCH ST5
//   Label: crt_unknown.c_FUN_00606d6b
// 00606d6d: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606d71: FXCH ST4
// 00606d73: FLD ST0
// 00606d75: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606d78: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606d7c: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606d81: FXCH ST4
// 00606d83: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606d87: ADD ESP,0x2c
// 00606d8a: RET
