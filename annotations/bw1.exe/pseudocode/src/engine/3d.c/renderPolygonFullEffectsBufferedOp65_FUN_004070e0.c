// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0
// Address: 004070e0
// Address Range: [[004070e0, 004072bd]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  SMRGLTextureBasic *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int iStack_14;
  
  bVar11 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar2 != 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
      }
      else {
        _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
      }
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    piVar6 = &DAT_00713a98;
    _DAT_01c51d14 = 0x1e7;
    _DAT_01c51d18 = 1;
    pSVar3 = prim + 1;
    for (iVar2 = 0; iVar4 = DAT_00713a60, iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + DAT_00713a60;
      (&DAT_0062902c)[((pSVar3->base).type + iVar4) * 0xc] = (pSVar3->base).count;
      piVar6 = piVar6 + 1;
      *(UIntegerFloat *)(&DAT_00629030 + ((pSVar3->base).type + iVar4) * 0x30) =
           (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((DAT_00713af8 == 0) || (0x9c3 < DAT_00713afc)) || (iVar2 = (prim->base).count, 4 < iVar2))
    {
      engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,&DAT_00713a98);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar4 = DAT_00713afc * 0x118;
      DAT_00713afc = DAT_00713afc + 1;
      piVar6 = (int *)(&DAT_00713b00 + iVar4);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar9 = &DAT_00629014 + *(int *)((int)&DAT_00713a98 + iVar2) * 0xc;
          piVar10 = piVar6 + 1;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          if (piVar6[3] < iStack_14) {
            iStack_14 = piVar6[3];
          }
          piVar6 = piVar6 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < (prim->base).count);
      }
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_00597d00();
      uVar1 = DAT_0061b4b8;
      piVar6 = (int *)(&DAT_00713bc4 + iVar4);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_00713c0c + iVar4) = uVar1;
      *(uint *)(&DAT_00713c10 + iVar4) = _DAT_01c51d0c;
      *(int *)(&DAT_00713c14 + iVar4) = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
