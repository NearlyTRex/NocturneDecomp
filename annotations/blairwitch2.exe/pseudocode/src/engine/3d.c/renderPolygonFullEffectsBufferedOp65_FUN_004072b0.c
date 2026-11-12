// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0
// Address: 004072b0
// Address Range: [[004072b0, 0040748d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)

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
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar2 != 0) {
    if (_DAT_01c38b40 == 0) {
      if (DAT_006141c0 == 0x20) {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
      }
      else {
        _DAT_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
      }
    }
    else if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
    }
    else {
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    piVar6 = &DAT_0070ca98;
    _DAT_01c38b54 = 0x1e7;
    _DAT_01c38b58 = 1;
    pSVar3 = prim + 1;
    for (iVar2 = 0; iVar4 = DAT_0070ca60, iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + DAT_0070ca60;
      (&DAT_0062202c)[((pSVar3->base).type + iVar4) * 0xc] = (pSVar3->base).count;
      piVar6 = piVar6 + 1;
      *(UIntegerFloat *)(&DAT_00622030 + ((pSVar3->base).type + iVar4) * 0x30) =
           (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((DAT_0070caf8 == 0) || (0x9c3 < DAT_0070cafc)) || (iVar2 = (prim->base).count, 4 < iVar2))
    {
      engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,&DAT_0070ca98);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar4 = DAT_0070cafc * 0x118;
      DAT_0070cafc = DAT_0070cafc + 1;
      piVar6 = (int *)(&DAT_0070cb00 + iVar4);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar9 = &DAT_00622014 + *(int *)((int)&DAT_0070ca98 + iVar2) * 0xc;
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
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_005750e0();
      uVar1 = DAT_006141d8;
      piVar6 = (int *)(&DAT_0070cbc4 + iVar4);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)(&DAT_0070cc0c + iVar4) = uVar1;
      *(uint *)(&DAT_0070cc10 + iVar4) = _DAT_01c38b4c;
      *(int *)(&DAT_0070cc14 + iVar4) = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
