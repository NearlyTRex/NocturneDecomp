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
  _DAT_01c6e2b4 = 1;
  _DAT_01c6e2b8 = 0;
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
  piVar3 = &DAT_00730418;
  pSVar2 = prim + 0x18;
  for (iVar4 = 0; iVar1 = DAT_007303e0, iVar4 < *(int *)(prim + 4) * 3; iVar4 = iVar4 + 3) {
    *piVar3 = *(int *)pSVar2 + DAT_007303e0;
    (&DAT_0060b02c)[(*(int *)pSVar2 + iVar1) * 0xc] = *(int *)(pSVar2 + 4);
    piVar3 = piVar3 + 1;
    *(int *)(&DAT_0060b030 + (*(int *)pSVar2 + iVar1) * 0x30) = *(int *)(pSVar2 + 8);
    pSVar2 = pSVar2 + 0xc;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043a840(*(int *)(prim + 4),&DAT_00730418);
  return prim + *(int *)(prim + 4) * 0xc + 0x18;
}
