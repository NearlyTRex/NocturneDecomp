// Name: engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450
// Address: 00405450
// Address Range: [[00405450, 00405523]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00405450(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  bVar2 = 0;
  CStack_28.x = *(int *)&(prim->surface_normal).A;
  CStack_28.y = *(int *)&(prim->surface_normal).B;
  CStack_28.z = *(int *)&(prim->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(&CStack_28,&CStack_1c);
  CStack_28.x = CStack_1c.x;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
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
      _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
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
