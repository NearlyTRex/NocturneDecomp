// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450
// Address: 00406450
// Address Range: [[00406450, 004066e3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_0070ca74 == 0) {
      if (DAT_0070ca70 == 0) {
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
          _DAT_01c38b58 = 0;
          _DAT_01c38b54 = 0xc1;
        }
        else {
          _DAT_01c38b58 = 1;
          _DAT_01c38b54 = 0xc1;
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
        _DAT_01c38b54 = 0xc0;
        _DAT_01c38b58 = 1;
        engine_light_cpp_calculateLighting_FUN_004e28b0
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
        _DAT_01c35e60 = engine_3d_c_lookupLitColor_FUN_004039e0(DAT_0070ca5c,_DAT_01c35e64);
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
    piVar3 = &DAT_0070ca98;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + DAT_0070ca60;
      (&DAT_0062202c)[((pSVar2->base).type + DAT_0070ca60) * 0xc] = (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      *(UIntegerFloat *)(&DAT_00622030 + ((pSVar2->base).type + DAT_0070ca60) * 0x30) =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,&DAT_0070ca98);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
