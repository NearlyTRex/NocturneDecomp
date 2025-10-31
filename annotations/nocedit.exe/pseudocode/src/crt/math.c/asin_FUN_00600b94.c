// Name: crt_math.c_asin_FUN_00600b94
// Address: 00600b94
// Address Range: [[00600b94, 00600bae]]
// Convention: __fpustack
// Signature: float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)
// Cross-references:
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 (00472160) at 00472201 [UNCONDITIONAL_CALL]
//   core_dirmat.cpp_atan2Custom_FUN_00472090 (00472090) at 004720b8 [UNCONDITIONAL_CALL]
//   core_xform.cpp_atan2Approximation_FUN_005f55c0 (005f55c0) at 005f55e8 [UNCONDITIONAL_CALL]
//   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0 (005f5bd0) at 005f5f60 [UNCONDITIONAL_CALL]
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690 (005f5690) at 005f5a20 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_atan2_FUN_006013b1
//   crt_math.c_sqrt_FUN_0060710c

#include "nocturne.h"

float10 __fpustack crt_math_c_asin_FUN_00600b94(float10 sine_value)

{
  char extraout_AL;
  float10 x;
  float10 y;
  
  x = crt_math_c_sqrt_FUN_0060710c((float10)1 - sine_value * sine_value,sine_value);
  if (extraout_AL == '\0') {
    x = crt_math_c_atan2_FUN_006013b1(y,x);
  }
  return x;
}


// Assembly code:
// 00600b94: FLD ST0
//   Label: crt_math.c_asin_FUN_00600b94
// 00600b96: FMUL ST0
// 00600b98: FLD1
// 00600b9a: FSUBRP
// 00600b9c: MOV AL,0x2
// 00600b9e: CALL crt_math.c_sqrt_FUN_0060710c
//   XREF to: 0060710c (UNCONDITIONAL_CALL)
// 00600ba3: CMP AL,0x0
// 00600ba5: JNZ 0x00600bae
//   XREF to: 00600bae (CONDITIONAL_JUMP)
// 00600ba7: FXCH
// 00600ba9: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 00600bae: RET
//   Label: LAB_00600bae
