// Name: crt_math.c_atan2_minus_pi_epilogue_FUN_0060c5cb
// Address: 0060c5cb
// Address Range: [[0060c5cb, 0060c5df]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_minus_pi_epilogue_FUN_0060c5cb(void)
// Globals:
//   float10 g_CalculatedPi = 3.141592653589793239

#include "nocturne.h"

float10 crt_math_c_atan2_minus_pi_epilogue_FUN_0060c5cb(void)

{
  float10 in_ST0;
  
  return -(g_CalculatedPi - in_ST0);
}


// Assembly code:
// 0060c5cb: FLD extended double ptr [0x00687504]
//   Label: crt_math.c_atan2_minus_pi_epilogue_FUN_0060c5cb
//   XREF to: 00687504 (READ)
// 0060c5d1: FSUBRP
// 0060c5d3: FCHS
// 0060c5d5: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c5d9: ADD ESP,0x24
// 0060c5dc: POP EDX
// 0060c5dd: POP ECX
// 0060c5de: POP EAX
// 0060c5df: RET
