// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30
// Address: 00406f30
// Address Range: [[00406f30, 004070f0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)

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
  if (g_INT_00730478 != 0) {
    if (0 < g_INT_0073047c) {
      pSVar4 = g_SRenderBufferEntry_ARRAY_00730480;
      iVar2 = g_INT_0073047c * 4;
      iVar1 = 0;
      do {
        *(SRenderBufferEntry **)((int)g_SRenderBufferEntry_PTR_ARRAY_007db2e0 + iVar1) = pSVar4;
        iVar1 = iVar1 + 4;
        pSVar4 = pSVar4 + 1;
      } while (iVar1 < iVar2);
    }
    _qsort
              (g_SRenderBufferEntry_PTR_ARRAY_007db2e0,g_INT_0073047c,4,
               (QSORT_COMPARATOR)&UNK_00406ef0);
    if (g_INT_01c6e2a0 == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_PTR_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        g_PTR_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (g_INT_005fba20 == 0x20) {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    g_INT_01c6e2b8 = 1;
    g_BIT_INTEGER32_01c6e2b4.dword = 0x1e7;
    if (0 < g_INT_0073047c) {
      do {
        pSVar4 = g_SRenderBufferEntry_PTR_ARRAY_007db2e0[0];
        iVar2 = 0;
        if (0 < g_SRenderBufferEntry_PTR_ARRAY_007db2e0[0]->vertex_count) {
          pSVar5 = g_SRenderBufferEntry_PTR_ARRAY_007db2e0[0];
          iVar1 = 0;
          do {
            pSVar6 = pSVar5->vertices;
            pSVar7 = g_SRenderVertex_ARRAY_0060b014 + iVar2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
              pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
            }
            *(ushort *)&g_SRenderVertex_ARRAY_0060b014[iVar2].a =
                 (ushort)g_SRenderVertex_ARRAY_0060b014[iVar2].a ^ 0xffff;
            *(int *)((int)g_INT_ARRAY_00730418 + iVar1) = iVar2;
            iVar2 = iVar2 + 1;
            pSVar5 = (SRenderBufferEntry *)&pSVar5->vertices[0].a;
            iVar1 = iVar1 + 4;
          } while (iVar2 < pSVar4->vertex_count);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_0056aa90
                  ((SMRGLTextureBasic *)&pSVar4->texture_data);
        g_INT_01c6e2ac = unaff_EBP[0x44];
        g_INT_005fba38 = unaff_EBP[0x43];
        engine_clipper_c_clipAndRasterize_FUN_0043a840(*unaff_EBP,g_INT_ARRAY_00730418);
      } while ((int)((int)&pSVar4->vertex_count + 1) < g_INT_0073047c);
    }
    g_INT_0073047c = 0;
    g_INT_00730478 = 0;
    engine_3d_c_setBlendMode_FUN_00406c40(0);
  }
  return;
}
