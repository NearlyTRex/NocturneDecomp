// Name: shape_design.c_bisectMesh_FUN_0046ed50
// Address: 0046ed50
// Address Range: [[0046ed50, 0046f28b]]
// Convention: __cdecl
// Signature: void shape_design.c_bisectMesh_FUN_0046ed50(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f7ab [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061e0b2
//   TerminatedCString s_Not_3_faces_0061e0c4
//   double DOUBLE_0061e0d6 = 0.5
//   double DOUBLE_0061e0de = 0.5
//   double DOUBLE_0061e0e6 = 0.5
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
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
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_design_c_bisectMesh_FUN_0046ed50(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  SShapeEditorPolygon *pSVar16;
  SShapeEditorPolygon *pSVar17;
  byte bVar18;
  int local_18;
  
  iVar13 = g_PolygonCount;
  bVar18 = 0;
  for (local_18 = 0; local_18 < iVar13; local_18 = local_18 + 1) {
    pSVar16 = g_ModelPolygonData + local_18;
    if (g_ModelPolygonData[local_18].vertex_indices_count != 3) {
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 0x2dac;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Not 3 faces");
    }
    iVar14 = g_PolygonCount;
    pSVar17 = g_ModelPolygonData + g_PolygonCount;
    uVar1 = g_ModelPolygonData[local_18].vertex_indices[0];
    uVar2 = g_ModelPolygonData[local_18].vertex_indices[1];
    uVar3 = g_ModelPolygonData[local_18].vertex_indices[2];
    fVar4 = g_LoadedVertices[uVar2].vertex.x - g_LoadedVertices[uVar1].vertex.x;
    fVar5 = g_LoadedVertices[uVar2].vertex.y - g_LoadedVertices[uVar1].vertex.y;
    fVar6 = g_LoadedVertices[uVar2].vertex.z - g_LoadedVertices[uVar1].vertex.z;
    fVar7 = g_LoadedVertices[uVar3].vertex.x - g_LoadedVertices[uVar2].vertex.x;
    fVar8 = g_LoadedVertices[uVar3].vertex.y - g_LoadedVertices[uVar2].vertex.y;
    fVar9 = g_LoadedVertices[uVar3].vertex.z - g_LoadedVertices[uVar2].vertex.z;
    fVar10 = g_LoadedVertices[uVar1].vertex.x - g_LoadedVertices[uVar3].vertex.x;
    fVar11 = g_LoadedVertices[uVar1].vertex.y - g_LoadedVertices[uVar3].vertex.y;
    fVar12 = g_LoadedVertices[uVar1].vertex.z - g_LoadedVertices[uVar3].vertex.z;
    fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar5 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar6 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
    if ((fVar4 <= fVar5) || (fVar4 <= fVar6)) {
      if (fVar5 <= fVar6) {
        g_LoadedVertices[g_VertexCount].vertex.x =
             (g_LoadedVertices[uVar3].vertex.x + g_LoadedVertices[uVar1].vertex.x) *
             (float)DOUBLE_0061e0e6;
        g_LoadedVertices[g_VertexCount].vertex.y =
             (g_LoadedVertices[uVar3].vertex.y + g_LoadedVertices[uVar1].vertex.y) *
             (float)DOUBLE_0061e0e6;
        g_LoadedVertices[g_VertexCount].vertex.z =
             (g_LoadedVertices[uVar3].vertex.z + g_LoadedVertices[uVar1].vertex.z) *
             (float)DOUBLE_0061e0e6;
        fVar4 = (g_ModelPolygonData[local_18].uv_u[2] + g_ModelPolygonData[local_18].uv_u[0]) *
                (float)DOUBLE_0061e0e6;
        fVar5 = (g_ModelPolygonData[local_18].uv_v[2] + g_ModelPolygonData[local_18].uv_v[0]) *
                (float)DOUBLE_0061e0e6;
        for (iVar15 = 0x61; iVar15 != 0; iVar15 = iVar15 + -1) {
          pSVar17->polygon_type = pSVar16->polygon_type;
          pSVar16 = (SShapeEditorPolygon *)((int)pSVar16 + ((uint)bVar18 * -2 + 1) * 4);
          pSVar17 = (SShapeEditorPolygon *)((int)pSVar17 + ((uint)bVar18 * -2 + 1) * 4);
        }
        g_ModelPolygonData[local_18].vertex_indices[0] = g_VertexCount;
        g_ModelPolygonData[local_18].uv_u[0] = fVar4;
        g_ModelPolygonData[local_18].uv_v[0] = fVar5;
        g_ModelPolygonData[iVar14].vertex_indices[2] = g_VertexCount;
        g_ModelPolygonData[iVar14].uv_u[2] = fVar4;
        g_ModelPolygonData[iVar14].uv_v[2] = fVar5;
        g_VertexCount = g_VertexCount + 1;
        g_PolygonCount = g_PolygonCount + 1;
      }
      else {
        g_LoadedVertices[g_VertexCount].vertex.x =
             (g_LoadedVertices[uVar2].vertex.x + g_LoadedVertices[uVar3].vertex.x) *
             (float)DOUBLE_0061e0de;
        g_LoadedVertices[g_VertexCount].vertex.y =
             (g_LoadedVertices[uVar2].vertex.y + g_LoadedVertices[uVar3].vertex.y) *
             (float)DOUBLE_0061e0de;
        g_LoadedVertices[g_VertexCount].vertex.z =
             (g_LoadedVertices[uVar2].vertex.z + g_LoadedVertices[uVar3].vertex.z) *
             (float)DOUBLE_0061e0de;
        fVar4 = (g_ModelPolygonData[local_18].uv_u[1] + g_ModelPolygonData[local_18].uv_u[2]) *
                (float)DOUBLE_0061e0de;
        fVar5 = (g_ModelPolygonData[local_18].uv_v[1] + g_ModelPolygonData[local_18].uv_v[2]) *
                (float)DOUBLE_0061e0de;
        for (iVar15 = 0x61; iVar15 != 0; iVar15 = iVar15 + -1) {
          pSVar17->polygon_type = pSVar16->polygon_type;
          pSVar16 = (SShapeEditorPolygon *)((int)pSVar16 + ((uint)bVar18 * -2 + 1) * 4);
          pSVar17 = (SShapeEditorPolygon *)((int)pSVar17 + ((uint)bVar18 * -2 + 1) * 4);
        }
        g_ModelPolygonData[local_18].vertex_indices[2] = g_VertexCount;
        g_ModelPolygonData[local_18].uv_u[2] = fVar4;
        g_ModelPolygonData[local_18].uv_v[2] = fVar5;
        g_ModelPolygonData[iVar14].vertex_indices[1] = g_VertexCount;
        g_ModelPolygonData[iVar14].uv_u[1] = fVar4;
        g_ModelPolygonData[iVar14].uv_v[1] = fVar5;
        g_VertexCount = g_VertexCount + 1;
        g_PolygonCount = g_PolygonCount + 1;
      }
    }
    else {
      g_LoadedVertices[g_VertexCount].vertex.x =
           (g_LoadedVertices[uVar1].vertex.x + g_LoadedVertices[uVar2].vertex.x) *
           (float)DOUBLE_0061e0d6;
      g_LoadedVertices[g_VertexCount].vertex.y =
           (g_LoadedVertices[uVar1].vertex.y + g_LoadedVertices[uVar2].vertex.y) *
           (float)DOUBLE_0061e0d6;
      g_LoadedVertices[g_VertexCount].vertex.z =
           (g_LoadedVertices[uVar1].vertex.z + g_LoadedVertices[uVar2].vertex.z) *
           (float)DOUBLE_0061e0d6;
      fVar4 = (g_ModelPolygonData[local_18].uv_u[0] + g_ModelPolygonData[local_18].uv_u[1]) *
              (float)DOUBLE_0061e0d6;
      fVar5 = (g_ModelPolygonData[local_18].uv_v[0] + g_ModelPolygonData[local_18].uv_v[1]) *
              (float)DOUBLE_0061e0d6;
      for (iVar15 = 0x61; iVar15 != 0; iVar15 = iVar15 + -1) {
        pSVar17->polygon_type = pSVar16->polygon_type;
        pSVar16 = (SShapeEditorPolygon *)((int)pSVar16 + ((uint)bVar18 * -2 + 1) * 4);
        pSVar17 = (SShapeEditorPolygon *)((int)pSVar17 + ((uint)bVar18 * -2 + 1) * 4);
      }
      g_ModelPolygonData[local_18].vertex_indices[1] = g_VertexCount;
      g_ModelPolygonData[local_18].uv_u[1] = fVar4;
      g_ModelPolygonData[local_18].uv_v[1] = fVar5;
      g_ModelPolygonData[iVar14].vertex_indices[0] = g_VertexCount;
      g_ModelPolygonData[iVar14].uv_u[0] = fVar4;
      g_ModelPolygonData[iVar14].uv_v[0] = fVar5;
      g_VertexCount = g_VertexCount + 1;
      g_PolygonCount = g_PolygonCount + 1;
    }
  }
  return;
}


