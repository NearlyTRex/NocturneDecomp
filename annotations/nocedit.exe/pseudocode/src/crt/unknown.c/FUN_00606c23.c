// Name: crt_unknown.c_FUN_00606c23
// Address: 00606c23
// Address Range: [[00606c23, 00606c42]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c23()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606c23(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  undefined4 uStack00000020;
  undefined6 uStack00000024;
  undefined4 uStack0000002a;
  
  uStack00000020 = (undefined4)in_ST0;
  uStack00000024 = (undefined6)((unkuint10)in_ST0 >> 0x20);
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return CONCAT46(uStack0000002a,uStack00000024);
}


// Assembly code:
// 00606c23: FXCH ST3
//   Label: crt_unknown.c_FUN_00606c23
// 00606c25: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606c29: FXCH ST2
// 00606c2b: FLD ST0
// 00606c2d: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606c30: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606c34: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606c39: FXCH ST2
// 00606c3b: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606c3f: ADD ESP,0x2c
// 00606c42: RET
