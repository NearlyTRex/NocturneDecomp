// Name: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00404120
// Address: 00404120
// Address Range: [[00404120, 0040431e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00404120(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00404120(SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int vertex_count;
  
  pSVar4 = prim + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar2 == 0) goto LAB_004042ff;
  if (DAT_00713a78 == 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
LAB_00404169:
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
LAB_00404250:
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
  }
  else if (_DAT_01c51d00 == 0) {
    if (DAT_0061b4a0 == 0x20) goto LAB_00404169;
    _DAT_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
  }
  else {
    if (DAT_0061b4a0 != 0x20) goto LAB_00404250;
    _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
  }
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
  _DAT_01c51d14 = 0x13;
  if (DAT_0061b4b8 < 0xff) {
    _DAT_01c51d14 = 0x33;
  }
  vertex_count = 0;
  iVar6 = 0;
  _DAT_01c51d18 = 0;
  for (iVar2 = 0; iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
    *(int *)((int)&DAT_00713a98 + iVar6) = (pSVar4->base).type;
    iVar3 = (pSVar4->base).count;
    iVar5 = (pSVar4->surface_normal).A.i;
    if (_DAT_01c50948 == 0) {
      if (iVar3 < 0x10000) {
        iVar3 = 0x10000;
      }
      if (iVar5 < 0x10000) {
        iVar5 = 0x10000;
      }
      if (0xfeffff < iVar3) {
        iVar3 = 0xfeffff;
      }
      if (0xfeffff < iVar5) {
        iVar5 = 0xfeffff;
      }
    }
    else {
      if (iVar3 < 0x20000) {
        iVar3 = 0x20000;
      }
      if (iVar5 < 0x20000) {
        iVar5 = 0x20000;
      }
      if (0xfdffff < iVar3) {
        iVar3 = 0xfdffff;
      }
      if (0xfdffff < iVar5) {
        iVar5 = 0xfdffff;
      }
    }
    (&DAT_0062902c)[(pSVar4->base).type * 0xc] = iVar3;
    pSVar1 = &pSVar4->base;
    iVar6 = iVar6 + 4;
    vertex_count = vertex_count + 1;
    pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
    *(int *)(&DAT_00629030 + pSVar1->type * 0x30) = iVar5;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0(vertex_count,&DAT_00713a98);
LAB_004042ff:
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
