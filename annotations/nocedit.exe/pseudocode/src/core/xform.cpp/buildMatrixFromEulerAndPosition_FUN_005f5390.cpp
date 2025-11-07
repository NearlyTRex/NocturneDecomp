// Name: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
// Address: 005f5390
// Address Range: [[005f5390, 005f54bd]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
// Cross-references:
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a87b [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 004260e0 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 (0042ce80) at 0042cec0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 (0043a110) at 0043a20a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e27f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 (004bf7f0) at 004bf92f [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502b80 (00502b80) at 00502bcb [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051faca [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 (0054e1e0) at 0054e268 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054ce41 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ee11 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598054 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00595bb0 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db319 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e29fd [UNCONDITIONAL_CALL]
//   core_xform.cpp_buildMirrorTransform_FUN_005f7000 (005f7000) at 005f7087 [UNCONDITIONAL_CALL]
//   core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70 (005f7b70) at 005f7b91 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
          (CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)euler_angles->x);
  fVar7 = (float10)fcos((float10)euler_angles->x);
  fVar8 = (float10)fsin((float10)euler_angles->z);
  fVar9 = (float10)fcos((float10)euler_angles->z);
  fVar10 = (float10)fsin((float10)euler_angles->y);
  fVar11 = (float10)fcos((float10)euler_angles->y);
  dVar1 = (double)fVar10;
  dVar2 = (double)fVar7;
  dVar3 = (double)fVar8;
  dVar4 = (double)fVar9;
  dVar5 = (double)fVar11;
  output_matrix->m[2].x = (float)-fVar6;
  output_matrix->m[2].w = (float)((float10)dVar1 * (float10)dVar2);
  output_matrix->m[0].x = (float)(fVar8 * (float10)dVar2);
  output_matrix->m[1].x = (float)(fVar9 * (float10)dVar2);
  output_matrix->m[2].y = (float)((float10)dVar5 * (float10)dVar2);
  output_matrix->m[0].w = (float)((float10)dVar5 * (float10)dVar4 + fVar10 * fVar6 * (float10)dVar3)
  ;
  output_matrix->m[1].y = (float)((float10)dVar3 * (float10)dVar1 + fVar11 * fVar6 * (float10)dVar4)
  ;
  output_matrix->m[1].w =
       (float)(-(float10)dVar5 * (float10)dVar3 + fVar10 * fVar6 * (float10)dVar4);
  output_matrix->m[0].y =
       (float)(-(float10)dVar1 * (float10)dVar4 + fVar11 * fVar6 * (float10)dVar3);
  output_matrix->m[0].z =
       -(position->z * output_matrix->m[0].y +
        position->x * output_matrix->m[0].w + position->y * output_matrix->m[0].x);
  output_matrix->m[1].z =
       -(position->z * output_matrix->m[1].y +
        position->x * output_matrix->m[1].w + position->y * output_matrix->m[1].x);
  output_matrix->m[2].z =
       -(position->z * output_matrix->m[2].y +
        position->x * output_matrix->m[2].w + position->y * output_matrix->m[2].x);
  return;
}


// Assembly code:
// 005f5390: PUSH EBX
//   Label: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
// 005f5391: SUB ESP,0x38
// 005f5394: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005f5398: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005f539c: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 005f53a0: FLD float ptr [EBX]
// 005f53a2: FLD ST0
// 005f53a4: FSIN
// 005f53a6: FXCH
// 005f53a8: FCOS
// 005f53aa: FLD float ptr [EBX + 0x8]
// 005f53ad: FLD ST0
// 005f53af: FSIN
// 005f53b1: FXCH
// 005f53b3: FCOS
// 005f53b5: FLD float ptr [EBX + 0x4]
// 005f53b8: FLD ST0
// 005f53ba: FSIN
// 005f53bc: FXCH
// 005f53be: FCOS
// 005f53c0: FXCH
// 005f53c2: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f53c6: FMUL ST5
// 005f53c8: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005f53cc: FXCH ST5
// 005f53ce: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 005f53d2: FXCH ST4
// 005f53d4: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f53d8: FXCH ST3
// 005f53da: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (WRITE)
// 005f53de: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f53e2: FXCH ST2
// 005f53e4: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (WRITE)
// 005f53e8: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f53ec: FXCH
// 005f53ee: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (WRITE)
// 005f53f2: FMUL ST5
// 005f53f4: FLD ST4
// 005f53f6: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f53fa: FXCH ST5
// 005f53fc: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5400: FXCH ST6
// 005f5402: FCHS
// 005f5404: FSTP float ptr [EDX + 0x24]
// 005f5407: FLD ST0
// 005f5409: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f540d: FXCH ST4
// 005f540f: FSTP float ptr [EDX + 0x20]
// 005f5412: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5416: FXCH ST2
// 005f5418: FSTP float ptr [EDX + 0x4]
// 005f541b: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005f541f: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5423: FXCH
// 005f5425: FSTP float ptr [EDX + 0x14]
// 005f5428: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f542c: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005f5430: FXCH
// 005f5432: FADDP ST4,ST0
// 005f5434: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005f5438: FCHS
// 005f543a: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f543e: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005f5442: FCHS
// 005f5444: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5448: FXCH ST2
// 005f544a: FADDP ST3,ST0
// 005f544c: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005f5450: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f5454: FSTP float ptr [EDX + 0x28]
// 005f5457: FADDP ST5,ST0
// 005f5459: FADDP ST2,ST0
// 005f545b: FXCH ST2
// 005f545d: FSTP float ptr [EDX]
// 005f545f: FXCH
// 005f5461: FSTP float ptr [EDX + 0x18]
// 005f5464: FXCH
// 005f5466: FSTP float ptr [EDX + 0x10]
// 005f5469: FSTP float ptr [EDX + 0x8]
// 005f546c: FLD float ptr [ECX + 0x4]
// 005f546f: FMUL float ptr [EDX + 0x4]
// 005f5472: FLD float ptr [ECX]
// 005f5474: FMUL float ptr [EDX]
// 005f5476: FADDP
// 005f5478: FLD float ptr [ECX + 0x8]
// 005f547b: FMUL float ptr [EDX + 0x8]
// 005f547e: FADDP
// 005f5480: FCHS
// 005f5482: FSTP float ptr [EDX + 0xc]
// 005f5485: FLD float ptr [ECX + 0x4]
// 005f5488: FMUL float ptr [EDX + 0x14]
// 005f548b: FLD float ptr [ECX]
// 005f548d: FMUL float ptr [EDX + 0x10]
// 005f5490: FADDP
// 005f5492: FLD float ptr [ECX + 0x8]
// 005f5495: FMUL float ptr [EDX + 0x18]
// 005f5498: FADDP
// 005f549a: FCHS
// 005f549c: FSTP float ptr [EDX + 0x1c]
// 005f549f: FLD float ptr [ECX + 0x4]
// 005f54a2: FMUL float ptr [EDX + 0x24]
// 005f54a5: FLD float ptr [ECX]
// 005f54a7: FMUL float ptr [EDX + 0x20]
// 005f54aa: FADDP
// 005f54ac: FLD float ptr [ECX + 0x8]
// 005f54af: FMUL float ptr [EDX + 0x28]
// 005f54b2: FADDP
// 005f54b4: FCHS
// 005f54b6: FSTP float ptr [EDX + 0x2c]
// 005f54b9: ADD ESP,0x38
// 005f54bc: POP EBX
// 005f54bd: RET
