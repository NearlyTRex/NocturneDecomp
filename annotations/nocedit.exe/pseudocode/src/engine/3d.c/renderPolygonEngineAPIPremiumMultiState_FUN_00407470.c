// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407618]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive * primitive)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   int g_RenderBufferEnabled
//   int g_RenderBufferCount
//   SRenderBufferEntry[256] g_RenderBufferPool
//   undefined4 DAT_00772b04
//   undefined4 DAT_00772b08
//   undefined4 DAT_00772b0c
//   undefined4 DAT_00772b34
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
engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SRenderBufferEntry *pSVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int iVar5;
  SMRGLHeaderPrimitive *vertex_indices;
  SRenderVertex *pSVar6;
  int unaff_EDI;
  SRenderVertex *pSVar7;
  int *piVar8;
  byte bVar9;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  bVar9 = 0;
  vertex_indices = primitive + 1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar1 != 0) {
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
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    g_RenderStateFlags = RENDER_ENGINE_PREMIUM_QUALITY;
    if (((g_RenderBufferEnabled == 0) || (0x9c3 < g_RenderBufferCount)) ||
       (4 < *(int *)(in_stack_00000008 + 4))) {
      engine_clipper_c_clipAndRasterize_FUN_004371b0
                (*(int *)(in_stack_00000008 + 4),(int *)vertex_indices);
    }
    else {
      pSVar2 = g_RenderBufferPool + g_RenderBufferCount;
      g_RenderBufferCount = g_RenderBufferCount + 1;
      pSVar2->vertex_count = *(int *)(in_stack_00000008 + 4);
      iVar1 = 0x7fffffff;
      iVar5 = 0;
      if (0 < *(int *)(in_stack_00000008 + 4)) {
        do {
          pSVar6 = g_RenderVertexBuffer + (vertex_indices->base).type;
          pSVar7 = pSVar2->vertices;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar9 * -2 + 1) * 4);
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
          }
          iVar4 = pSVar2->vertices[0].projected_vertex.transformed_z;
          if (iVar4 < iVar1) {
            iVar1 = iVar4;
          }
          pSVar2 = (SRenderBufferEntry *)&pSVar2->vertices[0].w_recip;
          iVar5 = iVar5 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar5 < *(int *)(in_stack_00000008 + 4));
      }
      pSVar3 = engine_texture_cpp_getCurrentTexture_FUN_005dd9c0();
      iVar5 = g_CurrentAlphaValue;
      piVar8 = (int *)(unaff_EDI + 0xc4);
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = (pSVar3->base).type;
        pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar9 * -8 + 4);
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
      *(int *)(unaff_EDI + 0x10c) = iVar5;
      *(int *)(unaff_EDI + 0x114) = iVar1;
      *(int *)(unaff_EDI + 0x110) = g_BlendMode;
    }
  }
  return (SMRGLHeaderExtended *)(in_stack_0000000c + 0x18 + *(int *)(in_stack_0000000c + 4) * 0xc);
}


