// Name: crt_math.c_atan2_pi_half_minus_epilogue_FUN_0060c5e0
// Address: 0060c5e0
// Address Range: [[0060c5e0, 0060c5f2]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_pi_half_minus_epilogue_FUN_0060c5e0(void)
// Globals:
//   float10 g_HalfCalculatedPi = 1.570796326794896619

#include "nocturne.h"

float10 crt_math_c_atan2_pi_half_minus_epilogue_FUN_0060c5e0(void)

{
  float10 in_ST0;
  
  return g_HalfCalculatedPi - in_ST0;
}


// Assembly code:
// 0060c5e0: FLD extended double ptr [0x0068750e]
//   Label: crt_math.c_atan2_pi_half_minus_epilogue_FUN_0060c5e0
//   XREF to: 0068750e (READ)
// 0060c5e6: FSUBRP
// 0060c5e8: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c5ec: ADD ESP,0x24
// 0060c5ef: POP EDX
// 0060c5f0: POP ECX
// 0060c5f1: POP EAX
// 0060c5f2: RET
