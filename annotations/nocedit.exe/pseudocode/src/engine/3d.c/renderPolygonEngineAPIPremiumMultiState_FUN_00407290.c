// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
// Address: 00407290
// Address Range: [[00407290, 0040746d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407c47 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   uint g_ProcessedVertexOffset
//   int[24] g_ProcessedVertexIndices
//   undefined4 DAT_00772a9c
//   int g_RenderBufferEnabled
//   int g_RenderBufferCount
//   SRenderBufferEntry[256] g_RenderBufferPool
//   undefined4 DAT_00772b04
//   undefined4 DAT_00772b08
//   undefined4 DAT_00772b0c
//   undefined4 DAT_00772b34
//   undefined4 DAT_00772b3c
//   undefined4 DAT_00772bc4
//   undefined4 DAT_00772bc8
//   undefined4 DAT_00772c0c
//   undefined4 DAT_00772c10
//   undefined4 DAT_00772c14
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_BlendMode
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_texture.cpp_getCurrentTexture_FUN_005dd9c0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *polygon_info)

{
  uint uVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SRenderBufferEntry *pSVar4;
  SMRGLTextureBasic *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  undefined4 unaff_EDI;
  SRenderVertex *pSVar10;
  byte bVar11;
  int iVar12;
  
  bVar11 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    piVar6 = g_ProcessedVertexIndices;
    g_RenderStateFlags = RENDER_ENGINE_PREMIUM_QUALITY;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    pSVar3 = polygon_info + 1;
    for (iVar2 = 0; uVar1 = g_ProcessedVertexOffset, iVar12 = (polygon_info->base).count,
        SBORROW4(iVar2,iVar12 * 3) != iVar2 + iVar12 * -3 < 0; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar3->base).type + uVar1].u = (float)(pSVar3->base).count;
      piVar6 = piVar6 + 1;
      g_RenderVertexBuffer[(pSVar3->base).type + uVar1].v = (float)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (iVar2 = (polygon_info->base).count, 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0
                ((polygon_info->base).count,g_ProcessedVertexIndices);
    }
    else {
      iVar8 = 0;
      iVar12 = 0x7fffffff;
      pSVar4 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar4->vertex_count = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          pSVar9 = g_RenderVertexBuffer + *(int *)((int)g_ProcessedVertexIndices + iVar2);
          pSVar10 = pSVar4->vertices;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            (pSVar10->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
          }
          iVar7 = pSVar4->vertices[0].projected_vertex.transformed_z;
          if (iVar7 < iVar12) {
            iVar12 = iVar7;
          }
          pSVar4 = (SRenderBufferEntry *)&pSVar4->vertices[0].w_recip;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < (polygon_info->base).count);
      }
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar2 = g_CurrentAlphaValue;
      piVar6 = (int *)(iVar12 + 0xc4);
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(int *)(iVar12 + 0x10c) = iVar2;
      *(int *)(iVar12 + 0x110) = g_BlendMode;
      *(undefined4 *)(iVar12 + 0x114) = unaff_EDI;
    }
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}


