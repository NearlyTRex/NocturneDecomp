// Name: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10
// Address: 00406f10
// Address Range: [[00406f10, 004070d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f10(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f10(void)

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
  if (g_INT_00713af8 != 0) {
    if (0 < g_INT_00713afc) {
      puVar5 = &DAT_00713b00;
      iVar3 = g_INT_00713afc * 4;
      iVar2 = 0;
      do {
        *(byte **)(iVar2 + 0x7be960) = puVar5;
        iVar2 = iVar2 + 4;
        puVar5 = puVar5 + 0x118;
      } while (iVar2 < iVar3);
    }
    _qsort
              ((void *)0x7be960,g_INT_00713afc,4,(QSORT_COMPARATOR)&UNK_00406ed0);
    if (g_INT_01c51d00 == 0) {
      if (g_INT_0061b4a0 == 0x20) {
        g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
      }
      else {
        g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
      }
    }
    else if (g_INT_0061b4a0 == 0x20) {
      g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
    }
    else {
      g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    g_INT_01c51d18 = 1;
    g_BIT_INTEGER32_01c51d14.dword = 0x1e7;
    if (0 < g_INT_00713afc) {
      do {
        piVar1 = piRam007be960;
        iVar3 = 0;
        if (0 < *piRam007be960) {
          piVar6 = piRam007be960;
          iVar2 = 0;
          do {
            piVar7 = piVar6 + 1;
            pSVar8 = g_SRenderVertex_ARRAY_00629014 + iVar3;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            *(ushort *)&g_SRenderVertex_ARRAY_00629014[iVar3].a =
                 (ushort)g_SRenderVertex_ARRAY_00629014[iVar3].a ^ 0xffff;
            *(int *)((int)g_INT_ARRAY_00713a98 + iVar2) = iVar3;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 0xc;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_00597aa0((SMRGLTextureBasic *)(piVar1 + 0x31));
        g_INT_01c51d0c = unaff_EBP[0x44];
        g_INT_0061b4b8 = unaff_EBP[0x43];
        engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*unaff_EBP,g_INT_ARRAY_00713a98);
      } while ((int)piVar1 + 1 < g_INT_00713afc);
    }
    g_INT_00713afc = 0;
    g_INT_00713af8 = 0;
    engine_3d_c_setBlendMode_FUN_00406c20(0);
  }
  return;
}
