// Name: shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
// Address: 00468d20
// Address Range: [[00468d20, 00468f19]]
// Convention: __cdecl
// Signature: void shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20(int vertex_index_1, int vertex_index_2, int vertex_index_3, int vertex_index_4)
// Cross-references:
//   shape_design.c_generateShell_FUN_00468f20 (00468f20) at 00469123 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rustplat_raw_0061ce7e
//   double g_UVScaleFactor = 256
//   undefined4 DAT_01626418
//   undefined4 DAT_0162641c
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e99d4
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a14
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a54
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
shape_design_c_addQuadPolygonHalfSphere_FUN_00468d20
          (int vertex_index_1,int vertex_index_2,int vertex_index_3,int vertex_index_4)

{
  int iVar1;
  SShapeEditorPolygon *pSVar2;
  uint local_20;
  float local_1c;
  int local_18;
  
  iVar1 = g_PolygonCount;
  pSVar2 = g_ModelPolygonData + g_PolygonCount;
  g_PolygonCount = g_PolygonCount + 1;
  pSVar2->polygon_type = 2;
  crt_stdio_c_sprintf_FUN_005fdbd0(g_ModelPolygonData[iVar1].texture_name,"rustplat.raw");
  g_ModelPolygonData[iVar1].vertex_indices_count = 4;
  g_ModelPolygonData[iVar1].vertex_indices[0] = vertex_index_1;
  g_ModelPolygonData[iVar1].vertex_indices[1] = vertex_index_2;
  g_ModelPolygonData[iVar1].vertex_indices[2] = vertex_index_3;
  g_ModelPolygonData[iVar1].vertex_indices[3] = vertex_index_4;
  g_ModelPolygonData[iVar1].vertex_indices[0x10] =
       (uint)(g_LoadedVertices[vertex_index_1].u * (float)g_UVScaleFactor);
  g_ModelPolygonData[iVar1].uv_coordinates[0] =
       g_LoadedVertices[vertex_index_1].v * (float)g_UVScaleFactor;
  g_ModelPolygonData[iVar1].vertex_indices[0x11] =
       (uint)(g_LoadedVertices[vertex_index_2].u * (float)g_UVScaleFactor);
  g_ModelPolygonData[iVar1].uv_coordinates[1] =
       g_LoadedVertices[vertex_index_2].v * (float)g_UVScaleFactor;
  g_ModelPolygonData[iVar1].vertex_indices[0x12] =
       (uint)(g_LoadedVertices[vertex_index_3].u * (float)g_UVScaleFactor);
  g_ModelPolygonData[iVar1].uv_coordinates[2] =
       g_LoadedVertices[vertex_index_3].v * (float)g_UVScaleFactor;
  g_ModelPolygonData[iVar1].vertex_indices[0x13] =
       (uint)(g_LoadedVertices[vertex_index_4].u * (float)g_UVScaleFactor);
  g_ModelPolygonData[iVar1].uv_coordinates[3] =
       g_LoadedVertices[vertex_index_4].v * (float)g_UVScaleFactor;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    local_20 = pSVar2->vertex_indices[local_18 + 0x10];
    local_1c = pSVar2->uv_coordinates[local_18];
    if ((int)local_20 < 0x40800000) {
      local_20 = 0x40800000;
    }
    if (0x437b0000 < (int)local_20) {
      local_20 = 0x437b0000;
    }
    if ((int)local_1c < 0x40800000) {
      local_1c = 4.0;
    }
    if (0x437b0000 < (int)local_1c) {
      local_1c = 251.0;
    }
    pSVar2->vertex_indices[local_18 + 0x10] = local_20;
    pSVar2->uv_coordinates[local_18] = local_1c;
  }
  return;
}


