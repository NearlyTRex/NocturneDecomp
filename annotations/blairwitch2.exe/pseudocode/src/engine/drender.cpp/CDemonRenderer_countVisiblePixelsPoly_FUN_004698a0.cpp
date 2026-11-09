// Name: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0
// Address: 004698a0
// Address Range: [[004698a0, 00469990]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *pSVar4;
  uint local_14;
  
  _DAT_01ba5c7c = 0;
  if ((*(int *)(this_ptr + 0xc) != 0) &&
     (iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(poly + 8), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  local_14 = 0xffffffff;
  if (0 < *(int *)(poly + 4)) {
    iVar3 = 0;
    pSVar4 = poly;
    do {
      iVar1 = *(int *)(pSVar4 + 0x18);
      *(int *)(&DAT_01ba5c84 + iVar3) = iVar1;
      iVar3 = iVar3 + 4;
      pSVar4 = pSVar4 + 0xc;
      iVar2 = iVar2 + 1;
      local_14 = local_14 & *(uint *)(iVar1 * 0x30 + 0x10 + *(int *)this_ptr);
    } while (iVar2 < *(int *)(poly + 4));
  }
  if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
    if (*(int *)(this_ptr + 4) == 0) {
      _DAT_01c38b54 = 0xc0;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ef35;
    }
    else {
      _DAT_01d046a0 = "..\\engine\\drender.cpp";
      _DAT_01d046a4 = 0x29d;
      core_main_c_FUN_004e4500("Can't use demonZFacetCount in shadow mode!");
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
              (this_ptr,*(int *)(poly + 4),(int *)&DAT_01ba5c84);
    iVar2 = _DAT_01ba5c7c;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
