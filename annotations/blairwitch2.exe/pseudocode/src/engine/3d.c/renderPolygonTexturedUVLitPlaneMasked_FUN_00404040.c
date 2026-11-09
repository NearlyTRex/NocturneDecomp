// Name: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040
// Address: 00404040
// Address Range: [[00404040, 00404139]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  int iVar4;
  
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
  piVar3 = &DAT_0070ca98;
  pSVar2 = prim + 0x18;
  for (iVar4 = 0; iVar1 = DAT_0070ca60, iVar4 < *(int *)(prim + 4) * 3; iVar4 = iVar4 + 3) {
    *piVar3 = *(int *)pSVar2 + DAT_0070ca60;
    (&DAT_0062202c)[(*(int *)pSVar2 + iVar1) * 0xc] = *(int *)(pSVar2 + 4);
    piVar3 = piVar3 + 1;
    *(int *)(&DAT_00622030 + (*(int *)pSVar2 + iVar1) * 0x30) = *(int *)(pSVar2 + 8);
    pSVar2 = pSVar2 + 0xc;
  }
  engine_clipper_c_clipAndRasterize_FUN_00431d90(*(int *)(prim + 4),&DAT_0070ca98);
  return prim + *(int *)(prim + 4) * 0xc + 0x18;
}
