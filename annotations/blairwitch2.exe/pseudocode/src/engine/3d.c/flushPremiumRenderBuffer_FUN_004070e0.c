// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_004070e0
// Address: 004070e0
// Address Range: [[004070e0, 004072a0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderBufferEntry *pSVar4;
  SRenderBufferEntry *pSVar5;
  int *unaff_EBP;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (g_INT_0070caf8 != 0) {
    if (0 < g_INT_0070cafc) {
      pSVar4 = g_SRenderBufferEntry_ARRAY_0070cb00;
      iVar2 = g_INT_0070cafc * 4;
      iVar1 = 0;
      do {
        *(SRenderBufferEntry **)((int)g_SRenderBufferEntry_PTR_ARRAY_007b7960 + iVar1) = pSVar4;
        iVar1 = iVar1 + 4;
        pSVar4 = pSVar4 + 1;
      } while (iVar1 < iVar2);
    }
    _qsort
              (g_SRenderBufferEntry_PTR_ARRAY_007b7960,g_INT_0070cafc,4,
               (QSORT_COMPARATOR)&UNK_004070a0);
    if (g_INT_01c38b40 == 0) {
      if (g_INT_006141c0 == 0x20) {
        g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (g_INT_006141c0 == 0x20) {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_INT_01c38b58 = 1;
    g_BIT_INTEGER32_01c38b54.dword = 0x1e7;
    if (0 < g_INT_0070cafc) {
      do {
        pSVar4 = g_SRenderBufferEntry_PTR_ARRAY_007b7960[0];
        iVar2 = 0;
        if (0 < g_SRenderBufferEntry_PTR_ARRAY_007b7960[0]->vertex_count) {
          pSVar5 = g_SRenderBufferEntry_PTR_ARRAY_007b7960[0];
          iVar1 = 0;
          do {
            pSVar6 = pSVar5->vertices;
            pSVar7 = g_SRenderVertex_ARRAY_00622014 + iVar2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
              pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
            }
            *(ushort *)&g_SRenderVertex_ARRAY_00622014[iVar2].a =
                 (ushort)g_SRenderVertex_ARRAY_00622014[iVar2].a ^ 0xffff;
            *(int *)((int)g_INT_ARRAY_0070ca98 + iVar1) = iVar2;
            iVar2 = iVar2 + 1;
            pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;
            iVar1 = iVar1 + 4;
          } while (iVar2 < pSVar4->vertex_count);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_00574e80
                  ((SMRGLTextureBasic *)&pSVar4->texture_data);
        g_INT_01c38b4c = unaff_EBP[0x44];
        g_INT_006141d8 = unaff_EBP[0x43];
        engine_clipper_c_clipAndRasterize_FUN_00431d90(*unaff_EBP,g_INT_ARRAY_0070ca98);
      } while ((int)((int)&pSVar4->vertex_count + 1) < g_INT_0070cafc);
    }
    g_INT_0070cafc = 0;
    g_INT_0070caf8 = 0;
    engine_3d_c_setBlendMode_FUN_00406df0(0);
  }
  return;
}
