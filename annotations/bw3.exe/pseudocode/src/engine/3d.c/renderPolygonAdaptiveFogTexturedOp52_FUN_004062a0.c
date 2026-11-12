// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0
// Address: 004062a0
// Address Range: [[004062a0, 00406533]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_007303f4 == 0) {
      if (DAT_007303f0 == 0) {
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
        if (0x00000001 == 0) {
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
          _DAT_01c6e2b8 = 0;
          _DAT_01c6e2b4 = 0xc1;
        }
        else {
          _DAT_01c6e2b8 = 1;
          _DAT_01c6e2b4 = 0xc1;
        }
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
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b4 = 0xc0;
        _DAT_01c6e2b8 = 1;
        engine_light_cpp_calculateLighting_FUN_004e0e00
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
        _DAT_01c6b5c0 = engine_3d_c_lookupLitColor_FUN_00403990(DAT_007303dc,_DAT_01c6b5c4);
      }
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
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
    }
    piVar3 = &DAT_00730418;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + DAT_007303e0;
      (&DAT_0060b02c)[((pSVar2->base).type + DAT_007303e0) * 0xc] = (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      *(UIntegerFloat *)(&DAT_0060b030 + ((pSVar2->base).type + DAT_007303e0) * 0x30) =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,&DAT_00730418);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
