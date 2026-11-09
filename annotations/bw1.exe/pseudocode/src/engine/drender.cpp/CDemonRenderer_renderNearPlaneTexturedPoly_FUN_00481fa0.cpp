// Name: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00481fa0
// Address: 00481fa0
// Address Range: [[00481fa0, 004820e5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00481fa0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00481fa0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar3 != 0)) {
    uStack_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(poly + 4)) {
      iVar4 = 0;
      pSVar2 = poly;
      do {
        iVar1 = *(int *)(pSVar2 + 0x18);
        *(int *)(&DAT_01bc1240 + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        uStack_14 = uStack_14 & *(uint *)(*(int *)this_ptr + 0x10 + iVar1 * 0x30);
        pSVar2 = pSVar2 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(poly + 4));
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if ((*(int *)(this_ptr + 4) == 0) && (*(int *)(this_ptr + 0x20) == 0)) {
        iVar4 = 0;
        iVar3 = 0;
        pSVar2 = poly;
        if (0 < *(int *)(poly + 4)) {
          do {
            iVar1 = *(int *)(&DAT_01bc1240 + iVar3);
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
      if (*(int *)(this_ptr + 4) == 0) {
        _DAT_01c51d14 = 0xc1;
        _DAT_01c51d18 = 3;
        _DAT_01c4f02c = (code *)&UNK_004875b0;
      }
      else {
        _DAT_01c51d14 = 0;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bc1240);
    }
  }
  return;
}
