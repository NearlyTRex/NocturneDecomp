// Name: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00
// Address: 00404b00
// Address Range: [[00404b00, 00404c74]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404b00(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404b00(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_0070ca74 == 0) {
      if (0x00000001 == 0) {
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
        _DAT_01c38b54 = 0x10;
        _DAT_01c38b58 = 0;
      }
      else {
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
        _DAT_01c38b54 = 0xd0;
        _DAT_01c38b58 = 1;
      }
    }
    else {
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
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
    }
    _DAT_01c35e64 =
         engine_light_cpp_calculateLighting_FUN_004e28b0
                   ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i
                   );
    _DAT_01c35e60 = engine_3d_c_lookupLitColor_FUN_004039e0(DAT_0070ca5c,_DAT_01c35e64);
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
