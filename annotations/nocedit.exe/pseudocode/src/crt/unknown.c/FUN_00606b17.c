// Name: crt_unknown.c_FUN_00606b17
// Address: 00606b17
// Address Range: [[00606b17, 00606b2a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606b17()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606b17(void)

{
  unkbyte10 in_ST0;
  float10 in_ST2;
  float10 in_ST3;
  undefined4 uStack0000000c;
  undefined6 uStack00000010;
  undefined4 uStack00000016;
  
  uStack0000000c = (undefined4)in_ST0;
  uStack00000010 = (undefined6)((unkuint10)in_ST0 >> 0x20);
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return CONCAT46(uStack00000016,uStack00000010);
}


// Assembly code:
// 00606b17: FSTP extended double ptr [ESP + 0xc]
//   Label: crt_unknown.c_FUN_00606b17
//   XREF to: Stack[0xc] (WRITE)
// 00606b1b: FSTP extended double ptr [ESP]
//   XREF to: Stack[0x0] (DATA)
// 00606b1e: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606b23: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606b27: ADD ESP,0x2c
// 00606b2a: RET
