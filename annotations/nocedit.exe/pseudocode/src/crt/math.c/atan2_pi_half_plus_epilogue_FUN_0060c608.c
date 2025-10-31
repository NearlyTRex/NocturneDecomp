// Name: crt_math.c_atan2_pi_half_plus_epilogue_FUN_0060c608
// Address: 0060c608
// Address Range: [[0060c608, 0060c61a]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_pi_half_plus_epilogue_FUN_0060c608(void)
// Globals:
//   float10 g_HalfCalculatedPi = 1.570796326794896619

#include "nocturne.h"

float10 crt_math_c_atan2_pi_half_plus_epilogue_FUN_0060c608(void)

{
  float10 in_ST0;
  
  return g_HalfCalculatedPi + in_ST0;
}


// Assembly code:
// 0060c608: FLD extended double ptr [0x0068750e]
//   Label: crt_math.c_atan2_pi_half_plus_epilogue_FUN_0060c608
//   XREF to: 0068750e (READ)
// 0060c60e: FADDP
// 0060c610: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c614: ADD ESP,0x24
// 0060c617: POP EDX
// 0060c618: POP ECX
// 0060c619: POP EAX
// 0060c61a: RET
