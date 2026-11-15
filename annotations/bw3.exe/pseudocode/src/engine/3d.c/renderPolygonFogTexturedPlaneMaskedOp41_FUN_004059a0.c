// Name: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
// Address: 004059a0
// Address Range: [[004059a0, 00405b26]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(SMRGLHeaderPrimitive *prim)

{
  int vertex_count;
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (_DAT_01c6e24c == 0) {
      if (_DAT_01c6e2a0 == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
        }
      }
      else if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b4 = 0xc5;
    }
    else {
      if (_DAT_01c6e2a0 == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
        }
      }
      else if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b4 = 0xcd;
    }
    _DAT_01c6e2b8 = 1;
    piVar3 = &DAT_00730418;
    iVar1 = 0;
    pSVar2 = prim + 1;
    while( true ) {
      vertex_count = (prim->base).count;
      if (vertex_count * 3 <= iVar1) break;
      *piVar3 = (pSVar2->base).type + DAT_007303e0;
      (&DAT_0060b02c)[((pSVar2->base).type + DAT_007303e0) * 0xc] = (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + 3;
      *(UIntegerFloat *)(&DAT_0060b030 + ((pSVar2->base).type + DAT_007303e0) * 0x30) =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,&DAT_00730418);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
