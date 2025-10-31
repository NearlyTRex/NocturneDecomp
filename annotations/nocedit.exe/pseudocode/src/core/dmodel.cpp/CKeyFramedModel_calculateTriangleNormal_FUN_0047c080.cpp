// Name: core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
// Address: 0047c080
// Address Range: [[0047c080, 0047c213]]
// Convention: __cdecl
// Signature: CVector3f * core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080(CKeyFramedModel * this_ptr, CVector3f * output_normal, int frame_index, int poly_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b7ac [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
          (CKeyFramedModel *this_ptr,CVector3f *output_normal,int frame_index,int poly_index)

{
  CVector3i **ppCVar1;
  SMRGLPrimitiveQuad **ppSVar2;
  SMRGLPrimitiveQuad *pSVar3;
  CVector3i *pCVar4;
  CVector3i *pCVar5;
  CVector3i *pCVar6;
  CVector3i *pCVar7;
  CVector3i *pCVar8;
  CVector3i *pCVar9;
  CVector3i *pCVar10;
  CVector3i *pCVar11;
  CVector3i *pCVar12;
  CVector3i *pCVar13;
  CVector3i *pCVar14;
  CVector3i *pCVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  CVector3i **ppCVar20;
  
  ppSVar2 = this_ptr->poly_vert_list;
  iVar19 = frame_index * this_ptr->vertex_count;
  ppCVar20 = this_ptr->vertex_list;
  ppCVar1 = ppCVar20 + iVar19 * 3 + (int)ppSVar2[poly_index * 0x12 + 9] * 3;
  pSVar3 = ppSVar2[poly_index * 0x12 + 6];
  pCVar4 = *ppCVar1;
  pCVar5 = ppCVar20[iVar19 * 3 + (int)pSVar3 * 3];
  pCVar6 = ppCVar1[1];
  pCVar7 = ppCVar20[iVar19 * 3 + (int)pSVar3 * 3 + 1];
  pCVar8 = ppCVar1[2];
  pCVar9 = ppCVar20[iVar19 * 3 + (int)pSVar3 * 3 + 2];
  ppCVar20 = ppCVar20 + iVar19 * 3 + (int)ppSVar2[poly_index * 0x12 + 0xc] * 3;
  pCVar10 = *ppCVar1;
  pCVar11 = *ppCVar20;
  pCVar12 = ppCVar1[1];
  pCVar13 = ppCVar20[1];
  pCVar14 = ppCVar20[2];
  pCVar15 = ppCVar1[2];
  fVar16 = (float)((int)pCVar11 - (int)pCVar10) * (float)((int)pCVar8 - (int)pCVar9) -
           (float)((int)pCVar4 - (int)pCVar5) * (float)((int)pCVar14 - (int)pCVar15);
  output_normal->y = fVar16;
  fVar18 = (float)((int)pCVar6 - (int)pCVar7) * (float)((int)pCVar14 - (int)pCVar15) -
           (float)((int)pCVar13 - (int)pCVar12) * (float)((int)pCVar8 - (int)pCVar9);
  output_normal->x = fVar18;
  fVar17 = (float)((int)pCVar4 - (int)pCVar5) * (float)((int)pCVar13 - (int)pCVar12) -
           (float)((int)pCVar11 - (int)pCVar10) * (float)((int)pCVar6 - (int)pCVar7);
  output_normal->z = fVar17;
  fVar16 = SQRT(fVar17 * output_normal->z + fVar16 * output_normal->y + fVar18 * output_normal->x);
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    output_normal->x = output_normal->x * fVar16;
    output_normal->y = output_normal->y * fVar16;
    output_normal->z = output_normal->z * fVar16;
    return output_normal;
  }
  output_normal->z = 0.0;
  output_normal->y = output_normal->z;
  output_normal->x = output_normal->y;
  return output_normal;
}


