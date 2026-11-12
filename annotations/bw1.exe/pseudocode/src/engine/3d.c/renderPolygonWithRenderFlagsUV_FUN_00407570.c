// Name: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407570
// Address: 00407570
// Address Range: [[00407570, 004076b9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00407570(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00407570(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
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
    _DAT_01c51d14 = render_flags;
    if ((render_flags & 0x10U) != 0) {
      _DAT_01c4f024 =
           engine_light_cpp_calculateLighting_FUN_004ffd40
                     ((prim->surface_normal).A.i,(prim->surface_normal).B.i,
                      (prim->surface_normal).C.i);
    }
    _DAT_01c51d18 = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        _DAT_01c51d18 = 1;
      }
    }
    else {
      _DAT_01c51d18 = 5;
    }
    iVar2 = 0;
    if (0 < (prim->base).count) {
      iVar4 = 0;
      pSVar3 = prim;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)&DAT_00713a98 + iVar4) = iVar1;
        (&DAT_0062902c)[iVar1 * 0xc] = pSVar3[1].base.count;
        iVar4 = iVar4 + 4;
        *(UIntegerFloat *)(&DAT_00629030 + iVar1 * 0x30) = pSVar3[1].surface_normal.A;
        iVar2 = iVar2 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar2 < (prim->base).count);
    }
    if (_DAT_01c4f028 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_0043de60((prim->base).count,&DAT_00713a98);
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,&DAT_00713a98);
  }
  return;
}
