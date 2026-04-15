// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_004070c0
// Address: 004070c0
// Address Range: [[004070c0, 00407280] [03fc38df, 03fc393f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070c0(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070c0(void)

{
  int iVar2;
  int iVar3;
  int iVar4;
  SRenderBufferEntry *pSVar5;
  int *piVar6;
  int iVar1;
  int *piVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  int local_10;
  int local_c;
  int *piVar1;
  
  if (g_RenderBufferEnabled != 0) {
    if (0 < g_RenderBufferCount) {
      pSVar5 = g_RenderBufferPool;
      iVar1 = g_RenderBufferCount * 4;
      iVar2 = 0;
      do {
        *(SRenderBufferEntry **)((int)g_RenderBufferSortArray + iVar2) = pSVar5;
        iVar2 = iVar2 + 4;
        pSVar5 = pSVar5 + 1;
      } while (iVar2 < iVar1);
    }
    _qsort
              (g_RenderBufferSortArray,g_RenderBufferCount,4,
               engine_3d_c_qsortByRenderDepth_FUN_00407080);
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
    local_c = 0;
    g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FORCE_SOLID_LOOP | RENDER_FOG_COLOR | RENDER_BLEND_READ_DEST | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE | RENDER_ALPHA_FROM_VERTEX);
    if (0 < g_RenderBufferCount) {
      local_10 = 0;
      do {
        piVar1 = *(int **)((int)g_RenderBufferSortArray + local_10);
        iVar3 = 0;
        if (0 < *piVar1) {
          piVar6 = piVar1;
          iVar1 = 0;
          do {
            g_RenderVertexBuffer[iVar3].projected_vertex.transformed_x = piVar6[1];
            g_RenderVertexBuffer[iVar3].projected_vertex.transformed_y = piVar6[2];
            g_RenderVertexBuffer[iVar3].projected_vertex.transformed_z = piVar6[3];
            g_RenderVertexBuffer[iVar3].projected_vertex.inv_z = piVar6[4];
            g_RenderVertexBuffer[iVar3].projected_vertex.screen_x = piVar6[5];
            g_RenderVertexBuffer[iVar3].projected_vertex.screen_y = piVar6[6];
            g_RenderVertexBuffer[iVar3].u = piVar6[7];
            g_RenderVertexBuffer[iVar3].v = piVar6[8];
            g_RenderVertexBuffer[iVar3].r = piVar6[9];
            g_RenderVertexBuffer[iVar3].g = piVar6[10];
            g_RenderVertexBuffer[iVar3].b = piVar6[0xb];
            g_RenderVertexBuffer[iVar3].a = piVar6[0xc];
            *(ushort *)&g_RenderVertexBuffer[iVar3].a =
                 (ushort)g_RenderVertexBuffer[iVar3].a ^ 0xffff;
            *(int *)((int)g_ProcessedVertexIndices + iVar1) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar1 = iVar1 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0((SMRGLTextureBasic *)(piVar1 + 0x31));
        g_BlendMode = piVar1[0x44];
        g_CurrentAlphaValue = piVar1[0x43];
        engine_clipper_c_clipAndRasterize_FUN_004371b0(*piVar1,g_ProcessedVertexIndices);
        local_10 = local_10 + 4;
        local_c = local_c + 1;
      } while (local_c < g_RenderBufferCount);
    }
    g_RenderBufferCount = 0;
    g_RenderBufferEnabled = 0;
    engine_3d_c_setBlendMode_FUN_00406dd0(0);
  }
  return;
}