// Assembly code:
// 0047c080: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
// 0047c081: PUSH ESI
// 0047c082: PUSH EDI
// 0047c083: PUSH EBP
// 0047c084: MOV EBP,ESP
// 0047c086: SUB ESP,0x28
// 0047c089: AND ESP,0xfffffff8
// 0047c08c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c08f: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047c092: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0047c095: LEA ECX,[EBX*0x8 + 0x0]
// 0047c09c: ADD ECX,EBX
// 0047c09e: MOV ESI,dword ptr [EAX + 0x114]
// 0047c0a4: SHL ECX,0x3
// 0047c0a7: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0047c0aa: ADD ESI,ECX
// 0047c0ac: IMUL EBX,dword ptr [EAX + 0x104]
// 0047c0b3: LEA ECX,[EBX*0x4 + 0x0]
// 0047c0ba: SUB ECX,EBX
// 0047c0bc: SHL ECX,0x2
// 0047c0bf: MOV EBX,dword ptr [EAX + 0x10c]
// 0047c0c5: ADD EBX,ECX
// 0047c0c7: MOV ECX,dword ptr [ESI + 0x24]
// 0047c0ca: LEA EAX,[ECX*0x4 + 0x0]
// 0047c0d1: SUB EAX,ECX
// 0047c0d3: SHL EAX,0x2
// 0047c0d6: LEA ECX,[EAX + EBX*0x1]
// 0047c0d9: MOV EAX,dword ptr [ESI + 0x18]
// 0047c0dc: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c0e0: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0047c0e4: SHL EAX,0x2
// 0047c0e7: SUB EAX,EDI
// 0047c0e9: MOV EDI,dword ptr [ECX]
// 0047c0eb: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c0ef: MOV EDI,dword ptr [EBX + EAX*0x4]
// 0047c0f2: SUB dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0047c0f6: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0047c0fa: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c0fe: MOV EDI,dword ptr [ECX + 0x4]
// 0047c101: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0047c105: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4]
// 0047c109: SUB dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0047c10d: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0047c111: MOV ESI,dword ptr [ESI + 0x30]
// 0047c114: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0047c118: MOV EDI,dword ptr [ECX + 0x8]
// 0047c11b: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8]
// 0047c11f: SUB EDI,EAX
// 0047c121: LEA EAX,[ESI*0x4 + 0x0]
// 0047c128: SUB EAX,ESI
// 0047c12a: SHL EAX,0x2
// 0047c12d: ADD EBX,EAX
// 0047c12f: MOV ESI,dword ptr [ECX]
// 0047c131: MOV EAX,dword ptr [EBX]
// 0047c133: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0047c137: SUB EAX,ESI
// 0047c139: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0047c13d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047c141: MOV EDI,dword ptr [ECX + 0x4]
// 0047c144: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0047c148: MOV EAX,dword ptr [EBX + 0x4]
// 0047c14b: FLD ST0
// 0047c14d: SUB EAX,EDI
// 0047c14f: FXCH ST2
// 0047c151: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0047c155: FXCH
// 0047c157: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0047c15b: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047c15f: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0047c163: FLD ST0
// 0047c165: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0047c169: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 0047c16d: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0047c171: MOV EAX,dword ptr [EBX + 0x8]
// 0047c174: MOV EBX,dword ptr [ECX + 0x8]
// 0047c177: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0047c17b: SUB EAX,EBX
// 0047c17d: FXCH ST4
// 0047c17f: FMUL ST4
// 0047c181: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047c185: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0047c189: FXCH ST5
// 0047c18b: FMUL ST5
// 0047c18d: FXCH ST3
// 0047c18f: FMULP ST5
// 0047c191: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0047c195: FXCH ST5
// 0047c197: FSUBP ST4,ST0
// 0047c199: FXCH ST4
// 0047c19b: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0047c19f: FXCH ST3
// 0047c1a1: FST float ptr [EDX + 0x4]
// 0047c1a4: FXCH ST3
// 0047c1a6: FSUBP ST2,ST0
// 0047c1a8: FXCH ST2
// 0047c1aa: FMUL float ptr [EDX + 0x4]
// 0047c1ad: FXCH
// 0047c1af: FST float ptr [EDX]
// 0047c1b1: FMUL float ptr [EDX]
// 0047c1b3: FXCH ST3
// 0047c1b5: FSUBP ST2,ST0
// 0047c1b7: FADDP ST2,ST0
// 0047c1b9: FST float ptr [EDX + 0x8]
// 0047c1bc: FMUL float ptr [EDX + 0x8]
// 0047c1bf: FADDP
// 0047c1c1: FSQRT
// 0047c1c3: FST float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0047c1c6: FLDZ
// 0047c1c8: FCOMPP
// 0047c1ca: FNSTSW AX
// 0047c1cc: SAHF
// 0047c1cd: JNC 0x0047c1f9
//   XREF to: 0047c1f9 (CONDITIONAL_JUMP)
// 0047c1cf: FLD1
// 0047c1d1: FLD float ptr [EDX]
// 0047c1d3: FXCH
// 0047c1d5: FDIV float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0047c1d8: FXCH
// 0047c1da: FMUL ST1
// 0047c1dc: FLD float ptr [EDX + 0x4]
// 0047c1df: FMUL ST2
// 0047c1e1: FLD float ptr [EDX + 0x8]
// 0047c1e4: FMULP ST3
// 0047c1e6: FXCH
// 0047c1e8: FSTP float ptr [EDX]
// 0047c1ea: FSTP float ptr [EDX + 0x4]
// 0047c1ed: FSTP float ptr [EDX + 0x8]
// 0047c1f0: MOV EAX,EDX
// 0047c1f2: MOV ESP,EBP
// 0047c1f4: POP EBP
// 0047c1f5: POP EDI
// 0047c1f6: POP ESI
// 0047c1f7: POP EBX
// 0047c1f8: RET
// 0047c1f9: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_0047c1f9
// 0047c200: MOV EAX,dword ptr [EDX + 0x8]
// 0047c203: MOV dword ptr [EDX + 0x4],EAX
// 0047c206: MOV EAX,dword ptr [EDX + 0x4]
// 0047c209: MOV dword ptr [EDX],EAX
// 0047c20b: MOV EAX,EDX
// 0047c20d: MOV ESP,EBP
// 0047c20f: POP EBP
// 0047c210: POP EDI
// 0047c211: POP ESI
// 0047c212: POP EBX
// 0047c213: RET
