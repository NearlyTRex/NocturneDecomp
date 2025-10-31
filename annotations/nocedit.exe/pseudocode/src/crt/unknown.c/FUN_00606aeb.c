// Name: crt_unknown.c_FUN_00606aeb
// Address: 00606aeb
// Address Range: [[00606aeb, 00606b06]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606aeb()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606aeb(void)

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
// 00606aeb: FXCH
//   Label: crt_unknown.c_FUN_00606aeb
// 00606aed: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606af1: FLD ST0
// 00606af3: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606af6: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606afa: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606aff: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606b03: ADD ESP,0x2c
// 00606b06: RET
