// Name: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
// Address: 00471d30
// Address Range: [[00471d30, 00471e08]]
// Convention: __cdecl
// Signature: void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
// Cross-references:
//   core_actor.cpp_CDemonActor_FUN_00408c10 (00408c10) at 00408c62 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a651 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041aa40 (0041aa40) at 0041aac2 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_processPhysics_FUN_0041e350 (0041e350) at 0041e758 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_updateTransform_FUN_0041e0e0 (0041e0e0) at 0041e11a [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422c51 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425e41 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 004262c8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042efa5 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043aebc [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043e1a0 (0043e1a0) at 0043e1f8 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 (00478950) at 00478990 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047ccfb [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10 (00499f10) at 00499f31 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20 (00499c20) at 00499c41 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a7070 (004a7070) at 004a7107 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c7bb0 (004c7bb0) at 004c7bdc [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c2659 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_FUN_004bfe20 (004bfe20) at 004bfe53 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_FUN_004bfe90 (004bfe90) at 004bfead [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d40ed [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505ac0 (00505ac0) at 00505b37 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 005092a8 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509b20 (00509b20) at 00509b71 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 005219ed [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a0ac [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ca73 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056995b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581bd8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005832ef [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aa80 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057afd6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dd00 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d018 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 (00585ff0) at 00586119 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0 (00586bf0) at 00586c24 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_create_FUN_00586a90 (00586a90) at 00586b39 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_FUN_005851d0 (005851d0) at 005851dd [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00587f70 (00587f70) at 00588007 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 (0059cec0) at 0059cee3 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9a20 (005b9a20) at 005b9a5b [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bed49 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3c6d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c51c0 (005c51c0) at 005c51eb [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee4a0 (005ee4a0) at 005ee540 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 (0048c1d0) at 0048c1dd [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
          (CMatrix3x3f *this_ptr,CVector3f *euler_angles)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)euler_angles->x);
  fVar7 = (float10)fsin((float10)euler_angles->z);
  fVar8 = (float10)fsin((float10)euler_angles->y);
  fVar9 = (float10)fcos((float10)euler_angles->x);
  fVar10 = (float10)fcos((float10)euler_angles->z);
  fVar11 = (float10)fcos((float10)euler_angles->y);
  fVar1 = (float)fVar8;
  fVar2 = (float)fVar6;
  fVar3 = (float)fVar7;
  fVar4 = (float)fVar10;
  fVar5 = (float)fVar11;
  this_ptr->m[0].z = (float)((float10)fVar1 * fVar9);
  this_ptr->m[1].z = -fVar2;
  this_ptr->m[1].x = (float)(fVar7 * fVar9);
  this_ptr->m[1].y = (float)(fVar10 * fVar9);
  this_ptr->m[2].z = (float)((float10)fVar5 * fVar9);
  this_ptr->m[0].x =
       (float)((float10)fVar5 * (float10)fVar4 + fVar8 * (float10)fVar2 * (float10)fVar3);
  this_ptr->m[0].y =
       (float)(-(float10)fVar5 * (float10)fVar3 + fVar8 * (float10)fVar2 * (float10)fVar4);
  this_ptr->m[2].y =
       (float)((float10)fVar3 * (float10)fVar1 + fVar11 * (float10)fVar2 * (float10)fVar4);
  this_ptr->m[2].x =
       (float)(-(float10)fVar1 * (float10)fVar4 + fVar11 * (float10)fVar2 * (float10)fVar3);
  return;
}


// Assembly code:
// 00471d30: SUB ESP,0x34
//   Label: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
// 00471d33: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00471d37: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00471d3b: FLD float ptr [ECX]
// 00471d3d: FLD ST0
// 00471d3f: FSIN
// 00471d41: FLD float ptr [ECX + 0x8]
// 00471d44: FLD ST0
// 00471d46: FSIN
// 00471d48: FLD float ptr [ECX + 0x4]
// 00471d4b: FLD ST0
// 00471d4d: FSIN
// 00471d4f: FXCH ST5
// 00471d51: FCOS
// 00471d53: FXCH ST3
// 00471d55: FCOS
// 00471d57: FXCH
// 00471d59: FCOS
// 00471d5b: FXCH ST5
// 00471d5d: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (WRITE)
// 00471d61: FXCH ST4
// 00471d63: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (WRITE)
// 00471d67: FXCH ST3
// 00471d69: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 00471d6d: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00471d71: FMUL ST3
// 00471d73: FXCH ST2
// 00471d75: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (WRITE)
// 00471d79: FMUL ST3
// 00471d7b: FXCH ST4
// 00471d7d: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (WRITE)
// 00471d81: FMUL ST3
// 00471d83: FXCH ST5
// 00471d85: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 00471d89: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 00471d8d: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00471d91: FMULP ST4
// 00471d93: FLD ST1
// 00471d95: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00471d99: FXCH ST2
// 00471d9b: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00471d9f: FXCH ST3
// 00471da1: FSTP float ptr [EDX + 0x8]
// 00471da4: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc] (READ)
// 00471da8: FCHS
// 00471daa: FSTP float ptr [EDX + 0x14]
// 00471dad: FLD ST0
// 00471daf: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00471db3: FXCH ST5
// 00471db5: FSTP float ptr [EDX + 0xc]
// 00471db8: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00471dbc: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00471dc0: FXCH ST6
// 00471dc2: FSTP float ptr [EDX + 0x10]
// 00471dc5: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00471dc9: FCHS
// 00471dcb: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00471dcf: FXCH ST6
// 00471dd1: FADDP ST2,ST0
// 00471dd3: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00471dd7: FXCH ST5
// 00471dd9: FADDP ST2,ST0
// 00471ddb: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00471ddf: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00471de3: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x10] (READ)
// 00471de7: FCHS
// 00471de9: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00471ded: FXCH ST4
// 00471def: FSTP float ptr [EDX + 0x20]
// 00471df2: FADDP ST5,ST0
// 00471df4: FSTP float ptr [EDX]
// 00471df6: FXCH
// 00471df8: FADDP ST2,ST0
// 00471dfa: FSTP float ptr [EDX + 0x4]
// 00471dfd: FXCH
// 00471dff: FSTP float ptr [EDX + 0x1c]
// 00471e02: FSTP float ptr [EDX + 0x18]
// 00471e05: ADD ESP,0x34
// 00471e08: RET
