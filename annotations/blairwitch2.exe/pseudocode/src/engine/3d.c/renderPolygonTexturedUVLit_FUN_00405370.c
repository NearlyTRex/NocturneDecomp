// Name: engine_3d.c_renderPolygonTexturedUVLit_FUN_00405370
// Address: 00405370
// Address Range: [[00405370, 00405440]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_00405370(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_00405370(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1010 [1016];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar2 = 0;
  uStack_28 = *(uint *)(prim + 8);
  uStack_24 = *(uint *)(prim + 0xc);
  uStack_20 = *(uint *)(prim + 0x10);
  engine_matrix_c_normalizeVector3DFixed_FUN_004e9a60(&stack0xffffffd8);
  uStack_28 = uStack_1c;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(prim + 8);
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
    _DAT_01c38b58 = 0;
    engine_3d_c_calculatePolygonLighting_FUN_00403a20(prim);
    engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(prim + 4),(int *)(prim + 0x18));
  }
  return (SMRGLHeaderExtended *)(prim + *(int *)(prim + 4) * 4 + 0x18);
}
