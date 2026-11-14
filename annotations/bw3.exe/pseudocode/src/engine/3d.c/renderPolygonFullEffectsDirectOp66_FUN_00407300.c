// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300
// Address: 00407300
// Address Range: [[00407300, 004074a8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(SMRGLHeaderPrimitive *primitive)

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
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
    }
    else {
      _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    _DAT_01c6e2b8 = 1;
    _DAT_01c6e2b4 = 0x1e7;
    if (((DAT_00730478 == 0) || (0x9c3 < DAT_0073047c)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840((primitive->base).count,(int *)vertex_indices);
    }
    else {
      iVar3 = DAT_0073047c * 0x118;
      piVar6 = (int *)(&DAT_00730480 + iVar3);
      DAT_0073047c = DAT_0073047c + 1;
      *piVar6 = (primitive->base).count;
      iVar2 = 0x7fffffff;
      iVar7 = 0;
      if (0 < (primitive->base).count) {
        do {
          piVar8 = &DAT_0060b014 + (vertex_indices->base).type * 0xc;
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
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_0056acf0();
      uVar1 = DAT_005fba38;
      piVar6 = (int *)(&DAT_00730544 + iVar3);
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar6 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar10 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar10 * -2 + 1;
      }
      *(uint *)(&DAT_0073058c + iVar3) = uVar1;
      *(int *)(&DAT_00730594 + iVar3) = iVar2;
      *(uint *)(&DAT_00730590 + iVar3) = _DAT_01c6e2ac;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
