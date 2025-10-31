// Name: shape_design.c_addQuadPolygonOctant_FUN_00469220
// Address: 00469220
// Address Range: [[00469220, 00469419]]
// Convention: __cdecl
// Signature: void shape_design.c_addQuadPolygonOctant_FUN_00469220(uint vertex_index_1, uint vertex_index_2, uint vertex_index_3, uint vertex_index_4)
// Cross-references:
//   shape_design.c_generateOctant_FUN_00469420 (00469420) at 00469642 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rustplat_raw_0061cf16
//   double g_UvScaleConstant256 = 256
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
shape_design_c_addQuadPolygonOctant_FUN_00469220
          (uint vertex_index_1,uint vertex_index_2,uint vertex_index_3,uint vertex_index_4)

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
       (uint)(g_LoadedVertices[vertex_index_1].u * (float)g_UvScaleConstant256);
  g_ModelPolygonData[iVar1].uv_coordinates[0] =
       g_LoadedVertices[vertex_index_1].v * (float)g_UvScaleConstant256;
  g_ModelPolygonData[iVar1].vertex_indices[0x11] =
       (uint)(g_LoadedVertices[vertex_index_2].u * (float)g_UvScaleConstant256);
  g_ModelPolygonData[iVar1].uv_coordinates[1] =
       g_LoadedVertices[vertex_index_2].v * (float)g_UvScaleConstant256;
  g_ModelPolygonData[iVar1].vertex_indices[0x12] =
       (uint)(g_LoadedVertices[vertex_index_3].u * (float)g_UvScaleConstant256);
  g_ModelPolygonData[iVar1].uv_coordinates[2] =
       g_LoadedVertices[vertex_index_3].v * (float)g_UvScaleConstant256;
  g_ModelPolygonData[iVar1].vertex_indices[0x13] =
       (uint)(g_LoadedVertices[vertex_index_4].u * (float)g_UvScaleConstant256);
  g_ModelPolygonData[iVar1].uv_coordinates[3] =
       g_LoadedVertices[vertex_index_4].v * (float)g_UvScaleConstant256;
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
// 00469220: PUSH EBX
//   Label: shape_design.c_addQuadPolygonOctant_FUN_00469220
// 00469221: PUSH ESI
// 00469222: PUSH EDI
// 00469223: PUSH EBP
// 00469224: MOV EBP,ESP
// 00469226: SUB ESP,0x10
// 0046922c: IMUL EAX,dword ptr [0x016e990c],0x184
//   XREF to: 016e990c (READ)
// 00469236: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 0046923b: ADD EDX,EAX
// 0046923d: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00469240: INC dword ptr [0x016e990c]
//   XREF to: 016e990c (READ_WRITE)
// 00469246: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469249: MOV dword ptr [EAX],0x2
//   XREF to: 016e9910 (DATA)
// 0046924f: MOV EAX,0x61cf16
//   XREF to: 0061cf16 (DATA)
// 00469254: PUSH EAX
//   XREF to: 0061cf16 (DATA)
// 00469255: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469258: ADD EAX,0x4
// 0046925b: PUSH EAX
// 0046925c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00469261: ADD ESP,0x8
// 00469264: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469267: MOV dword ptr [EAX + 0xa4],0x4
//   XREF to: 016e99b4 (DATA)
// 00469271: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00469274: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469277: MOV dword ptr [EDX + 0xb8],EAX
//   XREF to: 016e99c8 (DATA)
// 0046927d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00469280: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469283: MOV dword ptr [EDX + 0xbc],EAX
//   XREF to: 016e99cc (DATA)
// 00469289: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046928c: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046928f: MOV dword ptr [EDX + 0xc0],EAX
//   XREF to: 016e99d0 (DATA)
// 00469295: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00469298: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046929b: MOV dword ptr [EDX + 0xc4],EAX
//   XREF to: 016e99d4 (DATA)
// 004692a1: IMUL EAX,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 004692a5: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 004692ab: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 004692b1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004692b4: FSTP float ptr [EAX + 0xf8]
//   XREF to: 016e9a08 (DATA)
// 004692ba: IMUL EAX,dword ptr [EBP + 0x14],0x14
//   XREF to: Stack[0x4] (READ)
// 004692be: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 004692c4: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 004692ca: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004692cd: FSTP float ptr [EAX + 0x138]
//   XREF to: 016e9a48 (DATA)
// 004692d3: IMUL EAX,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 004692d7: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 004692dd: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 004692e3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004692e6: FSTP float ptr [EAX + 0xfc]
//   XREF to: 016e9a0c (DATA)
// 004692ec: IMUL EAX,dword ptr [EBP + 0x18],0x14
//   XREF to: Stack[0x8] (READ)
// 004692f0: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 004692f6: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 004692fc: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004692ff: FSTP float ptr [EAX + 0x13c]
//   XREF to: 016e9a4c (DATA)
// 00469305: IMUL EAX,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 00469309: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 0046930f: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 00469315: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469318: FSTP float ptr [EAX + 0x100]
//   XREF to: 016e9a10 (DATA)
// 0046931e: IMUL EAX,dword ptr [EBP + 0x1c],0x14
//   XREF to: Stack[0xc] (READ)
// 00469322: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 00469328: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 0046932e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469331: FSTP float ptr [EAX + 0x140]
//   XREF to: 016e9a50 (DATA)
// 00469337: IMUL EAX,dword ptr [EBP + 0x20],0x14
//   XREF to: Stack[0x10] (READ)
// 0046933b: FLD float ptr [EAX + 0x1626418]
//   XREF to: 01626418 (DATA)
// 00469341: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 00469347: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046934a: FSTP float ptr [EAX + 0x104]
//   XREF to: 016e9a14 (DATA)
// 00469350: IMUL EAX,dword ptr [EBP + 0x20],0x14
//   XREF to: Stack[0x10] (READ)
// 00469354: FLD float ptr [EAX + 0x162641c]
//   XREF to: 0162641c (DATA)
// 0046935a: FMUL double ptr [0x0061cf26]
//   XREF to: 0061cf26 (READ)
// 00469360: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469363: FSTP float ptr [EAX + 0x144]
//   XREF to: 016e9a54 (DATA)
// 00469369: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00469370: JMP 0x00469378
//   XREF to: 00469378 (UNCONDITIONAL_JUMP)
// 00469372: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00469372
//   XREF to: Stack[-0x18] (READ)
// 00469375: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00469378: CMP dword ptr [EBP + -0x8],0x4
//   Label: LAB_00469378
//   XREF to: Stack[-0x18] (READ)
// 0046937c: JGE 0x00469413
//   XREF to: 00469413 (CONDITIONAL_JUMP)
// 00469382: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469385: SHL EAX,0x2
// 00469388: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046938b: MOV EAX,dword ptr [EAX + 0xf8]
// 00469391: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00469394: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00469397: SHL EAX,0x2
// 0046939a: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046939d: MOV EAX,dword ptr [EAX + 0x138]
// 004693a3: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004693a6: CMP dword ptr [EBP + -0x10],0x40800000
//   XREF to: Stack[-0x20] (READ)
// 004693ad: JGE 0x004693b6
//   XREF to: 004693b6 (CONDITIONAL_JUMP)
// 004693af: MOV dword ptr [EBP + -0x10],0x40800000
//   XREF to: Stack[-0x20] (WRITE)
// 004693b6: CMP dword ptr [EBP + -0x10],0x437b0000
//   Label: LAB_004693b6
//   XREF to: Stack[-0x20] (READ)
// 004693bd: JLE 0x004693c6
//   XREF to: 004693c6 (CONDITIONAL_JUMP)
// 004693bf: MOV dword ptr [EBP + -0x10],0x437b0000
//   XREF to: Stack[-0x20] (WRITE)
// 004693c6: CMP dword ptr [EBP + -0xc],0x40800000
//   Label: LAB_004693c6
//   XREF to: Stack[-0x1c] (READ)
// 004693cd: JGE 0x004693d6
//   XREF to: 004693d6 (CONDITIONAL_JUMP)
// 004693cf: MOV dword ptr [EBP + -0xc],0x40800000
//   XREF to: Stack[-0x1c] (WRITE)
// 004693d6: CMP dword ptr [EBP + -0xc],0x437b0000
//   Label: LAB_004693d6
//   XREF to: Stack[-0x1c] (READ)
// 004693dd: JLE 0x004693e6
//   XREF to: 004693e6 (CONDITIONAL_JUMP)
// 004693df: MOV dword ptr [EBP + -0xc],0x437b0000
//   XREF to: Stack[-0x1c] (WRITE)
// 004693e6: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004693e6
//   XREF to: Stack[-0x18] (READ)
// 004693e9: SHL EAX,0x2
// 004693ec: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004693ef: ADD EDX,EAX
// 004693f1: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004693f4: MOV dword ptr [EDX + 0xf8],EAX
// 004693fa: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004693fd: SHL EAX,0x2
// 00469400: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469403: ADD EDX,EAX
// 00469405: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00469408: MOV dword ptr [EDX + 0x138],EAX
// 0046940e: JMP 0x00469372
//   XREF to: 00469372 (UNCONDITIONAL_JUMP)
// 00469413: MOV ESP,EBP
//   Label: LAB_00469413
// 00469415: POP EBP
// 00469416: POP EDI
// 00469417: POP ESI
// 00469418: POP EBX
// 00469419: RET
