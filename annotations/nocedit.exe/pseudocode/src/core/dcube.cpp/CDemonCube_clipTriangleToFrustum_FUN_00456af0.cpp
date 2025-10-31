// Name: core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
// Address: 00456af0
// Address Range: [[00456af0, 00456ec2]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCubeFrustum * frustum, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, uchar texture_id)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 004957d1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0061a7b7
//   uint g_CubeInputTriangleCount
//   CVector3f[16] g_CubeInputTriangleBuffer
//   undefined4 g_CubeInputTriangleBuffer[0].y
//   undefined4 g_CubeInputTriangleBuffer[0].z
//   undefined4 g_CubeInputTriangleBuffer[1].x
//   undefined4 g_CubeInputTriangleBuffer[1].y
//   undefined4 g_CubeInputTriangleBuffer[1].z
//   undefined4 g_CubeInputTriangleBuffer[2].x
//   undefined4 g_CubeInputTriangleBuffer[2].y
//   undefined4 g_CubeInputTriangleBuffer[2].z
//   uint g_CubeClipStage1Count
//   uint g_CubeClipStage2Count
//   uint g_CubeClipStage3Count
//   uint g_CubeClipStage4Count
//   uint g_CubeClipStage5Count
//   uint g_CubeClippedTriangleCount
//   CVector3f[16] g_CubeClippedTriangleBuffer
//   undefined4 g_CubeClippedTriangleBuffer[0].y
//   undefined4 g_CubeClippedTriangleBuffer[0].z
//   undefined4 g_CubeClippedTriangleBuffer[1].x
//   undefined4 g_CubeClippedTriangleBuffer[1].y
//   undefined4 g_CubeClippedTriangleBuffer[1].z
//   undefined4 g_CubeClippedTriangleBuffer[2].x
//   undefined4 g_CubeClippedTriangleBuffer[2].y
//   undefined4 g_CubeClippedTriangleBuffer[2].z
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9964
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a88
// Function calls:
//   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
//   core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
//   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
//   core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
//   core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
//   core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
          (CDemonCubeFrustum *frustum,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,
          uchar texture_id)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  CVector3f *pCVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  g_CubeInputTriangleCount = 3;
  if (vertex1 != g_CubeInputTriangleBuffer) {
    g_CubeInputTriangleBuffer[0].x = vertex1->x;
    g_CubeInputTriangleBuffer[0].z = vertex1->z;
    g_CubeInputTriangleBuffer[0].y = vertex1->y;
  }
  if (vertex2 != g_CubeInputTriangleBuffer + 1) {
    g_CubeInputTriangleBuffer[1].x = vertex2->x;
    g_CubeInputTriangleBuffer[1].z = vertex2->z;
    g_CubeInputTriangleBuffer[1].y = vertex2->y;
  }
  if (vertex3 != g_CubeInputTriangleBuffer + 2) {
    g_CubeInputTriangleBuffer[2].x = vertex3->x;
    g_CubeInputTriangleBuffer[2].z = vertex3->z;
    g_CubeInputTriangleBuffer[2].y = vertex3->y;
  }
  uVar6 = 0xffffffff;
  iVar9 = 0;
  uVar10 = 0;
  pCVar7 = g_CubeInputTriangleBuffer;
  do {
    bVar5 = (frustum->max).x < pCVar7->x;
    if ((frustum->max).y < pCVar7->y) {
      bVar5 = bVar5 | 2;
    }
    if ((frustum->max).z < pCVar7->z) {
      bVar5 = bVar5 | 4;
    }
    if (pCVar7->x < (frustum->min).x) {
      bVar5 = bVar5 | 8;
    }
    if (pCVar7->y < (frustum->min).y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pCVar7->z < (frustum->min).z) {
      bVar5 = bVar5 | 0x20;
    }
    pCVar7 = pCVar7 + 1;
    iVar9 = iVar9 + 1;
    uVar10 = uVar10 | bVar5;
    uVar6 = uVar6 & bVar5;
  } while (iVar9 < 3);
  if (uVar10 == 0) {
    g_CubeClippedTriangleCount = 3;
    if (vertex1 != g_CubeClippedTriangleBuffer) {
      g_CubeClippedTriangleBuffer[0].x = vertex1->x;
      g_CubeClippedTriangleBuffer[0].z = vertex1->z;
      g_CubeClippedTriangleBuffer[0].y = vertex1->y;
    }
    if (vertex2 != g_CubeClippedTriangleBuffer + 1) {
      g_CubeClippedTriangleBuffer[1].x = vertex2->x;
      g_CubeClippedTriangleBuffer[1].z = vertex2->z;
      g_CubeClippedTriangleBuffer[1].y = vertex2->y;
    }
    if (vertex3 != g_CubeClippedTriangleBuffer + 2) {
      g_CubeClippedTriangleBuffer[2].x = vertex3->x;
      g_CubeClippedTriangleBuffer[2].z = vertex3->z;
      g_CubeClippedTriangleBuffer[2].y = vertex3->y;
    }
  }
  else {
    if (uVar6 != 0) {
      g_CubeInputTriangleCount = 3;
      return;
    }
    g_CubeClipStage1Count = uVar6;
    g_CubeClipStage2Count = uVar6;
    g_CubeClipStage3Count = uVar6;
    g_CubeClipStage4Count = uVar6;
    g_CubeClipStage5Count = uVar6;
    g_CubeClippedTriangleCount = uVar6;
    core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970((frustum->max).y);
    if ((int)g_CubeClipStage1Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0((frustum->min).y);
    if ((int)g_CubeClipStage2Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40((frustum->max).x);
    if ((int)g_CubeClipStage3Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0((frustum->min).x);
    if ((int)g_CubeClipStage4Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00((frustum->min).z);
    if ((int)g_CubeClipStage5Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070((frustum->max).z);
    if ((int)g_CubeClippedTriangleCount < 3) {
      return;
    }
  }
  if (2 < (int)g_CubeClippedTriangleCount) {
    iVar9 = 0xc;
    for (iVar8 = 0; iVar3 = g_VertexCount, fVar2 = g_CubeClippedTriangleBuffer[0].z,
        fVar1 = g_CubeClippedTriangleBuffer[0].y, iVar8 < (int)(g_CubeClippedTriangleCount - 2);
        iVar8 = iVar8 + 1) {
      g_LoadedVertices[g_VertexCount].vertex.x = g_CubeClippedTriangleBuffer[0].x;
      g_LoadedVertices[iVar3].vertex.y = fVar1;
      uVar10 = iVar3 + 1;
      g_LoadedVertices[iVar3].vertex.z = fVar2;
      fVar1 = *(float *)((int)&g_CubeClippedTriangleBuffer[0].y + iVar9);
      fVar2 = *(float *)((int)&g_CubeClippedTriangleBuffer[0].z + iVar9);
      uVar6 = iVar3 + 2;
      g_LoadedVertices[uVar10].vertex.x = *(float *)((int)&g_CubeClippedTriangleBuffer[0].x + iVar9)
      ;
      g_LoadedVertices[uVar10].vertex.y = fVar1;
      g_LoadedVertices[uVar10].vertex.z = fVar2;
      iVar4 = g_PolygonCount;
      fVar1 = *(float *)((int)&g_CubeClippedTriangleBuffer[1].y + iVar9);
      fVar2 = *(float *)((int)&g_CubeClippedTriangleBuffer[1].z + iVar9);
      g_LoadedVertices[uVar6].vertex.x = *(float *)((int)&g_CubeClippedTriangleBuffer[1].x + iVar9);
      g_LoadedVertices[uVar6].vertex.y = fVar1;
      g_LoadedVertices[uVar6].vertex.z = fVar2;
      g_ModelPolygonData[iVar4].vertex_indices[0] = iVar3;
      g_ModelPolygonData[iVar4].vertex_indices[1] = uVar10;
      g_ModelPolygonData[iVar4].vertex_indices[2] = uVar6;
      g_ModelPolygonData[iVar4].vertex_indices[0x10] = 0;
      g_ModelPolygonData[iVar4].uv_coordinates[0] = 0.0;
      g_ModelPolygonData[iVar4].vertex_indices[0x11] = 0;
      g_ModelPolygonData[iVar4].uv_coordinates[1] = 0.0;
      g_ModelPolygonData[iVar4].vertex_indices[0x12] = 0;
      g_ModelPolygonData[iVar4].uv_coordinates[2] = 0.0;
      g_ModelPolygonData[iVar4].lightmap_name[0] = '\0';
      g_ModelPolygonData[iVar4].vertex_indices_count = 3;
      g_ModelPolygonData[iVar4].polygon_type = 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(g_ModelPolygonData[iVar4].texture_name,"%d");
      iVar9 = iVar9 + 0xc;
      g_ModelPolygonData[g_PolygonCount].part_assignment = 0;
      g_PolygonCount = g_PolygonCount + 1;
      g_VertexCount = g_VertexCount + 3;
    }
  }
  return;
}


// Assembly code:
// 00456af0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
// 00456af1: PUSH ESI
// 00456af2: PUSH EDI
// 00456af3: PUSH EBP
// 00456af4: SUB ESP,0x4
// 00456af7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00456afb: MOV EDX,0x3
// 00456b00: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00456b04: MOV dword ptr [0x015c42a4],EDX
//   XREF to: 015c42a4 (WRITE)
// 00456b0a: CMP ECX,0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 00456b10: JNZ 0x00456ca9
//   XREF to: 00456ca9 (CONDITIONAL_JUMP)
// 00456b16: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_00456b16
//   XREF to: Stack[0xc] (READ)
// 00456b1a: CMP ESI,0x15c42b4
//   XREF to: 015c42b4 (DATA)
// 00456b20: JZ 0x00456b3e
//   XREF to: 00456b3e (CONDITIONAL_JUMP)
// 00456b22: MOV EAX,ESI
// 00456b24: FLD float ptr [EAX]
// 00456b26: FLD float ptr [EAX + 0x8]
// 00456b29: MOV EDX,dword ptr [EAX + 0x4]
// 00456b2c: MOV dword ptr [0x015c42b8],EDX
//   XREF to: 015c42b8 (WRITE)
// 00456b32: FSTP float ptr [0x015c42bc]
//   XREF to: 015c42bc (WRITE)
// 00456b38: FSTP float ptr [0x015c42b4]
//   XREF to: 015c42b4 (WRITE)
// 00456b3e: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_00456b3e
//   XREF to: Stack[0x10] (READ)
// 00456b42: CMP EDI,0x15c42c0
//   XREF to: 015c42c0 (DATA)
// 00456b48: JZ 0x00456b66
//   XREF to: 00456b66 (CONDITIONAL_JUMP)
// 00456b4a: MOV EAX,EDI
// 00456b4c: FLD float ptr [EAX]
// 00456b4e: FLD float ptr [EAX + 0x8]
// 00456b51: MOV EDX,dword ptr [EAX + 0x4]
// 00456b54: MOV dword ptr [0x015c42c4],EDX
//   XREF to: 015c42c4 (WRITE)
// 00456b5a: FSTP float ptr [0x015c42c8]
//   XREF to: 015c42c8 (WRITE)
// 00456b60: FSTP float ptr [0x015c42c0]
//   XREF to: 015c42c0 (WRITE)
// 00456b66: MOV EBP,0xffffffff
//   Label: LAB_00456b66
// 00456b6b: MOV EDX,dword ptr [0x015c42a4]
//   XREF to: 015c42a4 (READ)
// 00456b71: XOR EAX,EAX
// 00456b73: XOR EDI,EDI
// 00456b75: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00456b78: TEST EDX,EDX
// 00456b7a: JLE 0x00456bf4
//   XREF to: 00456bf4 (CONDITIONAL_JUMP)
// 00456b80: MOV ESI,0x15c42a8
//   XREF to: 015c42a8 (DATA)
// 00456b85: FLD float ptr [ESI]
//   Label: LAB_00456b85
//   XREF to: 015c42a8 (READ)
//   XREF to: 015c42b4 (READ)
// 00456b87: MOV ECX,ESI
// 00456b89: XOR EDX,EDX
// 00456b8b: FCOMP float ptr [EBX + 0x14]
// 00456b8e: FNSTSW AX
// 00456b90: SAHF
// 00456b91: JBE 0x00456b98
//   XREF to: 00456b98 (CONDITIONAL_JUMP)
// 00456b93: MOV EDX,0x1
// 00456b98: FLD float ptr [ECX + 0x4]
//   Label: LAB_00456b98
//   XREF to: 015c42ac (READ)
//   XREF to: 015c42b8 (READ)
// 00456b9b: FCOMP float ptr [EBX + 0x18]
// 00456b9e: FNSTSW AX
// 00456ba0: SAHF
// 00456ba1: JBE 0x00456ba6
//   XREF to: 00456ba6 (CONDITIONAL_JUMP)
// 00456ba3: OR DL,0x2
// 00456ba6: FLD float ptr [ECX + 0x8]
//   Label: LAB_00456ba6
//   XREF to: 015c42b0 (READ)
//   XREF to: 015c42bc (READ)
// 00456ba9: FCOMP float ptr [EBX + 0x1c]
// 00456bac: FNSTSW AX
// 00456bae: SAHF
// 00456baf: JBE 0x00456bb4
//   XREF to: 00456bb4 (CONDITIONAL_JUMP)
// 00456bb1: OR DL,0x4
// 00456bb4: FLD float ptr [ECX]
//   Label: LAB_00456bb4
//   XREF to: 015c42a8 (READ)
//   XREF to: 015c42b4 (READ)
// 00456bb6: FCOMP float ptr [EBX + 0x8]
// 00456bb9: FNSTSW AX
// 00456bbb: SAHF
// 00456bbc: JNC 0x00456bc1
//   XREF to: 00456bc1 (CONDITIONAL_JUMP)
// 00456bbe: OR DL,0x8
// 00456bc1: FLD float ptr [ECX + 0x4]
//   Label: LAB_00456bc1
//   XREF to: 015c42ac (READ)
// 00456bc4: FCOMP float ptr [EBX + 0xc]
// 00456bc7: FNSTSW AX
// 00456bc9: SAHF
// 00456bca: JNC 0x00456bcf
//   XREF to: 00456bcf (CONDITIONAL_JUMP)
// 00456bcc: OR DL,0x10
// 00456bcf: FLD float ptr [ECX + 0x8]
//   Label: LAB_00456bcf
//   XREF to: 015c42b0 (READ)
// 00456bd2: FCOMP float ptr [EBX + 0x10]
// 00456bd5: FNSTSW AX
// 00456bd7: SAHF
// 00456bd8: JNC 0x00456bdd
//   XREF to: 00456bdd (CONDITIONAL_JUMP)
// 00456bda: OR DL,0x20
// 00456bdd: MOV ECX,dword ptr [ESP]
//   Label: LAB_00456bdd
//   XREF to: Stack[-0x14] (DATA)
// 00456be0: MOV EAX,[0x015c42a4]
//   XREF to: 015c42a4 (READ)
// 00456be5: ADD ESI,0xc
// 00456be8: INC EDI
// 00456be9: OR ECX,EDX
// 00456beb: AND EBP,EDX
// 00456bed: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00456bf0: CMP EDI,EAX
// 00456bf2: JL 0x00456b85
//   XREF to: 00456b85 (CONDITIONAL_JUMP)
// 00456bf4: CMP dword ptr [ESP],0x0
//   Label: LAB_00456bf4
//   XREF to: Stack[-0x14] (DATA)
// 00456bf8: JNZ 0x00456cca
//   XREF to: 00456cca (CONDITIONAL_JUMP)
// 00456bfe: MOV ECX,0x3
// 00456c03: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00456c07: MOV dword ptr [0x015c473c],ECX
//   XREF to: 015c473c (WRITE)
// 00456c0d: CMP EBX,0x15c4740
//   XREF to: 015c4740 (DATA)
// 00456c13: JZ 0x00456c31
//   XREF to: 00456c31 (CONDITIONAL_JUMP)
// 00456c15: MOV EAX,EBX
// 00456c17: FLD float ptr [EAX]
// 00456c19: FLD float ptr [EAX + 0x8]
// 00456c1c: MOV EDX,dword ptr [EAX + 0x4]
// 00456c1f: MOV dword ptr [0x015c4744],EDX
//   XREF to: 015c4744 (WRITE)
// 00456c25: FSTP float ptr [0x015c4748]
//   XREF to: 015c4748 (WRITE)
// 00456c2b: FSTP float ptr [0x015c4740]
//   XREF to: 015c4740 (WRITE)
// 00456c31: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_00456c31
//   XREF to: Stack[0xc] (READ)
// 00456c35: CMP ESI,0x15c474c
//   XREF to: 015c474c (DATA)
// 00456c3b: JZ 0x00456c59
//   XREF to: 00456c59 (CONDITIONAL_JUMP)
// 00456c3d: MOV EAX,ESI
// 00456c3f: FLD float ptr [EAX]
// 00456c41: FLD float ptr [EAX + 0x8]
// 00456c44: MOV EDX,dword ptr [EAX + 0x4]
// 00456c47: MOV dword ptr [0x015c4750],EDX
//   XREF to: 015c4750 (WRITE)
// 00456c4d: FSTP float ptr [0x015c4754]
//   XREF to: 015c4754 (WRITE)
// 00456c53: FSTP float ptr [0x015c474c]
//   XREF to: 015c474c (WRITE)
// 00456c59: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_00456c59
//   XREF to: Stack[0x10] (READ)
// 00456c5d: CMP EDI,0x15c4758
//   XREF to: 015c4758 (DATA)
// 00456c63: JZ 0x00456c81
//   XREF to: 00456c81 (CONDITIONAL_JUMP)
// 00456c65: MOV EAX,EDI
// 00456c67: FLD float ptr [EAX]
// 00456c69: FLD float ptr [EAX + 0x8]
// 00456c6c: MOV EDX,dword ptr [EAX + 0x4]
// 00456c6f: MOV dword ptr [0x015c475c],EDX
//   XREF to: 015c475c (WRITE)
// 00456c75: FSTP float ptr [0x015c4760]
//   XREF to: 015c4760 (WRITE)
// 00456c7b: FSTP float ptr [0x015c4758]
//   XREF to: 015c4758 (WRITE)
// 00456c81: CMP dword ptr [0x015c473c],0x3
//   Label: LAB_00456c81
//   XREF to: 015c473c (READ)
// 00456c88: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456c8a: MOV EBX,0xc
// 00456c8f: XOR ESI,ESI
// 00456c91: MOV EAX,[0x015c473c]
//   Label: LAB_00456c91
//   XREF to: 015c473c (READ)
// 00456c96: SUB EAX,0x2
// 00456c99: CMP ESI,EAX
// 00456c9b: JL 0x00456d8a
//   XREF to: 00456d8a (CONDITIONAL_JUMP)
// 00456ca1: ADD ESP,0x4
//   Label: LAB_00456ca1
// 00456ca4: POP EBP
// 00456ca5: POP EDI
// 00456ca6: POP ESI
// 00456ca7: POP EBX
// 00456ca8: RET
// 00456ca9: MOV EAX,ECX
//   Label: LAB_00456ca9
// 00456cab: FLD float ptr [EAX]
// 00456cad: FLD float ptr [EAX + 0x8]
// 00456cb0: MOV EDX,dword ptr [EAX + 0x4]
// 00456cb3: MOV dword ptr [0x015c42ac],EDX
//   XREF to: 015c42ac (WRITE)
// 00456cb9: FSTP float ptr [0x015c42b0]
//   XREF to: 015c42b0 (WRITE)
// 00456cbf: FSTP float ptr [0x015c42a8]
//   XREF to: 015c42a8 (WRITE)
// 00456cc5: JMP 0x00456b16
//   XREF to: 00456b16 (UNCONDITIONAL_JUMP)
// 00456cca: TEST EBP,EBP
//   Label: LAB_00456cca
// 00456ccc: JNZ 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456cce: PUSH dword ptr [EBX + 0x18]
// 00456cd1: MOV dword ptr [0x015c4368],EBP
//   XREF to: 015c4368 (WRITE)
// 00456cd7: MOV dword ptr [0x015c442c],EBP
//   XREF to: 015c442c (WRITE)
// 00456cdd: MOV dword ptr [0x015c44f0],EBP
//   XREF to: 015c44f0 (WRITE)
// 00456ce3: MOV dword ptr [0x015c45b4],EBP
//   XREF to: 015c45b4 (WRITE)
// 00456ce9: MOV dword ptr [0x015c4678],EBP
//   XREF to: 015c4678 (WRITE)
// 00456cef: MOV dword ptr [0x015c473c],EBP
//   XREF to: 015c473c (WRITE)
// 00456cf5: CALL core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
//   XREF to: 00454970 (UNCONDITIONAL_CALL)
// 00456cfa: MOV ECX,dword ptr [0x015c4368]
//   XREF to: 015c4368 (READ)
// 00456d00: ADD ESP,0x4
// 00456d03: CMP ECX,0x3
// 00456d06: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456d08: PUSH dword ptr [EBX + 0xc]
// 00456d0b: CALL core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
//   XREF to: 00454ad0 (UNCONDITIONAL_CALL)
// 00456d10: MOV ESI,dword ptr [0x015c442c]
//   XREF to: 015c442c (READ)
// 00456d16: ADD ESP,0x4
// 00456d19: CMP ESI,0x3
// 00456d1c: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456d1e: PUSH dword ptr [EBX + 0x14]
// 00456d21: CALL core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
//   XREF to: 00454c40 (UNCONDITIONAL_CALL)
// 00456d26: MOV EDI,dword ptr [0x015c44f0]
//   XREF to: 015c44f0 (READ)
// 00456d2c: ADD ESP,0x4
// 00456d2f: CMP EDI,0x3
// 00456d32: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456d38: PUSH dword ptr [EBX + 0x8]
// 00456d3b: CALL core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
//   XREF to: 00454da0 (UNCONDITIONAL_CALL)
// 00456d40: MOV EBP,dword ptr [0x015c45b4]
//   XREF to: 015c45b4 (READ)
// 00456d46: ADD ESP,0x4
// 00456d49: CMP EBP,0x3
// 00456d4c: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456d52: PUSH dword ptr [EBX + 0x10]
// 00456d55: CALL core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
//   XREF to: 00454f00 (UNCONDITIONAL_CALL)
// 00456d5a: MOV EAX,[0x015c4678]
//   XREF to: 015c4678 (READ)
// 00456d5f: ADD ESP,0x4
// 00456d62: CMP EAX,0x3
// 00456d65: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456d6b: PUSH dword ptr [EBX + 0x1c]
// 00456d6e: CALL core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
//   XREF to: 00455070 (UNCONDITIONAL_CALL)
// 00456d73: MOV EDX,dword ptr [0x015c473c]
//   XREF to: 015c473c (READ)
// 00456d79: ADD ESP,0x4
// 00456d7c: CMP EDX,0x3
// 00456d7f: JL 0x00456ca1
//   XREF to: 00456ca1 (CONDITIONAL_JUMP)
// 00456d85: JMP 0x00456c81
//   XREF to: 00456c81 (UNCONDITIONAL_JUMP)
// 00456d8a: MOV EDX,dword ptr [0x01626408]
//   Label: LAB_00456d8a
//   XREF to: 01626408 (READ)
// 00456d90: IMUL EAX,EDX,0x14
// 00456d93: FLD float ptr [0x015c4740]
//   XREF to: 015c4740 (READ)
// 00456d99: FLD float ptr [0x015c4744]
//   XREF to: 015c4744 (READ)
// 00456d9f: FLD float ptr [0x015c4748]
//   XREF to: 015c4748 (READ)
// 00456da5: FXCH ST2
// 00456da7: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00456dad: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00456db3: LEA ECX,[EDX + 0x1]
// 00456db6: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00456dbc: IMUL EAX,ECX,0x14
// 00456dbf: FLD float ptr [EBX + 0x15c4740]
//   XREF to: 015c474c (READ)
// 00456dc5: FLD float ptr [EBX + 0x15c4744]
//   XREF to: 015c4750 (READ)
// 00456dcb: FLD float ptr [EBX + 0x15c4748]
//   XREF to: 015c4754 (READ)
// 00456dd1: LEA EDI,[EDX + 0x2]
// 00456dd4: FXCH ST2
// 00456dd6: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00456ddc: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00456de2: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00456de8: IMUL EAX,EDI,0x14
// 00456deb: FLD float ptr [EBX + 0x15c474c]
//   XREF to: 015c4758 (READ)
// 00456df1: FLD float ptr [EBX + 0x15c4750]
//   XREF to: 015c475c (READ)
// 00456df7: FLD float ptr [EBX + 0x15c4754]
//   XREF to: 015c4760 (READ)
// 00456dfd: MOV EBP,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00456e03: FXCH ST2
// 00456e05: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00456e0b: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00456e11: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00456e17: IMUL EAX,EBP,0x184
// 00456e1d: MOV dword ptr [EAX + 0x16e99c8],EDX
//   XREF to: 016e99c8 (DATA)
// 00456e23: MOV dword ptr [EAX + 0x16e99cc],ECX
//   XREF to: 016e99cc (DATA)
// 00456e29: MOV dword ptr [EAX + 0x16e99d0],EDI
//   XREF to: 016e99d0 (DATA)
// 00456e2f: XOR EDX,EDX
// 00456e31: MOV dword ptr [EAX + 0x16e9a08],EDX
//   XREF to: 016e9a08 (DATA)
// 00456e37: MOV dword ptr [EAX + 0x16e9a48],EDX
//   XREF to: 016e9a48 (DATA)
// 00456e3d: MOV dword ptr [EAX + 0x16e9a0c],EDX
//   XREF to: 016e9a0c (DATA)
// 00456e43: MOV dword ptr [EAX + 0x16e9a4c],EDX
//   XREF to: 016e9a4c (DATA)
// 00456e49: MOV dword ptr [EAX + 0x16e9a10],EDX
//   XREF to: 016e9a10 (DATA)
// 00456e4f: MOV dword ptr [EAX + 0x16e9a50],EDX
//   XREF to: 016e9a50 (DATA)
// 00456e55: XOR DL,DL
// 00456e57: MOV EBP,0x3
// 00456e5c: MOV byte ptr [EAX + 0x16e9964],DL
//   XREF to: 016e9964 (DATA)
// 00456e62: XOR EDX,EDX
// 00456e64: MOV dword ptr [EAX + 0x16e99b4],EBP
//   XREF to: 016e99b4 (DATA)
// 00456e6a: MOV DL,byte ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00456e6e: MOV EBP,0x1
// 00456e73: PUSH EDX
// 00456e74: MOV dword ptr [EAX + 0x16e9910],EBP
//   XREF to: 016e9910 (DATA)
// 00456e7a: ADD EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00456e7f: PUSH 0x61a7b7
//   XREF to: 0061a7b7 (DATA)
// 00456e84: ADD EAX,0x4
// 00456e87: PUSH EAX
// 00456e88: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00456e8d: MOV EDI,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00456e93: IMUL EAX,EDI,0x184
// 00456e99: ADD EBX,0xc
// 00456e9c: INC ESI
// 00456e9d: XOR EBP,EBP
// 00456e9f: ADD ESP,0xc
// 00456ea2: MOV dword ptr [EAX + 0x16e9a88],EBP
//   XREF to: 016e9a88 (DATA)
// 00456ea8: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00456ead: LEA EDX,[EDI + 0x1]
// 00456eb0: ADD EAX,0x3
// 00456eb3: MOV dword ptr [0x016e990c],EDX
//   XREF to: 016e990c (WRITE)
// 00456eb9: MOV [0x01626408],EAX
//   XREF to: 01626408 (WRITE)
// 00456ebe: JMP 0x00456c91
//   XREF to: 00456c91 (UNCONDITIONAL_JUMP)
