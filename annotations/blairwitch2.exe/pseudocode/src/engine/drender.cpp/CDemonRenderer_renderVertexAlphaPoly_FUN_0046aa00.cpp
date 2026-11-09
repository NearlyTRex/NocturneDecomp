// Name: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
// Address: 0046aa00
// Address Range: [[0046aa00, 0046ab44]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403970(poly + 8), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < *(int *)(poly + 4)) {
      iVar3 = 0;
      pSVar2 = poly;
      do {
        iVar1 = *(int *)(pSVar2 + 0x18);
        *(int *)(&DAT_01ba5c84 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        local_14 = local_14 & *(uint *)(*(int *)this_ptr + 0x10 + iVar1 * 0x30);
        pSVar2 = pSVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(poly + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (*(int *)(this_ptr + 4) == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = engine_special_cpp_FUN_0055b3b1;
        }
        else {
          _DAT_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
        }
        _DAT_01c38b58 = 6;
        _DAT_01c38b54 = 0x367;
        if ((*(int *)(this_ptr + 0x20) == 0) && (iVar4 = 0, 0 < *(int *)(poly + 4))) {
          iVar3 = 0;
          pSVar2 = poly;
          do {
            iVar1 = *(int *)(&DAT_01ba5c84 + iVar3);
            *(uint *)(*(int *)this_ptr + 0x18 + iVar1 * 0x30) = *(uint *)(pSVar2 + 0x1c)
            ;
            *(uint *)(*(int *)this_ptr + iVar1 * 0x30 + 0x1c) = *(uint *)(pSVar2 + 0x20)
            ;
            pSVar2 = pSVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(poly + 4));
        }
      }
      else {
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046e936;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01ba5c84);
    }
  }
  return;
}
