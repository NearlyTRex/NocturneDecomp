// Name: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
// Address: 00472030
// Address Range: [[00472030, 00472084]]
// Convention: __cdecl
// Signature: CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input)
// Cross-references:
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 (00408ea0) at 00408eb3 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 (00408f10) at 00408f46 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a57a [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a90e [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_processPhysics_FUN_0041e350 (0041e350) at 0041ef23 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_setupVelocities_FUN_00420180 (00420180) at 004201b9 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043b02f [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043e1a0 (0043e1a0) at 0043e230 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_00449f10 (00449f10) at 00449f7e [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 (00454060) at 004542b1 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30 (0044ef30) at 0044f005 [UNCONDITIONAL_CALL]
//   core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770 (00471770) at 004717b1 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 00473869 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475a55 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 0047401a [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474b65 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 (004781d0) at 00478534 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 004804c7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c3127 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509330 (00509330) at 00509580 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005495c0 (005495c0) at 0054972b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056d4a0 (0056d4a0) at 0056d707 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fac0 (0056fac0) at 0056fb1e [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_FUN_005762a0 (005762a0) at 005762ef [UNCONDITIONAL_CALL]
//   core_setdir.cpp_FUN_005763a0 (005763a0) at 005764e1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00584047 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970 (00585970) at 005859ac [UNCONDITIONAL_CALL]
//   core_wateract.cpp_FUN_005eb040 (005eb040) at 005eb0b4 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee3f0 (005ee3f0) at 005ee443 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_005151e0 (005151e0) at 00515475 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
          (CMatrix3x3f *matrix,CVector3f *output,CVector3f *input)

{
  output->x = input->z * matrix->m[2].x + input->x * matrix->m[0].x + input->y * matrix->m[1].x;
  output->y = input->z * matrix->m[2].y + input->x * matrix->m[0].y + input->y * matrix->m[1].y;
  output->z = input->z * matrix->m[2].z + input->x * matrix->m[0].z + input->y * matrix->m[1].z;
  return output;
}


// Assembly code:
// 00472030: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: Stack[0x4] (READ)
// 00472034: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00472038: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0047203c: FLD float ptr [EDX + 0x4]
// 0047203f: FMUL float ptr [EAX + 0xc]
// 00472042: FLD float ptr [EDX]
// 00472044: FMUL float ptr [EAX]
// 00472046: FADDP
// 00472048: FLD float ptr [EDX + 0x8]
// 0047204b: FMUL float ptr [EAX + 0x18]
// 0047204e: FADDP
// 00472050: FSTP float ptr [ECX]
// 00472052: FLD float ptr [EDX + 0x4]
// 00472055: FMUL float ptr [EAX + 0x10]
// 00472058: FLD float ptr [EDX]
// 0047205a: FMUL float ptr [EAX + 0x4]
// 0047205d: FADDP
// 0047205f: FLD float ptr [EDX + 0x8]
// 00472062: FMUL float ptr [EAX + 0x1c]
// 00472065: FADDP
// 00472067: FSTP float ptr [ECX + 0x4]
// 0047206a: FLD float ptr [EDX + 0x4]
// 0047206d: FMUL float ptr [EAX + 0x14]
// 00472070: FLD float ptr [EDX]
// 00472072: FMUL float ptr [EAX + 0x8]
// 00472075: FADDP
// 00472077: FLD float ptr [EDX + 0x8]
// 0047207a: FMUL float ptr [EAX + 0x20]
// 0047207d: FADDP
// 0047207f: MOV EAX,ECX
// 00472081: FSTP float ptr [ECX + 0x8]
// 00472084: RET
