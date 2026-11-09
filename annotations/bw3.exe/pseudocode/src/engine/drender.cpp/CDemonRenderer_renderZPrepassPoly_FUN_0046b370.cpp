// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370
// Address: 0046b370
// Address Range: [[0046b370, 0046b469]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  uint local_14;
  
  if ((*(int *)(this_ptr + 0xc) == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar3 != 0)) {
    iVar3 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(poly + 4)) {
      iVar1 = 0;
      pSVar2 = poly;
      do {
        iVar4 = *(int *)(pSVar2 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar1) = iVar4;
        iVar4 = *(int *)this_ptr + iVar4 * 0x30;
        local_14 = local_14 & *(uint *)(iVar4 + 0x10);
        if ((*(byte *)(iVar4 + 0x13) & 0x80) != 0) {
          local_18 = 1;
        }
        iVar1 = iVar1 + 4;
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 0xc;
      } while (iVar3 < *(int *)(poly + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar3 = *(int *)(this_ptr + 0x10);
      if ((iVar3 != 0) && (*(int *)(this_ptr + 4) != 0)) {
        *(uint *)(this_ptr + 0x10) = local_18;
      }
      if (*(int *)(this_ptr + 4) == 0) {
        _DAT_01c6e2b4 = 0x90;
        _DAT_01c6e2b8 = 6;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_0046fb72;
      }
      else {
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepth16BitConditional_FUN_0046f9f4;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bdd818);
      *(int *)(this_ptr + 0x10) = iVar3;
    }
  }
  return;
}