// Assembly code:
// 00468d20: PUSH EBX
//   Label: shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
// 00468d21: PUSH ESI
// 00468d22: PUSH EDI
// 00468d23: PUSH EBP
// 00468d24: MOV EBP,ESP
// 00468d26: SUB ESP,0x10
// 00468d2c: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00468d36: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00468d3b: ADD EDX,EAX
// 00468d3d: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00468d40: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 00468d46: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d49: MOV dword ptr [EAX],0x2
//   XREF to: 016e9910 (DATA)
// 00468d4f: MOV EAX,0x61ce7e
//   XREF to: 0061ce7e (DATA)
// 00468d54: PUSH EAX
//   XREF to: 0061ce7e (DATA)
// 00468d55: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d58: ADD EAX,0x4
// 00468d5b: PUSH EAX
// 00468d5c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00468d61: ADD ESP,0x8
// 00468d64: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d67: MOV dword ptr [EAX + 0xa4],0x4
//   XREF to: 016e99b4 (DATA)
// 00468d71: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468d74: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d77: MOV dword ptr [EDX + 0xb8],EAX
//   XREF to: 016e99c8 (DATA)
// 00468d7d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468d80: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d83: MOV dword ptr [EDX + 0xbc],EAX
//   XREF to: 016e99cc (DATA)
// 00468d89: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00468d8c: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d8f: MOV dword ptr [EDX + 0xc0],EAX
//   XREF to: 016e99d0 (DATA)
// 00468d95: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00468d98: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468d9b: MOV dword ptr [EDX + 0xc4],EAX
//   XREF to: 016e99d4 (DATA)
// 00468da1: IMUL EAX,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 00468da5: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00468dab: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468db1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468db4: FSTP float ptr [EAX + 0xf8]
//   XREF to: 016e9a08 (DATA)
// 00468dba: IMUL EAX,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 00468dbe: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468dc4: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468dca: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468dcd: FSTP float ptr [EAX + 0x138]
//   XREF to: 016e9a48 (DATA)
// 00468dd3: IMUL EAX,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 00468dd7: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00468ddd: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468de3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468de6: FSTP float ptr [EAX + 0xfc]
//   XREF to: 016e9a0c (DATA)
// 00468dec: IMUL EAX,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 00468df0: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468df6: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468dfc: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468dff: FSTP float ptr [EAX + 0x13c]
//   XREF to: 016e9a4c (DATA)
// 00468e05: IMUL EAX,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 00468e09: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00468e0f: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468e15: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468e18: FSTP float ptr [EAX + 0x100]
//   XREF to: 016e9a10 (DATA)
// 00468e1e: IMUL EAX,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 00468e22: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468e28: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468e2e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468e31: FSTP float ptr [EAX + 0x140]
//   XREF to: 016e9a50 (DATA)
// 00468e37: IMUL EAX,dword ptr [EBP + 0x20],0x14
//   XREF to: Stack[0x10] (READ)
// 00468e3b: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00468e41: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468e47: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468e4a: FSTP float ptr [EAX + 0x104]
//   XREF to: 016e9a14 (DATA)
// 00468e50: IMUL EAX,dword ptr [EBP + 0x20],0x14
//   XREF to: Stack[0x10] (READ)
// 00468e54: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468e5a: FMUL double ptr [0x0061ce8e]
//   XREF to: 0061ce8e (READ)
// 00468e60: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468e63: FSTP float ptr [EAX + 0x144]
//   XREF to: 016e9a54 (DATA)
// 00468e69: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00468e70: JMP 0x00468e78
//   XREF to: 00468e78 (UNCONDITIONAL_JUMP)
// 00468e72: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00468e72
//   XREF to: Stack[-0x18] (READ)
// 00468e75: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00468e78: CMP dword ptr [EBP + -0x8],0x4
//   Label: LAB_00468e78
//   XREF to: Stack[-0x18] (READ)
// 00468e7c: JGE 0x00468f13
//   XREF to: 00468f13 (CONDITIONAL_JUMP)
// 00468e82: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468e85: SHL EAX,0x2
// 00468e88: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468e8b: MOV EAX,dword ptr [EAX + 0xf8]
// 00468e91: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00468e94: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468e97: SHL EAX,0x2
// 00468e9a: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468e9d: MOV EAX,dword ptr [EAX + 0x138]
// 00468ea3: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00468ea6: CMP dword ptr [EBP + -0x10],0x40800000
//   XREF to: Stack[-0x20] (READ)
// 00468ead: JGE 0x00468eb6
//   XREF to: 00468eb6 (CONDITIONAL_JUMP)
// 00468eaf: MOV dword ptr [EBP + -0x10],0x40800000
//   XREF to: Stack[-0x20] (WRITE)
// 00468eb6: CMP dword ptr [EBP + -0x10],0x437b0000
//   Label: LAB_00468eb6
//   XREF to: Stack[-0x20] (READ)
// 00468ebd: JLE 0x00468ec6
//   XREF to: 00468ec6 (CONDITIONAL_JUMP)
// 00468ebf: MOV dword ptr [EBP + -0x10],0x437b0000
//   XREF to: Stack[-0x20] (WRITE)
// 00468ec6: CMP dword ptr [EBP + -0xc],0x40800000
//   Label: LAB_00468ec6
//   XREF to: Stack[-0x1c] (READ)
// 00468ecd: JGE 0x00468ed6
//   XREF to: 00468ed6 (CONDITIONAL_JUMP)
// 00468ecf: MOV dword ptr [EBP + -0xc],0x40800000
//   XREF to: Stack[-0x1c] (WRITE)
// 00468ed6: CMP dword ptr [EBP + -0xc],0x437b0000
//   Label: LAB_00468ed6
//   XREF to: Stack[-0x1c] (READ)
// 00468edd: JLE 0x00468ee6
//   XREF to: 00468ee6 (CONDITIONAL_JUMP)
// 00468edf: MOV dword ptr [EBP + -0xc],0x437b0000
//   XREF to: Stack[-0x1c] (WRITE)
// 00468ee6: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00468ee6
//   XREF to: Stack[-0x18] (READ)
// 00468ee9: SHL EAX,0x2
// 00468eec: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468eef: ADD EDX,EAX
// 00468ef1: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00468ef4: MOV dword ptr [EDX + 0xf8],EAX
// 00468efa: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00468efd: SHL EAX,0x2
// 00468f00: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468f03: ADD EDX,EAX
// 00468f05: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00468f08: MOV dword ptr [EDX + 0x138],EAX
// 00468f0e: JMP 0x00468e72
//   XREF to: 00468e72 (UNCONDITIONAL_JUMP)
// 00468f13: MOV ESP,EBP
//   Label: LAB_00468f13
// 00468f15: POP EBP
// 00468f16: POP EDI
// 00468f17: POP ESI
// 00468f18: POP EBX
// 00468f19: RET
