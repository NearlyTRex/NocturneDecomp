// Name: engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
// Address: 0046ab50
// Address Range: [[0046ab50, 0046ac19]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403970(prim + 8), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(prim + 4)) {
      pSVar1 = prim;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & *(uint *)(*(int *)this_ptr + 0x10 + *(int *)(pSVar1 + 0x18) * 0x30);
        pSVar1 = pSVar1 + 4;
      } while (iVar3 < *(int *)(prim + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (*(int *)(this_ptr + 4) == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
        }
        else {
          _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        _DAT_01c38b58 = 6;
        _DAT_01c38b54 = 0x267;
      }
      else {
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
                (this_ptr,*(int *)(prim + 4),(int *)(prim + 0x18));
    }
  }
  return;
}
