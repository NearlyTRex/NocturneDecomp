// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280
// Address: 00406280
// Address Range: [[00406280, 00406513]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_00713a74 == 0) {
      if (DAT_00713a70 == 0) {
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
        if (0x00000001 == 0) {
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
          _DAT_01c51d18 = 0;
          _DAT_01c51d14 = 0xc1;
        }
        else {
          _DAT_01c51d18 = 1;
          _DAT_01c51d14 = 0xc1;
        }
      }
      else {
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
        _DAT_01c51d14 = 0xc0;
        _DAT_01c51d18 = 1;
        engine_light_cpp_calculateLighting_FUN_004ffd40
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
        _DAT_01c4f020 = engine_3d_c_lookupLitColor_FUN_00403990(DAT_00713a5c,_DAT_01c4f024);
      }
    }
    else {
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
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
    }
    piVar3 = &DAT_00713a98;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + DAT_00713a60;
      (&DAT_0062902c)[((pSVar2->base).type + DAT_00713a60) * 0xc] = (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      *(UIntegerFloat *)(&DAT_00629030 + ((pSVar2->base).type + DAT_00713a60) * 0x30) =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,&DAT_00713a98);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
