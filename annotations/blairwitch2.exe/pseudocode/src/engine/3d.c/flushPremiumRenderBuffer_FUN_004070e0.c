// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_004070e0
// Address: 004070e0
// Address Range: [[004070e0, 004072a0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_004070e0(void)

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
  if (g_INT_0070caf8 != 0) {
    if (0 < g_INT_0070cafc) {
      puVar5 = &DAT_0070cb00;
      iVar3 = g_INT_0070cafc * 4;
      iVar2 = 0;
      do {
        *(byte **)(iVar2 + 0x7b7960) = puVar5;
        iVar2 = iVar2 + 4;
        puVar5 = puVar5 + 0x118;
      } while (iVar2 < iVar3);
    }
    _qsort
              ((void *)0x7b7960,g_INT_0070cafc,4,(QSORT_COMPARATOR)&UNK_004070a0);
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
        piVar1 = piRam007b7960;
        iVar3 = 0;
        if (0 < *piRam007b7960) {
          piVar6 = piRam007b7960;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            pSVar8 = g_SRenderVertex_ARRAY_00622014 + iVar3;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            *(ushort *)&g_SRenderVertex_ARRAY_00622014[iVar3].a =
                 (ushort)g_SRenderVertex_ARRAY_00622014[iVar3].a ^ 0xffff;
            *(int *)((int)g_INT_ARRAY_0070ca98 + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_00574e80((SMRGLTextureBasic *)(piVar1 + 0x31));
        g_INT_01c38b4c = unaff_EBP[0x44];
        g_INT_006141d8 = unaff_EBP[0x43];
        engine_clipper_c_clipAndRasterize_FUN_00431d90(*unaff_EBP,g_INT_ARRAY_0070ca98);
      } while ((int)piVar1 + 1 < g_INT_0070cafc);
    }
    g_INT_0070cafc = 0;
    g_INT_0070caf8 = 0;
    engine_3d_c_setBlendMode_FUN_00406df0(0);
  }
  return;
}
