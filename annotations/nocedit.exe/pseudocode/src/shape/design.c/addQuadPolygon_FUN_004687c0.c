// Name: shape_design.c_addQuadPolygon_FUN_004687c0
// Address: 004687c0
// Address Range: [[004687c0, 0046890f]]
// Convention: __cdecl
// Signature: void shape_design.c_addQuadPolygon_FUN_004687c0(int vertex_index_0, int vertex_index_1, int vertex_index_2, int vertex_index_3)
// Cross-references:
//   shape_design.c_generateGlobe_FUN_00468910 (00468910) at 00468c23 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rustplat_raw_0061cdde
//   double g_TextureScale = 256
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
shape_design_c_addQuadPolygon_FUN_004687c0
          (int vertex_index_0,int vertex_index_1,int vertex_index_2,int vertex_index_3)

{
  int iVar1;
  SShapeEditorPolygon *pSVar2;
  
  iVar1 = g_PolygonCount;
  pSVar2 = g_ModelPolygonData + g_PolygonCount;
  g_PolygonCount = g_PolygonCount + 1;
  pSVar2->polygon_type = 2;
  crt_stdio_c_sprintf_FUN_005fdbd0(g_ModelPolygonData[iVar1].texture_name,"rustplat.raw");
  g_ModelPolygonData[iVar1].vertex_indices_count = 4;
  g_ModelPolygonData[iVar1].vertex_indices[0] = vertex_index_0;
  g_ModelPolygonData[iVar1].vertex_indices[1] = vertex_index_1;
  g_ModelPolygonData[iVar1].vertex_indices[2] = vertex_index_2;
  g_ModelPolygonData[iVar1].vertex_indices[3] = vertex_index_3;
  g_ModelPolygonData[iVar1].vertex_indices[0x10] =
       (uint)(g_LoadedVertices[vertex_index_0].u * (float)g_TextureScale);
  g_ModelPolygonData[iVar1].uv_coordinates[0] =
       g_LoadedVertices[vertex_index_0].v * (float)g_TextureScale;
  g_ModelPolygonData[iVar1].vertex_indices[0x11] =
       (uint)(g_LoadedVertices[vertex_index_1].u * (float)g_TextureScale);
  g_ModelPolygonData[iVar1].uv_coordinates[1] =
       g_LoadedVertices[vertex_index_1].v * (float)g_TextureScale;
  g_ModelPolygonData[iVar1].vertex_indices[0x12] =
       (uint)(g_LoadedVertices[vertex_index_2].u * (float)g_TextureScale);
  g_ModelPolygonData[iVar1].uv_coordinates[2] =
       g_LoadedVertices[vertex_index_2].v * (float)g_TextureScale;
  g_ModelPolygonData[iVar1].vertex_indices[0x13] =
       (uint)(g_LoadedVertices[vertex_index_3].u * (float)g_TextureScale);
  g_ModelPolygonData[iVar1].uv_coordinates[3] =
       g_LoadedVertices[vertex_index_3].v * (float)g_TextureScale;
  return;
}


// Assembly code:
// 004687c0: PUSH EBX
//   Label: shape_design.c_addQuadPolygon_FUN_004687c0
// 004687c1: PUSH ESI
// 004687c2: PUSH EDI
// 004687c3: PUSH EBP
// 004687c4: MOV EBP,ESP
// 004687c6: SUB ESP,0x8
// 004687cc: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 004687d6: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 004687db: ADD EDX,EAX
// 004687dd: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004687e0: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 004687e6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004687e9: MOV dword ptr [EAX],0x2
//   XREF to: 016e9910 (DATA)
// 004687ef: MOV EAX,0x61cdde
//   XREF to: 0061cdde (DATA)
// 004687f4: PUSH EAX
//   XREF to: 0061cdde (DATA)
// 004687f5: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004687f8: ADD EAX,0x4
// 004687fb: PUSH EAX
// 004687fc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00468801: ADD ESP,0x8
// 00468804: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468807: MOV dword ptr [EAX + 0xa4],0x4
//   XREF to: 016e99b4 (DATA)
// 00468811: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00468814: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468817: MOV dword ptr [EDX + 0xb8],EAX
//   XREF to: 016e99c8 (DATA)
// 0046881d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00468820: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468823: MOV dword ptr [EDX + 0xbc],EAX
//   XREF to: 016e99cc (DATA)
// 00468829: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046882c: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046882f: MOV dword ptr [EDX + 0xc0],EAX
//   XREF to: 016e99d0 (DATA)
// 00468835: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00468838: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046883b: MOV dword ptr [EDX + 0xc4],EAX
//   XREF to: 016e99d4 (DATA)
// 00468841: IMUL EAX,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 00468845: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 0046884b: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 00468851: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468854: FSTP float ptr [EAX + 0xf8]
//   XREF to: 016e9a08 (DATA)
// 0046885a: IMUL EAX,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 0046885e: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468864: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 0046886a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046886d: FSTP float ptr [EAX + 0x138]
//   XREF to: 016e9a48 (DATA)
// 00468873: IMUL EAX,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 00468877: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 0046887d: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 00468883: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468886: FSTP float ptr [EAX + 0xfc]
//   XREF to: 016e9a0c (DATA)
// 0046888c: IMUL EAX,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 00468890: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00468896: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 0046889c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046889f: FSTP float ptr [EAX + 0x13c]
//   XREF to: 016e9a4c (DATA)
// 004688a5: IMUL EAX,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 004688a9: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 004688af: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 004688b5: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004688b8: FSTP float ptr [EAX + 0x100]
//   XREF to: 016e9a10 (DATA)
// 004688be: IMUL EAX,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 004688c2: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 004688c8: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 004688ce: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004688d1: FSTP float ptr [EAX + 0x140]
//   XREF to: 016e9a50 (DATA)
// 004688d7: IMUL EAX,dword ptr [EBP + 0x20],0x14
//   XREF to: Stack[0x10] (READ)
// 004688db: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 004688e1: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 004688e7: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004688ea: FSTP float ptr [EAX + 0x104]
//   XREF to: 016e9a14 (DATA)
// 004688f0: IMUL EAX,dword ptr [EBP + 0x20],0x14
//   XREF to: Stack[0x10] (READ)
// 004688f4: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 004688fa: FMUL double ptr [0x0061cdee]
//   XREF to: 0061cdee (READ)
// 00468900: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00468903: FSTP float ptr [EAX + 0x144]
//   XREF to: 016e9a54 (DATA)
// 00468909: MOV ESP,EBP
// 0046890b: POP EBP
// 0046890c: POP EDI
// 0046890d: POP ESI
// 0046890e: POP EBX
// 0046890f: RET
