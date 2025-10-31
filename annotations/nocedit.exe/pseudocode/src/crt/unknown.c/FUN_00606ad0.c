// Name: crt_unknown.c_FUN_00606ad0
// Address: 00606ad0
// Address Range: [[00606ad0, 00606ae5]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606ad0()
// Function calls:
//   crt_math.c_ieee754_divide_FUN_00606960

#include "nocturne.h"

void crt_unknown_c_FUN_00606ad0(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return;
}


// Assembly code:
// 00606ad0: FSTP extended double ptr [ESP]
//   Label: crt_unknown.c_FUN_00606ad0
//   XREF to: Stack[0x0] (DATA)
// 00606ad3: FSTP extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 00606ad7: CALL crt_math.c_ieee754_divide_FUN_00606960
//   XREF to: 00606960 (UNCONDITIONAL_CALL)
// 00606adc: FLD extended double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00606ae0: FXCH
// 00606ae2: ADD ESP,0x2c
// 00606ae5: RET
