// Name: crt_unknown.c_FUN_00606cc7
// Address: 00606cc7
// Address Range: [[00606cc7, 00606ce6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606cc7()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606cc7(void)

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
// 00606cc7: FXCH ST4
//   Label: crt_unknown.c_FUN_00606cc7
// 00606cc9: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606ccd: FXCH ST3
// 00606ccf: FLD ST0
// 00606cd1: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606cd4: FSTP extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (WRITE)
// 00606cd8: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606cdd: FXCH ST3
// 00606cdf: FLD extended double ptr [ESP + 0x20]
//   XREF to: Stack[0x20] (READ)
// 00606ce3: ADD ESP,0x2c
// 00606ce6: RET
