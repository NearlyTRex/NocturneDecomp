// Name: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0
// Address: 0046c3b0
// Address Range: [[0046c3b0, 0046c504]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < *(int *)(poly + 4)) {
      iVar3 = 0;
      pSVar2 = poly;
      do {
        iVar1 = *(int *)(pSVar2 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        local_14 = local_14 & *(uint *)(*(int *)this_ptr + 0x10 + iVar1 * 0x30);
        pSVar2 = pSVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(poly + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (*(int *)(this_ptr + 4) == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b8 = 6;
        _DAT_01c6e2b4 = 0x2e7;
        if ((*(int *)(this_ptr + 0x20) == 0) && (iVar4 = 0, 0 < *(int *)(poly + 4))) {
          iVar3 = 0;
          pSVar2 = poly;
          do {
            iVar1 = *(int *)(&DAT_01bdd818 + iVar3);
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
        _DAT_01c6e2b4 = 1;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
    }
  }
  return;
}
