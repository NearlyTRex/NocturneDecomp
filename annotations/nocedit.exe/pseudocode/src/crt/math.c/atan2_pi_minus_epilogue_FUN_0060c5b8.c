// Name: crt_math.c_atan2_pi_minus_epilogue_FUN_0060c5b8
// Address: 0060c5b8
// Address Range: [[0060c5b8, 0060c5ca]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_pi_minus_epilogue_FUN_0060c5b8(void)
// Globals:
//   float10 g_CalculatedPi = 3.141592653589793239

#include "nocturne.h"

float10 crt_math_c_atan2_pi_minus_epilogue_FUN_0060c5b8(void)

{
  float10 in_ST0;
  
  return g_CalculatedPi - in_ST0;
}


// Assembly code:
// 0060c5b8: FLD extended double ptr [0x00687504]
//   Label: crt_math.c_atan2_pi_minus_epilogue_FUN_0060c5b8
//   XREF to: 00687504 (READ)
// 0060c5be: FSUBRP
// 0060c5c0: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c5c4: ADD ESP,0x24
// 0060c5c7: POP EDX
// 0060c5c8: POP ECX
// 0060c5c9: POP EAX
// 0060c5ca: RET
