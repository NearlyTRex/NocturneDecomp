// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0
// Address: 004070c0
// Address Range: [[004070c0, 00407280]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0(SMRGLHeaderPrimitive *prim)

{
  int *piVar1;
  SMRGLHeaderExtended *in_EAX;
  int iVar2;
  int iVar3;
  SMRGLHeaderExtended *extraout_EAX;
  int iVar4;
  SRenderBufferEntry *pSVar5;
  int *piVar6;
  int *piVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  int local_10;
  int local_c;
  
  bVar9 = 0;
  if (g_RenderBufferEnabled != 0) {
    if (0 < g_RenderBufferCount) {
      pSVar5 = g_RenderBufferPool;
      iVar3 = g_RenderBufferCount * 4;
      iVar2 = 0;
      do {
        *(SRenderBufferEntry **)((int)g_RenderBufferSortArray + iVar2) = pSVar5;
        iVar2 = iVar2 + 4;
        pSVar5 = pSVar5 + 1;
      } while (iVar2 < iVar3);
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
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    local_c = 0;
    g_RenderStateFlags.dword = RENDER_ENGINE_PREMIUM_QUALITY;
    if (0 < g_RenderBufferCount) {
      local_10 = 0;
      do {
        piVar1 = *(int **)((int)g_RenderBufferSortArray + local_10);
        iVar3 = 0;
        if (0 < *piVar1) {
          piVar6 = piVar1;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            pSVar8 = g_RenderVertexBuffer + iVar3;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            *(ushort *)&g_RenderVertexBuffer[iVar3].fog =
                 (ushort)g_RenderVertexBuffer[iVar3].fog ^ 0xffff;
            *(int *)((int)g_ProcessedVertexIndices + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
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
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}
