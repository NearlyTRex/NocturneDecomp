// Name: engine_3d.c_renderPolygonTexturedUVLit_FUN_004051a0
// Address: 004051a0
// Address Range: [[004051a0, 00405270]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_004051a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_004051a0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  UIntegerFloat UStack_28;
  UIntegerFloat UStack_24;
  UIntegerFloat UStack_20;
  UIntegerFloat UStack_1c;
  
  bVar2 = 0;
  UStack_28 = (prim->surface_normal).A;
  UStack_24 = (prim->surface_normal).B;
  UStack_20 = (prim->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_004e6140(&stack0xffffffd8);
  UStack_28 = UStack_1c;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       (UIntegerFloat)*(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
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
    _DAT_01c6e2b4 = 1;
    _DAT_01c6e2b8 = 0;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
