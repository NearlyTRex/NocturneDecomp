// Name: crt_math.c_atan2_negate_epilogue_FUN_0060c5ab
// Address: 0060c5ab
// Address Range: [[0060c5ab, 0060c5b7]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_atan2_negate_epilogue_FUN_0060c5ab(void)

#include "nocturne.h"

float10 crt_math_c_atan2_negate_epilogue_FUN_0060c5ab(void)

{
  float10 in_ST0;
  
  return -in_ST0;
}


// Assembly code:
// 0060c5ab: FCHS
//   Label: crt_math.c_atan2_negate_epilogue_FUN_0060c5ab
// 0060c5ad: FLDCW word ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 0060c5b1: ADD ESP,0x24
// 0060c5b4: POP EDX
// 0060c5b5: POP ECX
// 0060c5b6: POP EAX
// 0060c5b7: RET
