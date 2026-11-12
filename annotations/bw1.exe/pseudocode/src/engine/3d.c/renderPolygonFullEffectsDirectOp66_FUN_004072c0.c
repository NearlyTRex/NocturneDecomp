// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_004072c0
// Address: 004072c0
// Address Range: [[004072c0, 00407468]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_004072c0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_004072c0(SMRGLHeaderPrimitive *primitive)

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
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
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
    _DAT_01c51d18 = 1;
    _DAT_01c51d14 = 0x1e7;
    if (((DAT_00713af8 == 0) || (0x9c3 < DAT_00713afc)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_0043cbf0((primitive->base).count,(int *)vertex_indices);
    }
    else {
      iVar3 = DAT_00713afc * 0x118;
      piVar6 = (int *)(&DAT_00713b00 + iVar3);
      DAT_00713afc = DAT_00713afc + 1;
      *piVar6 = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < (primitive->base).count) {
        do {
          piVar8 = &DAT_00629014 + (vertex_indices->base).type * 0xc;
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
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_00597d00();
      uVar1 = DAT_0061b4b8;
      piVar6 = (int *)(&DAT_00713bc4 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar6 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_00713c0c + iVar3) = uVar1;
      *(int *)(&DAT_00713c14 + iVar3) = iVar2;
      *(uint *)(&DAT_00713c10 + iVar3) = _DAT_01c51d0c;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
