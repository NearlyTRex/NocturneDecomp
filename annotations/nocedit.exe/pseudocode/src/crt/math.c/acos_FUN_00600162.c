// Name: crt_math.c_acos_FUN_00600162
// Address: 00600162
// Address Range: [[00600162, 0060019e]]
// Convention: __fpustack
// Signature: double crt_math.c_acos_FUN_00600162(double x)
// Cross-references:
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 (00472160) at 00472488 [UNCONDITIONAL_CALL]
//   core_dirmat.cpp_atan2Custom_FUN_00472090 (00472090) at 00472141 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047bada [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_safeAcos_FUN_0047b170 (0047b170) at 0047b1c8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c8be8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bf1a0 (004bf1a0) at 004bf1df [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bea48 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c478f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005c3750 (005c3750) at 005c379d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005c37e0 (005c37e0) at 005c3898 [UNCONDITIONAL_CALL]
//   core_xform.cpp_atan2Approximation_FUN_005f55c0 (005f55c0) at 005f5671 [UNCONDITIONAL_CALL]
//   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0 (005f5bd0) at 005f603b [UNCONDITIONAL_CALL]
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690 (005f5690) at 005f5afb [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToAxisAngle_FUN_005f7730 (005f7730) at 005f77a8 [UNCONDITIONAL_CALL]
//   shape_design.c_clampedArccos_FUN_00461c50 (00461c50) at 00461c97 [UNCONDITIONAL_CALL]
// Globals:
//   float10 g_PiOver2 = 1.570796326794896558
// Function calls:
//   crt_math.c_atan2_FUN_006013b1
//   crt_math.c_sqrt_FUN_0060710c

#include "nocturne.h"

double __fpustack crt_math_c_acos_FUN_00600162(double x)

{
  char extraout_AL;
  float10 fVar1;
  float10 value_to_sqrt;
  float10 y;
  
  fVar1 = (float10)x;
  value_to_sqrt = (float10)1 - fVar1 * fVar1;
  if (value_to_sqrt == (float10)0) {
    if (fVar1 < value_to_sqrt) {
      fVar1 = (float10)3.141592653589793;
    }
    else {
      fVar1 = (float10)0;
    }
  }
  else {
    fVar1 = crt_math_c_sqrt_FUN_0060710c(value_to_sqrt,fVar1);
    if (extraout_AL == '\0') {
      fVar1 = crt_math_c_atan2_FUN_006013b1(y,fVar1);
      fVar1 = g_PiOver2 - fVar1;
    }
  }
  return (double)fVar1;
}


// Assembly code:
// 00600162: PUSH AX
//   Label: crt_math.c_acos_FUN_00600162
// 00600164: FLD ST0
// 00600166: FMUL ST0
// 00600168: FLD1
// 0060016a: FSUBRP
// 0060016c: FTST
// 0060016e: FNSTSW AX
// 00600170: SAHF
// 00600171: JNZ 0x00600182
//   XREF to: 00600182 (CONDITIONAL_JUMP)
// 00600173: FCOMPP
// 00600175: FNSTSW AX
// 00600177: SAHF
// 00600178: JA 0x0060017e
//   XREF to: 0060017e (CONDITIONAL_JUMP)
// 0060017a: FLDZ
// 0060017c: JMP 0x00600180
//   XREF to: 00600180 (UNCONDITIONAL_JUMP)
// 0060017e: FLDPI
//   Label: LAB_0060017e
// 00600180: JMP 0x0060019c
//   Label: LAB_00600180
//   XREF to: 0060019c (UNCONDITIONAL_JUMP)
// 00600182: MOV AL,0x1
//   Label: LAB_00600182
// 00600184: CALL crt_math.c_sqrt_FUN_0060710c
//   XREF to: 0060710c (UNCONDITIONAL_CALL)
// 00600189: CMP AL,0x0
// 0060018b: JNZ 0x0060019c
//   XREF to: 0060019c (CONDITIONAL_JUMP)
// 0060018d: FXCH
// 0060018f: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 00600194: FLD extended double ptr [0x00684b38]
//   XREF to: 00684b38 (READ)
// 0060019a: FSUBRP
// 0060019c: POP AX
//   Label: LAB_0060019c
// 0060019e: RET
