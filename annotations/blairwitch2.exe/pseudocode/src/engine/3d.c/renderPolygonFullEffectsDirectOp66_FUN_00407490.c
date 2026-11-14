// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407490
// Address: 00407490
// Address Range: [[00407490, 00407638]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  SMRGLHeaderPrimitive *vertex_indices;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  
  bVar10 = 0;
  vertex_indices = primitive + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
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
    _DAT_01c38b58 = 1;
    _DAT_01c38b54 = 0x1e7;
    if (((DAT_0070caf8 == 0) || (0x9c3 < DAT_0070cafc)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,(int *)vertex_indices);
    }
    else {
      iVar3 = DAT_0070cafc * 0x118;
      piVar6 = (int *)(&DAT_0070cb00 + iVar3);
      DAT_0070cafc = DAT_0070cafc + 1;
      *piVar6 = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < (primitive->base).count) {
        do {
          piVar8 = &DAT_00622014 + (vertex_indices->base).type * 0xc;
          piVar9 = piVar6 + 1;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = *piVar8;
            piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
          }
          if (piVar6[3] < iVar2) {
            iVar2 = piVar6[3];
          }
          piVar6 = piVar6 + 0xc;
          iVar7 = iVar7 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar7 < (primitive->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_005750e0();
      uVar1 = DAT_006141d8;
      piVar6 = (int *)(&DAT_0070cbc4 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar6 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0070cc0c + iVar3) = uVar1;
      *(int *)(&DAT_0070cc14 + iVar3) = iVar2;
      *(uint *)(&DAT_0070cc10 + iVar3) = _DAT_01c38b4c;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
