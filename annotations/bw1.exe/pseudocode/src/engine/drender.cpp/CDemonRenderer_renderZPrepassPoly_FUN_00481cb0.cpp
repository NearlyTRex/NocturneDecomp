// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0
// Address: 00481cb0
// Address Range: [[00481cb0, 00481da9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

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
        *(int *)(&DAT_01bc1240 + iVar1) = iVar4;
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
        _DAT_01c51d14 = 0x90;
        _DAT_01c51d18 = 6;
        _DAT_01c4f02c = core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_00486ff2;
      }
      else {
        _DAT_01c51d14 = 0;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderDepth16BitConditional_FUN_00486e74;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (this_ptr,*(int *)(poly + 4),(int *)&DAT_01bc1240);
      *(int *)(this_ptr + 0x10) = iVar3;
    }
  }
  return;
}
