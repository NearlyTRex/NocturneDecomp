// Name: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70
// Address: 00403f70
// Address Range: [[00403f70, 00404069]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  int iVar4;
  
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
  _DAT_01c51d14 = 1;
  _DAT_01c51d18 = 0;
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
  piVar3 = &DAT_00713a98;
  pSVar2 = prim + 0x18;
  for (iVar4 = 0; iVar1 = DAT_00713a60, iVar4 < *(int *)(prim + 4) * 3; iVar4 = iVar4 + 3) {
    *piVar3 = *(int *)pSVar2 + DAT_00713a60;
    (&DAT_0062902c)[(*(int *)pSVar2 + iVar1) * 0xc] = *(int *)(pSVar2 + 4);
    piVar3 = piVar3 + 1;
    *(int *)(&DAT_00629030 + (*(int *)pSVar2 + iVar1) * 0x30) = *(int *)(pSVar2 + 8);
    pSVar2 = pSVar2 + 0xc;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0(*(int *)(prim + 4),&DAT_00713a98);
  return prim + *(int *)(prim + 4) * 0xc + 0x18;
}
