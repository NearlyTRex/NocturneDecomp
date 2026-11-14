// Name: engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450
// Address: 00405450
// Address Range: [[00405450, 00405523]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450(SMRGLHeaderPrimitive *prim)

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
  engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(&stack0xffffffd8);
  UStack_28 = UStack_1c;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       (UIntegerFloat)*(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
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
    _DAT_01c38b54 = 1;
    _DAT_01c38b58 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_00403a20(prim);
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
