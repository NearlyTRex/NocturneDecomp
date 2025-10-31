// Name: crt_math.c_atan2_minus_pi_half_epilogue_FUN_0060c5f3
// Address: 0060c5f3
// Address Range: [[0060c5f3, 0060c607]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_minus_pi_half_epilogue_FUN_0060c5f3(void)
// Globals:
//   float10 g_HalfCalculatedPi = 1.570796326794896619

#include "nocturne.h"

float10 crt_math_c_atan2_minus_pi_half_epilogue_FUN_0060c5f3(void)

{
  float10 in_ST0;
  
  return -(g_HalfCalculatedPi - in_ST0);
}


// Assembly code:
// 0060c5f3: FLD extended double ptr [0x0068750e]
//   Label: crt_math.c_atan2_minus_pi_half_epilogue_FUN_0060c5f3
//   XREF to: 0068750e (READ)
// 0060c5f9: FSUBRP
// 0060c5fb: FCHS
// 0060c5fd: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c601: ADD ESP,0x24
// 0060c604: POP EDX
// 0060c605: POP ECX
// 0060c606: POP EAX
// 0060c607: RET
