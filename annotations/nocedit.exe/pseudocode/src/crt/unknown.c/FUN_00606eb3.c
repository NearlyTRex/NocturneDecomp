// Name: crt_unknown.c_FUN_00606eb3
// Address: 00606eb3
// Address Range: [[00606eb3, 00606ed2]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606eb3()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606eb3(void)

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
// 00606eb3: FXCH ST7
//   Label: crt_unknown.c_FUN_00606eb3
// 00606eb5: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606eb9: FXCH ST6
// 00606ebb: FLD ST0
// 00606ebd: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606ec0: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606ec4: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606ec9: FXCH ST6
// 00606ecb: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606ecf: ADD ESP,0x2c
// 00606ed2: RET
