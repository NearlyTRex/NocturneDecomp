// Name: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// Address: 004ce2d0
// Address Range: [[004ce2d0, 004ce79b]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, int z_pos, int width, int height, int color_mode)
// Cross-references:
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 (004ce7a0) at 004cea64 [UNCONDITIONAL_CALL]
// Globals:
//   SMRGLTextureBasic g_FontTextureInfo
//   undefined4 g_TempFilenameBuffer
//   undefined4 DAT_0067b559
//   undefined4 DAT_0067b55a
//   undefined4 DAT_0067b55b
//   SRenderVertex g_QuadVertex0
//   undefined4 g_QuadVertex0_Y
//   undefined4 g_QuadVertex0_U
//   undefined4 g_QuadVertex0_V
//   undefined4 DAT_0077256c
//   undefined4 DAT_00772570
//   undefined4 g_CurrentRenderColorRed
//   undefined4 g_CurrentRenderColorGreen
//   undefined4 g_CurrentRenderColorBlue
//   SRenderVertex g_QuadVertex1
//   undefined4 g_QuadVertex1_Y
//   undefined4 DAT_0077259c
//   undefined4 DAT_007725a0
//   SRenderVertex g_QuadVertex2
//   undefined4 g_QuadVertex2_Y
//   undefined4 g_TempTextureU
//   undefined4 g_TempTextureV
//   SRenderVertex g_QuadVertex3
//   undefined4 g_QuadVertex3_Y
//   undefined4 DAT_007725fc
//   undefined4 DAT_00772600
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   void* g_CurrentTextureOpacityData
//   int g_UseExternalRenderer
//   int g_ShadowColorRed
//   int g_ShadowColorGreen
//   int g_ShadowColorBlue
// Function calls:
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0
          (CBitFont *this_ptr,int character_code,int x_pos,int y_pos,int z_pos,int width,int height,
          int color_mode)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char (*pacVar9) [80];
  SRenderVertex *pSVar10;
  int iVar11;
  float fVar12;
  int unaff_EDI;
  char *pcVar13;
  SRenderVertex *pSVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  int unaff_retaddr;
  
  bVar18 = 0;
  pcVar13 = g_FontTextureInfo.texture_name;
  pacVar9 = this_ptr->bitmap_files + this_ptr->char_bitmap_index[character_code];
  do {
    cVar3 = (*pacVar9)[0];
    *pcVar13 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = (*pacVar9)[1];
    pacVar9 = (char (*) [80])(*pacVar9 + 2);
    pcVar13[1] = cVar3;
    pcVar13 = pcVar13 + 2;
  } while (cVar3 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&g_FontTextureInfo);
  uVar6 = g_ShadowColorBlue;
  uVar4 = g_ShadowColorRed;
  uVar5 = g_ShadowColorGreen;
  if (height != -2) {
    if (height < 0) {
      g_QuadVertex0.color = 0xffff;
      g_QuadVertex0.fog = 9.18341e-41;
      g_QuadVertex0.light = 9.18341e-41;
      goto LAB_004ce397;
    }
    iVar8 = height * 3;
    uVar6 = (uint)(byte)g_SourcePaletteData[iVar8 + 2];
    uVar4 = (uint)(byte)g_SourcePaletteData[iVar8];
    uVar5 = (uint)(byte)g_SourcePaletteData[iVar8 + 1];
  }
  g_QuadVertex0.color = uVar5 << 8;
  g_QuadVertex0.light = (float)(uVar4 << 8);
  g_QuadVertex0.fog = (float)(uVar6 << 8);
