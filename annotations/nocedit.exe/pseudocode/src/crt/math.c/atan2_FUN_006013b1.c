// Name: crt_math.c_atan2_FUN_006013b1
// Address: 006013b1
// Address Range: [[006013b1, 006013c5]]
// Convention: __fpustack
// Signature: float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
// Cross-references:
//   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 (004bf7f0) at 004bf8c1 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec390 (004ec390) at 004ec3e5 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004edbb0 (004edbb0) at 004edc90 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 (005a1800) at 005a1920 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf55e [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e455a [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e5d01 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 (005e7830) at 005e78a0 [UNCONDITIONAL_CALL]
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0 (005f77e0) at 005f796e [UNCONDITIONAL_CALL]
//   crt_math.c_acos_FUN_00600162 (00600162) at 0060018f [UNCONDITIONAL_CALL]
//   crt_math.c_asin_FUN_00600b94 (00600b94) at 00600ba9 [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050db00 (0050db00) at 0050dbf6 [UNCONDITIONAL_CALL]
// Globals:
//   byte g_UseSoftwareMath = 0x0
// Function calls:
//   crt_unknown.c_FUN_00608e14

#include "nocturne.h"

float10 __fpustack crt_math_c_atan2_FUN_006013b1(float10 y,float10 x)

{
  float10 fVar1;
  
  if ((g_UseSoftwareMath & 1) == 0) {
    fVar1 = (float10)fpatan(y,x);
  }
  else {
    fVar1 = (float10)crt_unknown_c_FUN_00608e14();
  }
  return fVar1;
}


// Assembly code:
// 006013b1: FXCH
//   Label: crt_math.c_atan2_FUN_006013b1
// 006013b3: TEST byte ptr [0x00685060],0x1
//   XREF to: 00685060 (READ)
// 006013ba: JNZ 0x006013c0
//   XREF to: 006013c0 (CONDITIONAL_JUMP)
// 006013bc: FPATAN
// 006013be: JMP 0x006013c5
//   XREF to: 006013c5 (UNCONDITIONAL_JUMP)
// 006013c0: CALL crt_unknown.c_FUN_00608e14
//   Label: LAB_006013c0
//   XREF to: 00608e14 (UNCONDITIONAL_CALL)
// 006013c5: RET
//   Label: LAB_006013c5
