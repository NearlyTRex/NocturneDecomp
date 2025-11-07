// Name: core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
// Address: 005f4f10
// Address Range: [[005f4f10, 005f50b8]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
// Cross-references:
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a9d3 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041ca40 (0041ca40) at 0041cbb5 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422c14 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 004260f9 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a420 (0042a420) at 0042a499 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bd30 (0042bd30) at 0042be9c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d2e0 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042d300 (0042d300) at 0042d344 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 (0042ce80) at 0042cf41 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043a2b0 (0043a2b0) at 0043a32a [UNCONDITIONAL_CALL]
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 (0043a110) at 0043a22e [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 (004bf7f0) at 004bf94c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_FUN_004d7120 (004d7120) at 004d741c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d5743 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f6550 (004f6550) at 004f6760 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8b20 (004f8b20) at 004f8c13 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fa920 (004fa920) at 004faa36 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502a70 (00502a70) at 00502adc [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502b80 (00502b80) at 00502be8 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_FUN_005205f0 (005205f0) at 00520795 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051fb66 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 00521926 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526b20 (00526b20) at 00526c22 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 (0054e1e0) at 0054e284 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d56d [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e320 (0054e320) at 0054e38f [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ee67 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558fd0 (00558fd0) at 005590a3 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005978a7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ac80 (0058ac80) at 0058ad19 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ad30 (0058ad30) at 0058ad97 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058af40 (0058af40) at 0058af76 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00595bd2 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c06b0 (005c06b0) at 005c074d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c0f81 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c3492 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_FUN_005da120 (005da120) at 005da21a [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_FUN_005da370 (005da370) at 005da470 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db364 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dba85 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e2a16 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e6b80 (005e6b80) at 005e6c61 [UNCONDITIONAL_CALL]
//   core_xform.cpp_buildMirrorTransform_FUN_005f7000 (005f7000) at 005f70fe [UNCONDITIONAL_CALL]
//   core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0 (005f50c0) at 005f50d6 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fb1f0 (005fb1f0) at 005fb3ba [UNCONDITIONAL_CALL]

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
          (CMatrix3x4f *output_matrix,CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_38[0] = matrix_a->m[0].y * output_matrix->m[2].w +
                matrix_a->m[0].w * output_matrix->m[0].w + matrix_a->m[0].x * output_matrix->m[1].w;
  local_38[1] = matrix_a->m[0].y * output_matrix->m[2].x +
                matrix_a->m[0].w * output_matrix->m[0].x + matrix_a->m[0].x * output_matrix->m[1].x;
  local_38[2] = matrix_a->m[0].y * output_matrix->m[2].y +
                matrix_a->m[0].w * output_matrix->m[0].y + matrix_a->m[0].x * output_matrix->m[1].y;
  local_28 = matrix_a->m[1].y * output_matrix->m[2].w +
             matrix_a->m[1].w * output_matrix->m[0].w + matrix_a->m[1].x * output_matrix->m[1].w;
  local_24 = matrix_a->m[1].y * output_matrix->m[2].x +
             matrix_a->m[1].x * output_matrix->m[1].x + matrix_a->m[1].w * output_matrix->m[0].x;
  local_20 = matrix_a->m[1].y * output_matrix->m[2].y +
             matrix_a->m[1].x * output_matrix->m[1].y + matrix_a->m[1].w * output_matrix->m[0].y;
  local_18 = matrix_a->m[2].y * output_matrix->m[2].w +
             matrix_a->m[2].w * output_matrix->m[0].w + matrix_a->m[2].x * output_matrix->m[1].w;
  local_14 = matrix_a->m[2].y * output_matrix->m[2].x +
             matrix_a->m[2].x * output_matrix->m[1].x + matrix_a->m[2].w * output_matrix->m[0].x;
  local_10 = matrix_a->m[2].y * output_matrix->m[2].y +
             matrix_a->m[2].x * output_matrix->m[1].y + matrix_a->m[2].w * output_matrix->m[0].y;
  local_38[3] = matrix_a->m[0].y * output_matrix->m[2].z +
                matrix_a->m[0].w * output_matrix->m[0].z + matrix_a->m[0].x * output_matrix->m[1].z
                + matrix_a->m[0].z;
  local_1c = matrix_a->m[1].y * output_matrix->m[2].z +
             matrix_a->m[1].x * output_matrix->m[1].z + matrix_a->m[1].w * output_matrix->m[0].z +
             matrix_a->m[1].z;
  local_c = matrix_a->m[2].y * output_matrix->m[2].z +
            matrix_a->m[2].x * output_matrix->m[1].z + matrix_a->m[2].w * output_matrix->m[0].z +
            matrix_a->m[2].z;
  pfVar2 = local_38;
  pfVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return (CMatrix3x4f *)unaff_ESI;
}


// Assembly code:
// 005f4f10: PUSH EBX
//   Label: core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
// 005f4f11: PUSH EDI
// 005f4f12: SUB ESP,0x30
// 005f4f15: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005f4f19: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 005f4f1d: MOV EBX,ESI
// 005f4f1f: FLD float ptr [EAX + 0x4]
// 005f4f22: FMUL float ptr [EDX + 0x10]
// 005f4f25: FLD float ptr [EAX + 0x4]
// 005f4f28: FMUL float ptr [EDX + 0x14]
// 005f4f2b: FLD float ptr [EAX + 0x4]
// 005f4f2e: FMUL float ptr [EDX + 0x18]
// 005f4f31: FLD float ptr [EAX + 0x14]
// 005f4f34: FMUL float ptr [EDX + 0x10]
// 005f4f37: FLD float ptr [EAX]
// 005f4f39: FMUL float ptr [EDX]
// 005f4f3b: FLD float ptr [EAX + 0x10]
// 005f4f3e: FXCH
// 005f4f40: FADDP ST5,ST0
// 005f4f42: FMUL float ptr [EDX + 0x4]
// 005f4f45: FLD float ptr [EAX + 0x8]
// 005f4f48: FMUL float ptr [EDX + 0x20]
// 005f4f4b: FLD float ptr [EAX]
// 005f4f4d: FXCH
// 005f4f4f: FADDP ST6,ST0
// 005f4f51: FMUL float ptr [EDX + 0x4]
// 005f4f54: FXCH ST5
// 005f4f56: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 005f4f59: FLD float ptr [EAX + 0x10]
// 005f4f5c: FXCH ST5
// 005f4f5e: FADDP ST4,ST0
// 005f4f60: FXCH ST4
// 005f4f62: FMUL float ptr [EDX + 0x8]
// 005f4f65: FLD float ptr [EAX + 0x8]
// 005f4f68: FMUL float ptr [EDX + 0x24]
// 005f4f6b: FLD float ptr [EAX]
// 005f4f6d: FXCH
// 005f4f6f: FADDP ST5,ST0
// 005f4f71: FMUL float ptr [EDX + 0x8]
// 005f4f74: FXCH ST4
// 005f4f76: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 005f4f7a: FLD float ptr [EAX + 0x24]
// 005f4f7d: FXCH ST4
// 005f4f7f: FADDP ST3,ST0
// 005f4f81: FXCH ST3
// 005f4f83: FMUL float ptr [EDX + 0x10]
// 005f4f86: FLD float ptr [EAX + 0x8]
// 005f4f89: FMUL float ptr [EDX + 0x28]
// 005f4f8c: FLD float ptr [EAX + 0x10]
// 005f4f8f: FXCH
// 005f4f91: FADDP ST4,ST0
// 005f4f93: FMUL float ptr [EDX]
// 005f4f95: FXCH ST3
// 005f4f97: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 005f4f9b: FLD float ptr [EAX + 0x20]
// 005f4f9e: FXCH ST3
// 005f4fa0: FADDP ST2,ST0
// 005f4fa2: FXCH ST2
// 005f4fa4: FMUL float ptr [EDX + 0x4]
// 005f4fa7: FLD float ptr [EAX + 0x18]
// 005f4faa: FMUL float ptr [EDX + 0x20]
// 005f4fad: FLD float ptr [EAX + 0x14]
// 005f4fb0: FXCH
// 005f4fb2: FADDP ST3,ST0
// 005f4fb4: FMUL float ptr [EDX + 0x14]
// 005f4fb7: FXCH ST2
// 005f4fb9: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 005f4fbd: FLD float ptr [EAX + 0x20]
// 005f4fc0: FXCH ST2
// 005f4fc2: FADDP ST5,ST0
// 005f4fc4: FXCH
// 005f4fc6: FMUL float ptr [EDX + 0x8]
// 005f4fc9: FLD float ptr [EAX + 0x18]
// 005f4fcc: FMUL float ptr [EDX + 0x24]
// 005f4fcf: FLD float ptr [EAX + 0x14]
// 005f4fd2: FXCH
// 005f4fd4: FADDP ST6,ST0
// 005f4fd6: FMUL float ptr [EDX + 0x18]
// 005f4fd9: FXCH ST5
// 005f4fdb: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 005f4fdf: FLD float ptr [EAX + 0x4]
// 005f4fe2: FXCH ST5
// 005f4fe4: FADDP ST4,ST0
// 005f4fe6: FXCH ST4
// 005f4fe8: FMUL float ptr [EDX + 0x1c]
// 005f4feb: FLD float ptr [EAX + 0x18]
// 005f4fee: FMUL float ptr [EDX + 0x28]
// 005f4ff1: FLD float ptr [EAX + 0x20]
// 005f4ff4: FXCH
// 005f4ff6: FADDP ST5,ST0
// 005f4ff8: FMUL float ptr [EDX]
// 005f4ffa: FXCH ST4
// 005f4ffc: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 005f5000: FLD float ptr [EAX + 0x10]
// 005f5003: FXCH ST4
// 005f5005: FADDP ST3,ST0
// 005f5007: FXCH ST3
// 005f5009: FMUL float ptr [EDX + 0xc]
// 005f500c: FLD float ptr [EAX + 0x28]
// 005f500f: FMUL float ptr [EDX + 0x20]
// 005f5012: FLD float ptr [EAX + 0x20]
// 005f5015: FXCH
// 005f5017: FADDP ST4,ST0
// 005f5019: FMUL float ptr [EDX + 0xc]
// 005f501c: FXCH ST3
// 005f501e: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 005f5022: FLD float ptr [EAX + 0x24]
// 005f5025: FMUL float ptr [EDX + 0x14]
// 005f5028: FLD float ptr [EAX + 0x24]
// 005f502b: FMUL float ptr [EDX + 0x18]
// 005f502e: FXCH
// 005f5030: FADDP ST3,ST0
// 005f5032: FADDP ST5,ST0
// 005f5034: FLD float ptr [EAX + 0x28]
// 005f5037: FMUL float ptr [EDX + 0x24]
// 005f503a: FLD float ptr [EAX + 0x28]
// 005f503d: FMUL float ptr [EDX + 0x28]
// 005f5040: FXCH
// 005f5042: FADDP ST3,ST0
// 005f5044: FLD float ptr [EAX]
// 005f5046: FMUL float ptr [EDX + 0xc]
// 005f5049: FXCH
// 005f504b: FADDP ST6,ST0
// 005f504d: FLD float ptr [EAX + 0x14]
// 005f5050: FXCH
// 005f5052: FADDP ST5,ST0
// 005f5054: FMUL float ptr [EDX + 0x1c]
// 005f5057: FLD float ptr [EAX + 0x8]
// 005f505a: FMUL float ptr [EDX + 0x2c]
// 005f505d: FXCH
// 005f505f: FADDP ST2,ST0
// 005f5061: FLD float ptr [EAX + 0x24]
// 005f5064: FMUL float ptr [EDX + 0x1c]
// 005f5067: FADDP ST4,ST0
// 005f5069: FADDP ST4,ST0
// 005f506b: FLD float ptr [EAX + 0x18]
// 005f506e: FMUL float ptr [EDX + 0x2c]
// 005f5071: FLD float ptr [EAX + 0x28]
// 005f5074: FMUL float ptr [EDX + 0x2c]
// 005f5077: MOV ECX,0xc
// 005f507c: MOV EDI,ESI
// 005f507e: MOV ESI,ESP
// 005f5080: FXCH
// 005f5082: FADDP ST2,ST0
// 005f5084: FADDP ST3,ST0
// 005f5086: FXCH
// 005f5088: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (WRITE)
// 005f508c: FXCH ST3
// 005f508e: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x10] (WRITE)
// 005f5092: FXCH
// 005f5094: FADD float ptr [EAX + 0xc]
// 005f5097: FXCH ST2
// 005f5099: FADD float ptr [EAX + 0x1c]
// 005f509c: FXCH
// 005f509e: FADD float ptr [EAX + 0x2c]
// 005f50a1: FXCH ST2
// 005f50a3: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 005f50a7: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f50ab: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc] (WRITE)
// 005f50af: MOVSD.REP ES:EDI,ESI
// 005f50b1: MOV EAX,EBX
// 005f50b3: ADD ESP,0x30
// 005f50b6: POP EDI
// 005f50b7: POP EBX
// 005f50b8: RET