LAB_004ce397:
  g_QuadVertex0.projected_vertex.transformed_z = 0x10000;
  g_QuadVertex0.projected_vertex.inv_z = 0x10000;
  pSVar10 = &g_QuadVertex0;
  pSVar14 = &g_QuadVertex1;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pSVar14->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar18 * -2 + 1) * 4);
    pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
  }
  pSVar10 = &g_QuadVertex0;
  pSVar14 = &g_QuadVertex2;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pSVar14->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar18 * -2 + 1) * 4);
    pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
  }
  pSVar10 = &g_QuadVertex0;
  pSVar14 = &g_QuadVertex3;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pSVar14->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
    pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar18 * -2 + 1) * 4);
    pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar18 * -2 + 1) * 4);
  }
  iVar15 = width + 1;
  iVar8 = y_pos * 0x10000 + -0x1000;
  iVar11 = iVar15 * 0x10000 + 0x1000;
  iVar16 = (height + 1) * 0x10000;
  iVar7 = z_pos * 0x10000 + -0x1000;
  iVar17 = iVar16 + 0x1000;
  if (g_UseExternalRenderer == 0) {
    iVar17 = iVar16 + 0x9000;
    iVar11 = iVar15 * 0x10000 + 0x9000;
  }
  g_QuadVertex0.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex0.projected_vertex.transformed_y =
       (int)(((longlong)(iVar7 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex1.projected_vertex.transformed_x =
       (int)(((longlong)(iVar11 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex1.projected_vertex.transformed_y =
       (int)(((longlong)(iVar7 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex2.projected_vertex.transformed_x =
       (int)(((longlong)(iVar11 - g_ViewportRightFixed) * 0x10000) /
            (longlong)g_ViewportCenterXFixed);
  g_QuadVertex2.projected_vertex.transformed_y =
       (int)(((longlong)(iVar17 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  g_QuadVertex3.projected_vertex.transformed_x =
       (int)(((longlong)(iVar8 - g_ViewportRightFixed) * 0x10000) / (longlong)g_ViewportCenterXFixed
            );
  g_QuadVertex3.projected_vertex.transformed_y =
       (int)(((longlong)(iVar17 - g_ViewportBottomFixed) * 0x10000) /
            (longlong)g_ViewportCenterYFixed);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1c);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(unaff_EDI);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(0x4e1e);
  engine_matrix_c_projectCachedPoint_FUN_0050cda0(unaff_EDI);
  iVar7 = (height + 1) * 4 + iVar15;
  iVar15 = *(int *)(iVar7 + 0x2168) * 4 + iVar15;
  iVar8 = *(int *)(iVar15 + 0x154);
  iVar7 = *(int *)(iVar7 + 0x1d68) - *(int *)(iVar15 + 0x144);
  fVar1 = (float)((iVar7 % iVar8) * 0x10000 + -0x1000);
  fVar2 = (float)((iVar7 / iVar8) * 0x10000 + -0x1000);
  g_QuadVertex2.u = (float)(((int)fVar1 + iVar11) - unaff_EDI);
  fVar12 = (float)((int)fVar2 + iVar17 + -0x4e1d);
  if (g_UseExternalRenderer == 0) {
    fVar12 = (float)((int)fVar2 + iVar17 + 0x31e3);
    g_QuadVertex2.u = (float)((int)g_QuadVertex2.u + 0x8000);
  }
  g_RenderVertexBuffer[unaff_EBX].u = fVar1;
  g_RenderVertexBuffer[unaff_EBX].v = fVar2;
  g_RenderVertexBuffer[unaff_retaddr].u = g_QuadVertex2.u;
  g_RenderVertexBuffer[unaff_retaddr].v = fVar2;
  g_QuadVertex2.v = fVar12;
  g_RenderVertexBuffer[unaff_ESI].u = fVar1;
  iVar8 = 4;
  g_RenderVertexBuffer[unaff_ESI].v = fVar12;
  iVar7 = 0;
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  if (g_CurrentTextureOpacityData == (void *)0x0) {
    iVar15 = 0x207;
  }
  else {
    iVar15 = 0x227;
  }
  engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
            ((SMRGLHeaderPrimitive *)&stack0xffffffc4,iVar15,0,iVar8,iVar7);
  return;
}


// Assembly code:
// 004ce2d0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
// 004ce2d1: PUSH ESI
// 004ce2d2: PUSH EDI
// 004ce2d3: PUSH EBP
// 004ce2d4: SUB ESP,0x44
// 004ce2d7: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x1c] (READ)
// 004ce2db: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 004ce2df: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 004ce2e3: SHL EAX,0x2
// 004ce2e6: ADD EAX,EDX
// 004ce2e8: MOV EAX,dword ptr [EAX + 0x2168]
// 004ce2ee: LEA ECX,[EAX*0x4 + 0x0]
// 004ce2f5: ADD ECX,EAX
// 004ce2f7: LEA ESI,[EDX + 0x4]
// 004ce2fa: SHL ECX,0x4
// 004ce2fd: MOV EDI,0x67b558
//   XREF to: 0067b558 (DATA)
// 004ce302: ADD ESI,ECX
// 004ce304: PUSH EDI
//   XREF to: 0067b558 (DATA)
// 004ce305: MOV AL,byte ptr [ESI]
//   Label: LAB_004ce305
// 004ce307: MOV byte ptr [EDI],AL
//   XREF to: 0067b558 (WRITE)
//   XREF to: 0067b55a (WRITE)
// 004ce309: CMP AL,0x0
// 004ce30b: JZ 0x004ce31d
//   XREF to: 004ce31d (CONDITIONAL_JUMP)
// 004ce30d: MOV AL,byte ptr [ESI + 0x1]
// 004ce310: ADD ESI,0x2
// 004ce313: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0067b559 (WRITE)
//   XREF to: 0067b55b (WRITE)
// 004ce316: ADD EDI,0x2
// 004ce319: CMP AL,0x0
// 004ce31b: JNZ 0x004ce305
//   XREF to: 004ce305 (CONDITIONAL_JUMP)
// 004ce31d: POP EDI
//   Label: LAB_004ce31d
// 004ce31e: PUSH 0x67b550
//   XREF to: 0067b550 (DATA)
// 004ce323: MOV EBP,0x4e1e
// 004ce328: MOV ESI,0x4e1d
// 004ce32d: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 004ce332: MOV ECX,0x4e1c
// 004ce337: ADD ESP,0x4
// 004ce33a: MOV EDI,0x4e1f
// 004ce33f: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004ce343: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004ce347: MOV dword ptr [ESP + 0x38],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004ce34b: CMP EBX,-0x2
// 004ce34e: JZ 0x004ce746
//   XREF to: 004ce746 (CONDITIONAL_JUMP)
// 004ce354: TEST EBX,EBX
// 004ce356: JL 0x004ce76a
//   XREF to: 004ce76a (CONDITIONAL_JUMP)
// 004ce35c: MOV EAX,EBX
// 004ce35e: LEA ECX,[EBX*0x4 + 0x0]
// 004ce365: SUB ECX,EBX
// 004ce367: XOR EAX,EBX
// 004ce369: MOV AL,byte ptr [ECX + 0x2d01f48]
//   XREF to: 02d01f48 (DATA)
// 004ce36f: SHL EAX,0x8
// 004ce372: MOV [0x00772574],EAX
//   XREF to: 00772574 (WRITE)
// 004ce377: XOR EAX,EAX
// 004ce379: MOV AL,byte ptr [ECX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 004ce37f: SHL EAX,0x8
// 004ce382: MOV [0x00772578],EAX
//   XREF to: 00772578 (WRITE)
// 004ce387: XOR EAX,EAX
// 004ce389: MOV AL,byte ptr [ECX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 004ce38f: SHL EAX,0x8
//   Label: LAB_004ce38f
// 004ce392: MOV [0x0077257c],EAX
//   XREF to: 0077257c (WRITE)
// 004ce397: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_004ce397
//   XREF to: Stack[-0x18] (READ)
// 004ce39b: LEA ECX,[EAX*0x4 + 0x0]
// 004ce3a2: MOV EBX,0x10000
// 004ce3a7: SUB ECX,EAX
// 004ce3a9: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 004ce3ad: MOV EAX,ECX
// 004ce3af: LEA ESI,[EDX*0x4 + 0x0]
// 004ce3b6: SHL EAX,0x4
// 004ce3b9: SUB ESI,EDX
// 004ce3bb: MOV dword ptr [EAX + 0x68801c],EBX
//   XREF to: 0077255c (WRITE)
// 004ce3c1: SHL ESI,0x4
// 004ce3c4: MOV dword ptr [EAX + 0x688020],EBX
//   XREF to: 00772560 (WRITE)
// 004ce3ca: MOV ECX,0xc
// 004ce3cf: LEA EDI,[ESI + 0x688014]
//   XREF to: 00772584 (DATA)
// 004ce3d5: LEA ESI,[EAX + 0x688014]
//   XREF to: 00772554 (DATA)
// 004ce3db: MOVSD.REP ES:EDI,ESI
//   XREF to: 00772584 (WRITE)
//   XREF to: 00772588 (WRITE)
//   XREF to: 00772554 (READ)
//   XREF to: 00772558 (READ)
// 004ce3dd: LEA ESI,[EBP*0x4 + 0x0]
// 004ce3e4: SUB ESI,EBP
// 004ce3e6: SHL ESI,0x4
// 004ce3e9: MOV ECX,0xc
// 004ce3ee: LEA EDI,[ESI + 0x688014]
//   XREF to: 007725b4 (DATA)
// 004ce3f4: LEA ESI,[EAX + 0x688014]
//   XREF to: 00772554 (DATA)
// 004ce3fa: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 004ce3fe: MOVSD.REP ES:EDI,ESI
//   XREF to: 007725b4 (WRITE)
//   XREF to: 007725b8 (WRITE)
//   XREF to: 00772554 (READ)
//   XREF to: 00772558 (READ)
// 004ce400: LEA ESI,[EDX*0x4 + 0x0]
// 004ce407: MOV ECX,0xc
// 004ce40c: SUB ESI,EDX
// 004ce40e: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x18] (READ)
// 004ce412: SHL ESI,0x4
// 004ce415: INC EDX
// 004ce416: LEA EDI,[ESI + 0x688014]
//   XREF to: 007725e4 (DATA)
// 004ce41c: LEA ESI,[EAX + 0x688014]
//   XREF to: 00772554 (DATA)
// 004ce422: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[0x18] (WRITE)
// 004ce426: MOVSD.REP ES:EDI,ESI
//   XREF to: 007725e4 (WRITE)
//   XREF to: 007725e8 (WRITE)
//   XREF to: 00772554 (READ)
//   XREF to: 00772558 (READ)
// 004ce428: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 004ce42c: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x14] (READ)
// 004ce430: MOV ECX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 004ce436: SHL EAX,0x10
// 004ce439: INC EDI
// 004ce43a: SUB EAX,0x1000
// 004ce43f: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[0x14] (WRITE)
// 004ce443: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004ce447: MOV ESI,EDI
// 004ce449: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 004ce44d: SHL ESI,0x10
// 004ce450: MOV EDI,EDX
// 004ce452: SHL EAX,0x10
// 004ce455: ADD ESI,0x1000
// 004ce45b: SHL EDI,0x10
// 004ce45e: SUB EAX,0x1000
// 004ce463: ADD EDI,0x1000
// 004ce469: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004ce46d: TEST ECX,ECX
// 004ce46f: JZ 0x004ce783
//   XREF to: 004ce783 (CONDITIONAL_JUMP)
// 004ce475: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_004ce475
//   XREF to: Stack[-0x20] (READ)
// 004ce479: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 004ce47f: MOV EBX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 004ce485: SUB EAX,EDX
// 004ce487: MOV EDX,0x10000
// 004ce48c: IMUL EDX
// 004ce48e: IDIV EBX
// 004ce490: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 004ce494: LEA ECX,[EDX*0x4 + 0x0]
// 004ce49b: SUB ECX,EDX
// 004ce49d: SHL ECX,0x4
// 004ce4a0: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 004ce4a6: MOV dword ptr [ECX + 0x688014],EAX
//   XREF to: 00772554 (WRITE)
// 004ce4ac: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 004ce4b0: MOV EBX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004ce4b6: SUB EAX,EDX
// 004ce4b8: MOV EDX,0x10000
// 004ce4bd: IMUL EDX
// 004ce4bf: IDIV EBX
// 004ce4c1: MOV EDX,0x10000
// 004ce4c6: MOV dword ptr [ECX + 0x688018],EAX
//   XREF to: 00772558 (WRITE)
// 004ce4cc: MOV ECX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 004ce4d2: MOV EAX,ESI
// 004ce4d4: MOV EBX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 004ce4da: SUB EAX,ECX
// 004ce4dc: IMUL EDX
// 004ce4de: IDIV EBX
// 004ce4e0: MOV EDX,EAX
// 004ce4e2: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 004ce4e6: LEA ECX,[EAX*0x4 + 0x0]
// 004ce4ed: SUB ECX,EAX
// 004ce4ef: SHL ECX,0x4
// 004ce4f2: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 004ce4f6: MOV dword ptr [ECX + 0x688014],EDX
//   XREF to: 00772584 (WRITE)
// 004ce4fc: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 004ce502: MOV EBX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004ce508: SUB EAX,EDX
// 004ce50a: MOV EDX,0x10000
// 004ce50f: IMUL EDX
// 004ce511: IDIV EBX
// 004ce513: MOV dword ptr [ECX + 0x688018],EAX
//   XREF to: 00772588 (WRITE)
// 004ce519: MOV ECX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 004ce51f: MOV EAX,ESI
// 004ce521: MOV EDX,0x10000
// 004ce526: SUB EAX,ECX
// 004ce528: LEA ECX,[EBP*0x4 + 0x0]
// 004ce52f: MOV EBX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 004ce535: SUB ECX,EBP
// 004ce537: IMUL EDX
// 004ce539: IDIV EBX
// 004ce53b: SHL ECX,0x4
// 004ce53e: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 004ce544: MOV dword ptr [ECX + 0x688014],EAX
//   XREF to: 007725b4 (WRITE)
// 004ce54a: MOV EAX,EDI
// 004ce54c: MOV EBX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004ce552: SUB EAX,EDX
// 004ce554: MOV EDX,0x10000
// 004ce559: IMUL EDX
// 004ce55b: IDIV EBX
// 004ce55d: MOV EDX,0x10000
// 004ce562: MOV dword ptr [ECX + 0x688018],EAX
//   XREF to: 007725b8 (WRITE)
// 004ce568: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 004ce56c: MOV ECX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 004ce572: MOV EBX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 004ce578: SUB EAX,ECX
// 004ce57a: IMUL EDX
// 004ce57c: IDIV EBX
// 004ce57e: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 004ce582: LEA ECX,[EDX*0x4 + 0x0]
// 004ce589: SUB ECX,EDX
// 004ce58b: SHL ECX,0x4
// 004ce58e: MOV dword ptr [ECX + 0x688014],EAX
//   XREF to: 007725e4 (WRITE)
// 004ce594: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 004ce59a: MOV EAX,EDI
// 004ce59c: MOV EBX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004ce5a2: SUB EAX,EDX
// 004ce5a4: MOV EDX,0x10000
// 004ce5a9: IMUL EDX
// 004ce5ab: IDIV EBX
// 004ce5ad: MOV dword ptr [ECX + 0x688018],EAX
//   XREF to: 007725e8 (WRITE)
// 004ce5b3: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 004ce5b7: PUSH ECX
// 004ce5b8: CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   XREF to: 0050cda0 (UNCONDITIONAL_CALL)
// 004ce5bd: ADD ESP,0x4
// 004ce5c0: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 004ce5c4: PUSH EBX
// 004ce5c5: CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   XREF to: 0050cda0 (UNCONDITIONAL_CALL)
// 004ce5ca: ADD ESP,0x4
// 004ce5cd: PUSH EBP
// 004ce5ce: CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   XREF to: 0050cda0 (UNCONDITIONAL_CALL)
// 004ce5d3: ADD ESP,0x4
// 004ce5d6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 004ce5da: PUSH EAX
// 004ce5db: CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0
//   XREF to: 0050cda0 (UNCONDITIONAL_CALL)
// 004ce5e0: ADD ESP,0x4
// 004ce5e3: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 004ce5e7: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 004ce5eb: SHL ECX,0x2
// 004ce5ee: ADD ECX,EDX
// 004ce5f0: MOV EAX,dword ptr [ECX + 0x2168]
// 004ce5f6: SHL EAX,0x2
// 004ce5f9: ADD EAX,EDX
// 004ce5fb: MOV ECX,dword ptr [ECX + 0x1d68]
// 004ce601: MOV EDX,dword ptr [EAX + 0x144]
// 004ce607: MOV EAX,dword ptr [EAX + 0x154]
// 004ce60d: SUB ECX,EDX
// 004ce60f: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004ce613: MOV EDX,ECX
// 004ce615: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 004ce619: MOV EAX,ECX
// 004ce61b: SAR EDX,0x1f
// 004ce61e: IDIV EBX
// 004ce620: SHL EDX,0x10
// 004ce623: LEA EBX,[EDX + 0xfffff000]
// 004ce629: MOV EAX,ECX
// 004ce62b: MOV EDX,ECX
// 004ce62d: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 004ce631: SAR EDX,0x1f
// 004ce634: IDIV ECX
// 004ce636: SHL EAX,0x10
// 004ce639: LEA EDX,[EAX + 0xfffff000]
// 004ce63f: LEA EAX,[EBX + ESI*0x1]
// 004ce642: SUB EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 004ce646: LEA ESI,[EDX + EDI*0x1]
// 004ce649: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 004ce64d: MOV ECX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 004ce653: SUB ESI,EDI
// 004ce655: TEST ECX,ECX
// 004ce657: JNZ 0x004ce664
//   XREF to: 004ce664 (CONDITIONAL_JUMP)
// 004ce659: ADD ESI,0x8000
// 004ce65f: ADD EAX,0x8000
// 004ce664: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_004ce664
//   XREF to: Stack[-0x18] (READ)
// 004ce668: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004ce66c: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 004ce670: SHL ECX,0x2
// 004ce673: SUB ECX,EDI
// 004ce675: SHL ECX,0x4
// 004ce678: MOV dword ptr [ECX + 0x68802c],EBX
//   XREF to: 0077256c (WRITE)
// 004ce67e: MOV dword ptr [ECX + 0x688030],EDX
//   XREF to: 00772570 (WRITE)
// 004ce684: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 004ce688: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004ce68c: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 004ce690: SHL ECX,0x2
// 004ce693: SUB ECX,EDI
// 004ce695: SHL ECX,0x4
// 004ce698: MOV dword ptr [ECX + 0x68802c],EAX
//   XREF to: 0077259c (WRITE)
// 004ce69e: MOV dword ptr [ECX + 0x688030],EDX
//   XREF to: 007725a0 (WRITE)
// 004ce6a4: MOV EDX,EBP
// 004ce6a6: LEA ECX,[EBP*0x4 + 0x0]
// 004ce6ad: SUB ECX,EBP
// 004ce6af: PUSH 0xffff
// 004ce6b4: SHL ECX,0x4
// 004ce6b7: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 004ce6bb: MOV dword ptr [ECX + 0x68802c],EAX
//   XREF to: 007725cc (WRITE)
// 004ce6c1: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 004ce6c5: MOV dword ptr [ECX + 0x688030],ESI
//   XREF to: 007725d0 (WRITE)
// 004ce6cb: LEA ECX,[EAX*0x4 + 0x0]
// 004ce6d2: XOR EDX,EBP
// 004ce6d4: SUB ECX,EAX
// 004ce6d6: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004ce6da: SHL ECX,0x4
// 004ce6dd: MOV EAX,0x4
// 004ce6e2: MOV dword ptr [ECX + 0x68802c],EBX
//   XREF to: 007725fc (WRITE)
// 004ce6e8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004ce6ec: MOV dword ptr [ECX + 0x688030],ESI
//   XREF to: 00772600 (WRITE)
// 004ce6f2: XOR ECX,ECX
// 004ce6f4: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 004ce6f8: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 004ce6fc: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004ce700: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 004ce704: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 004ce708: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004ce70c: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 004ce710: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 004ce714: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004ce718: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004ce71d: MOV EDI,dword ptr [0x02d03e84]
//   XREF to: 02d03e84 (READ)
// 004ce723: ADD ESP,0x4
// 004ce726: TEST EDI,EDI
// 004ce728: JZ 0x004ce794
//   XREF to: 004ce794 (CONDITIONAL_JUMP)
// 004ce72a: PUSH 0x0
// 004ce72c: PUSH 0x227
// 004ce731: LEA EAX,[ESP + 0x8]
//   Label: LAB_004ce731
//   XREF to: Stack[-0x54] (DATA)
// 004ce735: PUSH EAX
// 004ce736: CALL engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
//   XREF to: 00407620 (UNCONDITIONAL_CALL)
// 004ce73b: ADD ESP,0xc
// 004ce73e: ADD ESP,0x44
// 004ce741: POP EBP
// 004ce742: POP EDI
// 004ce743: POP ESI
// 004ce744: POP EBX
// 004ce745: RET
// 004ce746: MOV EAX,[0x02d7b418]
//   Label: LAB_004ce746
//   XREF to: 02d7b418 (READ)
// 004ce74b: SHL EAX,0x8
// 004ce74e: MOV [0x00772574],EAX
//   XREF to: 00772574 (WRITE)
// 004ce753: MOV EAX,[0x02d7b41c]
//   XREF to: 02d7b41c (READ)
// 004ce758: SHL EAX,0x8
// 004ce75b: MOV [0x00772578],EAX
//   XREF to: 00772578 (WRITE)
// 004ce760: MOV EAX,[0x02d7b420]
//   XREF to: 02d7b420 (READ)
// 004ce765: JMP 0x004ce38f
//   XREF to: 004ce38f (UNCONDITIONAL_JUMP)
// 004ce76a: MOV EAX,0xffff
//   Label: LAB_004ce76a
// 004ce76f: MOV [0x00772578],EAX
//   XREF to: 00772578 (WRITE)
// 004ce774: MOV [0x0077257c],EAX
//   XREF to: 0077257c (WRITE)
// 004ce779: MOV [0x00772574],EAX
//   XREF to: 00772574 (WRITE)
// 004ce77e: JMP 0x004ce397
//   XREF to: 004ce397 (UNCONDITIONAL_JUMP)
// 004ce783: ADD EDI,0x8000
//   Label: LAB_004ce783
// 004ce789: ADD ESI,0x8000
// 004ce78f: JMP 0x004ce475
//   XREF to: 004ce475 (UNCONDITIONAL_JUMP)
// 004ce794: PUSH EDI
//   Label: LAB_004ce794
// 004ce795: PUSH 0x207
// 004ce79a: JMP 0x004ce731
//   XREF to: 004ce731 (UNCONDITIONAL_JUMP)
