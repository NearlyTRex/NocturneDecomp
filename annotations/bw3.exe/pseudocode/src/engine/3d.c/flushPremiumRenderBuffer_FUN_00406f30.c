// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30
// Address: 00406f30
// Address Range: [[00406f30, 004070f0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  int *piVar6;
  int *unaff_EBP;
  int *piVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (g_INT_00730478 != 0) {
    if (0 < g_INT_0073047c) {
      puVar5 = &DAT_00730480;
      iVar3 = g_INT_0073047c * 4;
      iVar2 = 0;
      do {
        *(byte **)(iVar2 + 0x7db2e0) = puVar5;
        iVar2 = iVar2 + 4;
        puVar5 = puVar5 + 0x118;
      } while (iVar2 < iVar3);
    }
    _qsort
              ((void *)0x7db2e0,g_INT_0073047c,4,(QSORT_COMPARATOR)&UNK_00406ef0);
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
        piVar1 = piRam007db2e0;
        iVar3 = 0;
        if (0 < *piRam007db2e0) {
          piVar6 = piRam007db2e0;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            pSVar8 = g_SRenderVertex_ARRAY_0060b014 + iVar3;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            *(ushort *)&g_SRenderVertex_ARRAY_0060b014[iVar3].a =
                 (ushort)g_SRenderVertex_ARRAY_0060b014[iVar3].a ^ 0xffff;
            *(int *)((int)g_INT_ARRAY_00730418 + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_0056aa90((SMRGLTextureBasic *)(piVar1 + 0x31));
        g_INT_01c6e2ac = unaff_EBP[0x44];
        g_INT_005fba38 = unaff_EBP[0x43];
        engine_clipper_c_clipAndRasterize_FUN_0043a840(*unaff_EBP,g_INT_ARRAY_00730418);
      } while ((int)piVar1 + 1 < g_INT_0073047c);
    }
    g_INT_0073047c = 0;
    g_INT_00730478 = 0;
    engine_3d_c_setBlendMode_FUN_00406c40(0);
  }
  return;
}
