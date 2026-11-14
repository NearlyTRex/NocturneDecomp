// Name: engine_3d.c_renderPolygonSolidLitOp62_FUN_00406a40
// Address: 00406a40
// Address Range: [[00406a40, 00406b57]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406a40(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406a40(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
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
    _DAT_01c38b54 = 0x13;
    engine_3d_c_calculatePolygonLighting_FUN_00403a20(prim);
    if (DAT_006141d8 < 0xff) {
      _DAT_01c38b54 = _DAT_01c38b54 | 0x20;
    }
    vertex_count = 0;
    iVar4 = 0;
    _DAT_01c38b58 = 0;
    pSVar3 = prim + 1;
    for (iVar2 = 0; iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)&DAT_0070ca98 + iVar4) = iVar1;
      (&DAT_0062202c)[iVar1 * 0xc] = (pSVar3->base).count;
      iVar4 = iVar4 + 4;
      vertex_count = vertex_count + 1;
      *(UIntegerFloat *)(&DAT_00622030 + (pSVar3->base).type * 0x30) = (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90(vertex_count,&DAT_0070ca98);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