// Assembly code:
// 00407290: PUSH EBX
//   Label: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
// 00407291: PUSH ESI
// 00407292: PUSH EDI
// 00407293: PUSH EBP
// 00407294: SUB ESP,0x8
// 00407297: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040729b: LEA ESI,[EBP + 0x18]
// 0040729e: LEA EAX,[EBP + 0x8]
// 004072a1: PUSH EAX
// 004072a2: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004072a7: ADD ESP,0x4
// 004072aa: TEST EAX,EAX
// 004072ac: JZ 0x0040743f
//   XREF to: 0040743f (CONDITIONAL_JUMP)
// 004072b2: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004072b9: JNZ 0x00407342
//   XREF to: 00407342 (CONDITIONAL_JUMP)
// 004072bf: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004072c6: JNZ 0x00407336
//   XREF to: 00407336 (CONDITIONAL_JUMP)
// 004072c8: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004072d2: MOV EBX,0x1e7
//   Label: LAB_004072d2
// 004072d7: MOV EDI,0x1
// 004072dc: MOV ECX,0x772a98
//   XREF to: 00772a98 (PARAM)
// 004072e1: MOV EAX,ESI
// 004072e3: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 004072e9: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 004072ef: XOR EBX,EBX
// 004072f1: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_004072f1
// 004072f4: LEA EDX,[EDX + EDX*0x2]
// 004072f7: CMP EBX,EDX
// 004072f9: JGE 0x00407369
//   XREF to: 00407369 (CONDITIONAL_JUMP)
// 004072fb: MOV ESI,dword ptr [0x00772a60]
//   XREF to: 00772a60 (READ)
// 00407301: MOV EDX,dword ptr [EAX]
// 00407303: ADD EDX,ESI
// 00407305: MOV dword ptr [ECX],EDX
//   XREF to: 00772a98 (WRITE)
//   XREF to: 00772a9c (WRITE)
// 00407307: MOV EDX,dword ptr [EAX]
// 00407309: ADD EDX,ESI
// 0040730b: MOV EDI,ESI
// 0040730d: IMUL ESI,EDX,0x30
// 00407310: MOV EDX,dword ptr [EAX + 0x4]
// 00407313: MOV dword ptr [ESI + 0x68802c],EDX
//   XREF to: 0068802c (DATA)
// 00407319: MOV ESI,EDI
// 0040731b: MOV EDX,dword ptr [EAX]
// 0040731d: ADD EDX,ESI
// 0040731f: IMUL ESI,EDX,0x30
// 00407322: ADD EAX,0xc
// 00407325: ADD ECX,0x4
//   XREF to: 00772a9c (PARAM)
// 00407328: MOV EDX,dword ptr [EAX + -0x4]
// 0040732b: ADD EBX,0x3
// 0040732e: MOV dword ptr [ESI + 0x688030],EDX
//   XREF to: 00688030 (DATA)
// 00407334: JMP 0x004072f1
//   XREF to: 004072f1 (UNCONDITIONAL_JUMP)
// 00407336: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00407336
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00407340: JMP 0x004072d2
//   XREF to: 004072d2 (UNCONDITIONAL_JUMP)
// 00407342: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00407342
//   XREF to: 0067939c (READ)
// 00407349: JNZ 0x0040735a
//   XREF to: 0040735a (CONDITIONAL_JUMP)
// 0040734b: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00407355: JMP 0x004072d2
//   XREF to: 004072d2 (UNCONDITIONAL_JUMP)
// 0040735a: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040735a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00407364: JMP 0x004072d2
//   XREF to: 004072d2 (UNCONDITIONAL_JUMP)
// 00407369: CMP dword ptr [0x00772af8],0x0
//   Label: LAB_00407369
//   XREF to: 00772af8 (READ)
// 00407370: JZ 0x0040745b
//   XREF to: 0040745b (CONDITIONAL_JUMP)
// 00407376: MOV EDX,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 0040737c: CMP EDX,0x9c4
// 00407382: JGE 0x0040745b
//   XREF to: 0040745b (CONDITIONAL_JUMP)
// 00407388: MOV ECX,dword ptr [EBP + 0x4]
// 0040738b: CMP ECX,0x4
// 0040738e: JG 0x0040745b
//   XREF to: 0040745b (CONDITIONAL_JUMP)
// 00407394: MOV ESI,0x7fffffff
// 00407399: LEA EAX,[EDX*0x8 + 0x0]
// 004073a0: MOV EDI,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 004073a6: ADD EAX,EDX
// 004073a8: XOR EBX,EBX
// 004073aa: SHL EAX,0x2
// 004073ad: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004073b1: SUB EAX,EDX
// 004073b3: MOV EDX,0x772b00
//   XREF to: 00772b00 (DATA)
// 004073b8: SHL EAX,0x3
// 004073bb: INC EDI
// 004073bc: ADD EDX,EAX
// 004073be: MOV dword ptr [0x00772afc],EDI
//   XREF to: 00772afc (WRITE)
// 004073c4: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 004073c7: MOV dword ptr [EDX],ECX
//   XREF to: 00772b00 (DATA)
// 004073c9: TEST ECX,ECX
// 004073cb: JLE 0x00407405
//   XREF to: 00407405 (CONDITIONAL_JUMP)
// 004073cd: MOV EAX,EDX
// 004073cf: XOR EDX,EDX
// 004073d1: IMUL ESI,dword ptr [EDX + 0x772a98],0x30
//   Label: LAB_004073d1
//   XREF to: 00772a98 (READ)
//   XREF to: 00772a9c (READ)
// 004073d8: LEA EDI,[EAX + 0x4]
// 004073db: MOV ECX,0xc
// 004073e0: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 004073e6: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
//   XREF to: 00772b04 (DATA)
//   XREF to: 00772b08 (DATA)
//   XREF to: 00772b34 (DATA)
// 004073e8: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004073ec: MOV ECX,dword ptr [EAX + 0xc]
//   XREF to: 00772b0c (DATA)
//   XREF to: 00772b3c (DATA)
// 004073ef: CMP ECX,ESI
// 004073f1: JGE 0x004073f7
//   XREF to: 004073f7 (CONDITIONAL_JUMP)
// 004073f3: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004073f7: ADD EAX,0x30
//   Label: LAB_004073f7
// 004073fa: INC EBX
// 004073fb: MOV EDI,dword ptr [EBP + 0x4]
// 004073fe: ADD EDX,0x4
// 00407401: CMP EBX,EDI
// 00407403: JL 0x004073d1
//   XREF to: 004073d1 (CONDITIONAL_JUMP)
// 00407405: CALL engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
//   Label: LAB_00407405
//   XREF to: 005dd9c0 (UNCONDITIONAL_CALL)
// 0040740a: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040740d: MOV ECX,0x12
// 00407412: MOV ESI,EAX
// 00407414: LEA EDI,[EDI + 0xc4]
// 0040741a: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040741d: MOV EAX,[0x006793b4]
//   XREF to: 006793b4 (READ)
// 00407422: MOVSD.REP ES:EDI,ESI
//   XREF to: 00772bc4 (DATA)
//   XREF to: 00772bc8 (DATA)
// 00407424: MOV dword ptr [EDX + 0x10c],EAX
//   XREF to: 00772c0c (DATA)
// 0040742a: MOV EAX,[0x02d05298]
//   XREF to: 02d05298 (READ)
// 0040742f: MOV dword ptr [EDX + 0x110],EAX
//   XREF to: 00772c10 (DATA)
// 00407435: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00407439: MOV dword ptr [EDX + 0x114],EAX
//   XREF to: 00772c14 (DATA)
// 0040743f: MOV EDX,dword ptr [EBP + 0x4]
//   Label: LAB_0040743f
// 00407442: LEA EAX,[EDX*0x4 + 0x0]
// 00407449: SUB EAX,EDX
// 0040744b: ADD EBP,0x18
// 0040744e: SHL EAX,0x2
// 00407451: ADD EAX,EBP
// 00407453: ADD ESP,0x8
// 00407456: POP EBP
// 00407457: POP EDI
// 00407458: POP ESI
// 00407459: POP EBX
// 0040745a: RET
// 0040745b: PUSH 0x772a98
//   Label: LAB_0040745b
//   XREF to: 00772a98 (DATA)
// 00407460: MOV EBX,dword ptr [EBP + 0x4]
// 00407463: PUSH EBX
// 00407464: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00407469: ADD ESP,0x8
// 0040746c: JMP 0x0040743f
//   XREF to: 0040743f (UNCONDITIONAL_JUMP)
