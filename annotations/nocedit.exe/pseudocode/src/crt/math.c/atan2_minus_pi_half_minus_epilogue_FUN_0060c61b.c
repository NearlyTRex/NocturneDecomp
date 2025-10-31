// Name: crt_math.c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b
// Address: 0060c61b
// Address Range: [[0060c61b, 0060c62f]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b(void)
// Globals:
//   float10 g_HalfCalculatedPi = 1.570796326794896619

#include "nocturne.h"

float10 crt_math_c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b(void)

{
  float10 in_ST0;
  
  return -(g_HalfCalculatedPi + in_ST0);
}


// Assembly code:
// 0060c61b: FLD extended double ptr [0x0068750e]
//   Label: crt_math.c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b
//   XREF to: 0068750e (READ)
// 0060c621: FADDP
// 0060c623: FCHS
// 0060c625: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c629: ADD ESP,0x24
// 0060c62c: POP EDX
// 0060c62d: POP ECX
// 0060c62e: POP EAX
// 0060c62f: RET
