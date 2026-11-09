// Name: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60
// Address: 0046be60
// Address Range: [[0046be60, 0046bf88]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  SMRGLPrimitivePoly *pSVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar2 != 0)) {
    if (*(int *)(this_ptr + 4) == 0) {
      if (0 < *(int *)(poly + 4)) {
        iVar4 = 0;
        iVar2 = 0;
        pSVar3 = poly;
        do {
          iVar1 = *(int *)(pSVar3 + 0x18);
          if (*(int *)(this_ptr + 0x20) == 0) {
            iVar5 = iVar1 * 0x30;
            *(uint *)(iVar5 + *(int *)this_ptr + 0x18) = *(uint *)(pSVar3 + 0x1c);
            *(uint *)(*(int *)this_ptr + iVar5 + 0x1c) = *(uint *)(pSVar3 + 0x20);
          }
          *(int *)(&DAT_01bdd818 + iVar4) = iVar1;
          pSVar3 = pSVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(poly + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(poly + 4)) {
        iVar4 = 0;
        pSVar3 = poly;
        do {
          *(uint *)(&DAT_01bdd818 + iVar4) = *(uint *)(pSVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          pSVar3 = pSVar3 + 0xc;
        } while (iVar2 < *(int *)(poly + 4));
      }
    }
    if (*(int *)(this_ptr + 4) == 0) {
      _DAT_01c6e2b4 = 0x41;
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
  }
  return;
}