// Assembly code:
// 00407470: PUSH EBX
//   Label: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
// 00407471: PUSH ESI
// 00407472: PUSH EDI
// 00407473: PUSH EBP
// 00407474: SUB ESP,0x4
// 00407477: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040747b: ADD EAX,0x8
// 0040747e: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00407482: PUSH EAX
// 00407483: ADD EBX,0x18
// 00407486: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0040748b: ADD ESP,0x4
// 0040748e: TEST EAX,EAX
// 00407490: JZ 0x004075a8
//   XREF to: 004075a8 (CONDITIONAL_JUMP)
// 00407496: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 0040749d: JNZ 0x004075df
//   XREF to: 004075df (CONDITIONAL_JUMP)
// 004074a3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004074aa: JNZ 0x004075d0
//   XREF to: 004075d0 (CONDITIONAL_JUMP)
// 004074b0: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004074ba: MOV ESI,0x1
//   Label: LAB_004074ba
// 004074bf: MOV ECX,0x1e7
// 004074c4: MOV EDI,dword ptr [0x00772af8]
//   XREF to: 00772af8 (READ)
// 004074ca: MOV dword ptr [0x02d052a4],ESI
//   XREF to: 02d052a4 (WRITE)
// 004074d0: MOV dword ptr [0x02d052a0],ECX
//   XREF to: 02d052a0 (WRITE)
// 004074d6: TEST EDI,EDI
// 004074d8: JZ 0x00407606
//   XREF to: 00407606 (CONDITIONAL_JUMP)
// 004074de: MOV EBP,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 004074e4: CMP EBP,0x9c4
// 004074ea: JGE 0x00407606
//   XREF to: 00407606 (CONDITIONAL_JUMP)
// 004074f0: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004074f4: CMP dword ptr [EAX + 0x4],0x4
// 004074f8: JG 0x00407606
//   XREF to: 00407606 (CONDITIONAL_JUMP)
// 004074fe: LEA EAX,[EBP*0x8 + 0x0]
// 00407505: ADD EAX,EBP
// 00407507: SHL EAX,0x2
// 0040750a: SUB EAX,EBP
// 0040750c: MOV EDX,0x772b00
//   XREF to: 00772b00 (DATA)
// 00407511: SHL EAX,0x3
// 00407514: MOV ESI,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 0040751a: ADD EDX,EAX
// 0040751c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00407520: INC ESI
// 00407521: MOV EAX,dword ptr [EAX + 0x4]
// 00407524: MOV dword ptr [0x00772afc],ESI
//   XREF to: 00772afc (WRITE)
// 0040752a: MOV dword ptr [EDX],EAX
//   XREF to: 00772b00 (DATA)
// 0040752c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00407530: MOV EBP,0x7fffffff
// 00407535: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00407538: MOV EDI,dword ptr [EAX + 0x4]
// 0040753b: XOR EDX,EDX
// 0040753d: TEST EDI,EDI
// 0040753f: JLE 0x00407572
//   XREF to: 00407572 (CONDITIONAL_JUMP)
// 00407541: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00407544: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_00407544
// 00407547: MOV ECX,0xc
// 0040754c: LEA EDI,[EAX + 0x4]
// 0040754f: LEA ESI,[ESI + 0x688014]
//   XREF to: 00688014 (DATA)
// 00407555: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
//   XREF to: 00772b04 (DATA)
//   XREF to: 00772b08 (DATA)
//   XREF to: 00772b34 (DATA)
// 00407557: MOV ECX,dword ptr [EAX + 0xc]
//   XREF to: 00772b0c (DATA)
// 0040755a: CMP EBP,ECX
// 0040755c: JLE 0x00407560
//   XREF to: 00407560 (CONDITIONAL_JUMP)
// 0040755e: MOV EBP,ECX
// 00407560: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_00407560
//   XREF to: Stack[0x4] (READ)
// 00407564: ADD EAX,0x30
// 00407567: INC EDX
// 00407568: MOV ECX,dword ptr [ESI + 0x4]
// 0040756b: ADD EBX,0x4
// 0040756e: CMP EDX,ECX
// 00407570: JL 0x00407544
//   XREF to: 00407544 (CONDITIONAL_JUMP)
// 00407572: CALL engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
//   Label: LAB_00407572
//   XREF to: 005dd9c0 (UNCONDITIONAL_CALL)
// 00407577: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0040757a: MOV ECX,0x12
// 0040757f: MOV ESI,EAX
// 00407581: LEA EDI,[EDI + 0xc4]
// 00407587: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0040758a: MOV EAX,[0x006793b4]
//   XREF to: 006793b4 (READ)
// 0040758f: MOVSD.REP ES:EDI,ESI
//   XREF to: 00772bc4 (DATA)
//   XREF to: 00772bc8 (DATA)
// 00407591: MOV dword ptr [EDX + 0x10c],EAX
//   XREF to: 00772c0c (DATA)
// 00407597: MOV dword ptr [EDX + 0x114],EBP
//   XREF to: 00772c14 (DATA)
// 0040759d: MOV EAX,[0x02d05298]
//   XREF to: 02d05298 (READ)
// 004075a2: MOV dword ptr [EDX + 0x110],EAX
//   XREF to: 00772c10 (DATA)
// 004075a8: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_004075a8
//   XREF to: Stack[0x4] (READ)
// 004075ac: MOV EDX,dword ptr [EDX + 0x4]
// 004075af: LEA EAX,[EDX*0x4 + 0x0]
// 004075b6: SUB EAX,EDX
// 004075b8: LEA EDX,[EAX*0x4 + 0x0]
// 004075bf: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004075c3: ADD EAX,0x18
// 004075c6: ADD EAX,EDX
// 004075c8: ADD ESP,0x4
// 004075cb: POP EBP
// 004075cc: POP EDI
// 004075cd: POP ESI
// 004075ce: POP EBX
// 004075cf: RET
// 004075d0: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004075d0
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004075da: JMP 0x004074ba
//   XREF to: 004074ba (UNCONDITIONAL_JUMP)
// 004075df: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004075df
//   XREF to: 0067939c (READ)
// 004075e6: JNZ 0x004075f7
//   XREF to: 004075f7 (CONDITIONAL_JUMP)
// 004075e8: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004075f2: JMP 0x004074ba
//   XREF to: 004074ba (UNCONDITIONAL_JUMP)
// 004075f7: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004075f7
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00407601: JMP 0x004074ba
//   XREF to: 004074ba (UNCONDITIONAL_JUMP)
// 00407606: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00407606
//   XREF to: Stack[0x4] (READ)
// 0040760a: PUSH EBX
// 0040760b: MOV ECX,dword ptr [EAX + 0x4]
// 0040760e: PUSH ECX
// 0040760f: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00407614: ADD ESP,0x8
// 00407617: JMP 0x004075a8
//   XREF to: 004075a8 (UNCONDITIONAL_JUMP)