// Assembly code:
// 0046ed50: PUSH EBX
//   Label: shape_design.c_bisectMesh_FUN_0046ed50
// 0046ed51: PUSH ESI
// 0046ed52: PUSH EDI
// 0046ed53: PUSH EBP
// 0046ed54: MOV EBP,ESP
// 0046ed56: SUB ESP,0x64
// 0046ed5c: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 0046ed61: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046ed64: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0046ed6b: JMP 0x0046ed73
//   XREF to: 0046ed73 (UNCONDITIONAL_JUMP)
// 0046ed6d: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046ed6d
//   XREF to: Stack[-0x18] (READ)
// 0046ed70: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0046ed73: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046ed73
//   XREF to: Stack[-0x18] (READ)
// 0046ed76: CMP EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ed79: JGE 0x0046f285
//   XREF to: 0046f285 (CONDITIONAL_JUMP)
// 0046ed7f: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0046ed86: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046ed8b: ADD EDX,EAX
// 0046ed8d: MOV dword ptr [EBP + -0x4c],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0046ed90: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046ed93: CMP dword ptr [EAX + 0xa4],0x3
//   XREF to: 016e99b4 (DATA)
// 0046ed9a: JZ 0x0046edbe
//   XREF to: 0046edbe (CONDITIONAL_JUMP)
// 0046ed9c: MOV dword ptr [0x02f0ca48],0x61e0b2
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061e0b2 (DATA)
// 0046eda6: MOV dword ptr [0x02f0ca4c],0x2dac
//   XREF to: 02f0ca4c (WRITE)
// 0046edb0: MOV EAX,0x61e0c4
//   XREF to: 0061e0c4 (PARAM)
// 0046edb5: PUSH EAX
//   XREF to: 0061e0c4 (DATA)
// 0046edb6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0046edbb: ADD ESP,0x4
// 0046edbe: IMUL EAX,dword ptr [0x016e990c],0x184
//   Label: LAB_0046edbe
//   XREF to: 016e990c (READ)
// 0046edc8: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046edcd: ADD EDX,EAX
// 0046edcf: MOV dword ptr [EBP + -0x48],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0046edd2: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046edd5: MOV EAX,dword ptr [EAX + 0xb8]
//   XREF to: 016e99c8 (DATA)
// 0046eddb: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046edde: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046ede1: MOV EAX,dword ptr [EAX + 0xbc]
//   XREF to: 016e99cc (DATA)
// 0046ede7: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0046edea: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046eded: MOV EAX,dword ptr [EAX + 0xc0]
//   XREF to: 016e99d0 (DATA)
// 0046edf3: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0046edf6: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046edfa: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046edfe: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ee04: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ee0a: FSTP float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (WRITE)
// 0046ee0d: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ee11: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046ee15: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ee1b: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ee21: FSTP float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0046ee24: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ee28: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046ee2c: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046ee32: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046ee38: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (WRITE)
// 0046ee3b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046ee3f: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ee43: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ee49: FSUB float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ee4f: FSTP float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0046ee52: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046ee56: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ee5a: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ee60: FSUB float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ee66: FSTP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 0046ee69: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046ee6d: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ee71: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046ee77: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046ee7d: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0046ee80: IMUL EDX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046ee84: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046ee88: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ee8e: FSUB float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ee94: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0046ee97: IMUL EDX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046ee9b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046ee9f: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046eea5: FSUB float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046eeab: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0046eeae: IMUL EDX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046eeb2: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046eeb6: FLD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046eebc: FSUB float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046eec2: FSTP float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0046eec5: FLD float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046eec8: FMUL float ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046eecb: FLD float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046eece: FMUL float ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046eed1: FADDP
// 0046eed3: FLD float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046eed6: FMUL float ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0046eed9: FADDP
// 0046eedb: FSQRT
// 0046eedd: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046eee0: FLD float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046eee3: FMUL float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046eee6: FLD float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046eee9: FMUL float ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0046eeec: FADDP
// 0046eeee: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046eef1: FMUL float ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046eef4: FADDP
// 0046eef6: FSQRT
// 0046eef8: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0046eefb: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046eefe: FMUL float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046ef01: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046ef04: FMUL float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046ef07: FADDP
// 0046ef09: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046ef0c: FMUL float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0046ef0f: FADDP
// 0046ef11: FSQRT
// 0046ef13: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ef16: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046ef19: FCOMP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046ef1c: FNSTSW AX
// 0046ef1e: SAHF
// 0046ef1f: JBE 0x0046ef2c
//   XREF to: 0046ef2c (CONDITIONAL_JUMP)
// 0046ef21: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046ef24: FCOMP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ef27: FNSTSW AX
// 0046ef29: SAHF
// 0046ef2a: JA 0x0046ef31
//   XREF to: 0046ef31 (CONDITIONAL_JUMP)
// 0046ef2c: JMP 0x0046f048
//   Label: LAB_0046ef2c
//   XREF to: 0046f048 (UNCONDITIONAL_JUMP)
// 0046ef31: IMUL EDX,dword ptr [EBP + -0x44],0x14
//   Label: LAB_0046ef31
//   XREF to: Stack[-0x54] (READ)
// 0046ef35: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ef39: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ef3f: FADD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ef45: FMUL double ptr [0x0061e0d6]
//   XREF to: 0061e0d6 (READ)
// 0046ef4b: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046ef52: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046ef58: IMUL EDX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046ef5c: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ef60: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ef66: FADD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ef6c: FMUL double ptr [0x0061e0d6]
//   XREF to: 0061e0d6 (READ)
// 0046ef72: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046ef79: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046ef7f: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046ef83: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046ef87: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046ef8d: FADD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046ef93: FMUL double ptr [0x0061e0d6]
//   XREF to: 0061e0d6 (READ)
// 0046ef99: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046efa0: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046efa6: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046efa9: FLD float ptr [EAX + 0xf8]
//   XREF to: 016e9a08 (DATA)
// 0046efaf: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046efb2: FADD float ptr [EAX + 0xfc]
//   XREF to: 016e9a0c (DATA)
// 0046efb8: FMUL double ptr [0x0061e0d6]
//   XREF to: 0061e0d6 (READ)
// 0046efbe: FSTP float ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0046efc1: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046efc4: FLD float ptr [EAX + 0x138]
//   XREF to: 016e9a48 (DATA)
// 0046efca: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046efcd: FADD float ptr [EAX + 0x13c]
//   XREF to: 016e9a4c (DATA)
// 0046efd3: FMUL double ptr [0x0061e0d6]
//   XREF to: 0061e0d6 (READ)
// 0046efd9: FSTP float ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 0046efdc: MOV ECX,0x61
// 0046efe1: MOV EDI,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046efe4: MOV ESI,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046efe7: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0046efe9: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046efef: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046eff2: MOV dword ptr [EAX + 0xbc],EDX
//   XREF to: 016e99cc (DATA)
// 0046eff8: MOV EAX,dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0046effb: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046effe: MOV dword ptr [EDX + 0xfc],EAX
//   XREF to: 016e9a0c (DATA)
// 0046f004: MOV EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046f007: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f00a: MOV dword ptr [EDX + 0x13c],EAX
//   XREF to: 016e9a4c (DATA)
// 0046f010: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046f016: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f019: MOV dword ptr [EAX + 0xb8],EDX
//   XREF to: 016e99c8 (DATA)
// 0046f01f: MOV EAX,dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0046f022: MOV EDX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f025: MOV dword ptr [EDX + 0xf8],EAX
//   XREF to: 016e9a08 (DATA)
// 0046f02b: MOV EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046f02e: MOV EDX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f031: MOV dword ptr [EDX + 0x138],EAX
//   XREF to: 016e9a48 (DATA)
// 0046f037: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 0046f03d: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 0046f043: JMP 0x0046f280
//   XREF to: 0046f280 (UNCONDITIONAL_JUMP)
// 0046f048: FLD float ptr [EBP + -0x10]
//   Label: LAB_0046f048
//   XREF to: Stack[-0x20] (READ)
// 0046f04b: FCOMP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046f04e: FNSTSW AX
// 0046f050: SAHF
// 0046f051: JBE 0x0046f16e
//   XREF to: 0046f16e (CONDITIONAL_JUMP)
// 0046f057: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046f05b: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046f05f: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046f065: FADD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046f06b: FMUL double ptr [0x0061e0de]
//   XREF to: 0061e0de (READ)
// 0046f071: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046f078: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046f07e: IMUL EDX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046f082: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046f086: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046f08c: FADD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046f092: FMUL double ptr [0x0061e0de]
//   XREF to: 0061e0de (READ)
// 0046f098: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046f09f: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046f0a5: IMUL EAX,dword ptr [EBP + -0x40],0x14
//   XREF to: Stack[-0x50] (READ)
// 0046f0a9: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046f0ad: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046f0b3: FADD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046f0b9: FMUL double ptr [0x0061e0de]
//   XREF to: 0061e0de (READ)
// 0046f0bf: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046f0c6: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046f0cc: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f0cf: FLD float ptr [EAX + 0xfc]
//   XREF to: 016e9a0c (DATA)
// 0046f0d5: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f0d8: FADD float ptr [EAX + 0x100]
//   XREF to: 016e9a10 (DATA)
// 0046f0de: FMUL double ptr [0x0061e0de]
//   XREF to: 0061e0de (READ)
// 0046f0e4: FSTP float ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0046f0e7: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f0ea: FLD float ptr [EAX + 0x13c]
//   XREF to: 016e9a4c (DATA)
// 0046f0f0: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f0f3: FADD float ptr [EAX + 0x140]
//   XREF to: 016e9a50 (DATA)
// 0046f0f9: FMUL double ptr [0x0061e0de]
//   XREF to: 0061e0de (READ)
// 0046f0ff: FSTP float ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 0046f102: MOV ECX,0x61
// 0046f107: MOV EDI,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f10a: MOV ESI,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f10d: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0046f10f: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046f115: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f118: MOV dword ptr [EAX + 0xc0],EDX
//   XREF to: 016e99d0 (DATA)
// 0046f11e: MOV EAX,dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 0046f121: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f124: MOV dword ptr [EDX + 0x100],EAX
//   XREF to: 016e9a10 (DATA)
// 0046f12a: MOV EAX,dword ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0046f12d: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f130: MOV dword ptr [EDX + 0x140],EAX
//   XREF to: 016e9a50 (DATA)
// 0046f136: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046f13c: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f13f: MOV dword ptr [EAX + 0xbc],EDX
//   XREF to: 016e99cc (DATA)
// 0046f145: MOV EAX,dword ptr [EBP + -0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 0046f148: MOV EDX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f14b: MOV dword ptr [EDX + 0xfc],EAX
//   XREF to: 016e9a0c (DATA)
// 0046f151: MOV EAX,dword ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0046f154: MOV EDX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f157: MOV dword ptr [EDX + 0x13c],EAX
//   XREF to: 016e9a4c (DATA)
// 0046f15d: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 0046f163: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 0046f169: JMP 0x0046f280
//   XREF to: 0046f280 (UNCONDITIONAL_JUMP)
// 0046f16e: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   Label: LAB_0046f16e
//   XREF to: Stack[-0x4c] (READ)
// 0046f172: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046f176: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046f17c: FADD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046f182: FMUL double ptr [0x0061e0e6]
//   XREF to: 0061e0e6 (READ)
// 0046f188: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046f18f: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0046f195: IMUL EDX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046f199: IMUL EAX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046f19d: FLD float ptr [EDX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046f1a3: FADD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046f1a9: FMUL double ptr [0x0061e0e6]
//   XREF to: 0061e0e6 (READ)
// 0046f1af: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046f1b6: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0046f1bc: IMUL EAX,dword ptr [EBP + -0x3c],0x14
//   XREF to: Stack[-0x4c] (READ)
// 0046f1c0: IMUL EDX,dword ptr [EBP + -0x44],0x14
//   XREF to: Stack[-0x54] (READ)
// 0046f1c4: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046f1ca: FADD float ptr [EDX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046f1d0: FMUL double ptr [0x0061e0e6]
//   XREF to: 0061e0e6 (READ)
// 0046f1d6: IMUL EAX,dword ptr [0x01626408],0x14
//   XREF to: 01626408 (READ)
// 0046f1dd: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0046f1e3: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f1e6: FLD float ptr [EAX + 0x100]
//   XREF to: 016e9a10 (DATA)
// 0046f1ec: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f1ef: FADD float ptr [EAX + 0xf8]
//   XREF to: 016e9a08 (DATA)
// 0046f1f5: FMUL double ptr [0x0061e0e6]
//   XREF to: 0061e0e6 (READ)
// 0046f1fb: FSTP float ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (WRITE)
// 0046f1fe: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f201: FLD float ptr [EAX + 0x140]
//   XREF to: 016e9a50 (DATA)
// 0046f207: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f20a: FADD float ptr [EAX + 0x138]
//   XREF to: 016e9a48 (DATA)
// 0046f210: FMUL double ptr [0x0061e0e6]
//   XREF to: 0061e0e6 (READ)
// 0046f216: FSTP float ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (WRITE)
// 0046f219: MOV ECX,0x61
// 0046f21e: MOV EDI,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f221: MOV ESI,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f224: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 0046f226: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046f22c: MOV EAX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f22f: MOV dword ptr [EAX + 0xb8],EDX
//   XREF to: 016e99c8 (DATA)
// 0046f235: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0046f238: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f23b: MOV dword ptr [EDX + 0xf8],EAX
//   XREF to: 016e9a08 (DATA)
// 0046f241: MOV EAX,dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 0046f244: MOV EDX,dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046f247: MOV dword ptr [EDX + 0x138],EAX
//   XREF to: 016e9a48 (DATA)
// 0046f24d: MOV EDX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0046f253: MOV EAX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f256: MOV dword ptr [EAX + 0xc0],EDX
//   XREF to: 016e99d0 (DATA)
// 0046f25c: MOV EAX,dword ptr [EBP + -0x64]
//   XREF to: Stack[-0x74] (READ)
// 0046f25f: MOV EDX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f262: MOV dword ptr [EDX + 0x100],EAX
//   XREF to: 016e9a10 (DATA)
// 0046f268: MOV EAX,dword ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 0046f26b: MOV EDX,dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (READ)
// 0046f26e: MOV dword ptr [EDX + 0x140],EAX
//   XREF to: 016e9a50 (DATA)
// 0046f274: INC dword ptr [0x01626408]
//   XREF to: 01626408 (READ_WRITE)
// 0046f27a: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 0046f280: JMP 0x0046ed6d
//   Label: LAB_0046f280
//   XREF to: 0046ed6d (UNCONDITIONAL_JUMP)
// 0046f285: MOV ESP,EBP
//   Label: LAB_0046f285
// 0046f287: POP EBP
// 0046f288: POP EDI
// 0046f289: POP ESI
// 0046f28a: POP EBX
// 0046f28b: RET
