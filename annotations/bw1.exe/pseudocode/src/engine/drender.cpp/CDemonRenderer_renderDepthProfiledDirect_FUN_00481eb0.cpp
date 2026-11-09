// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
// Address: 00481eb0
// Address Range: [[00481eb0, 00481f90]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _DAT_01e7dac8;
  _DAT_01bc1238 = 0;
  if (*(int *)(this_ptr + 0xc) != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(prim + 8);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(int *)(this_ptr + 4) == 0) {
    _DAT_01c51d14 = 0xc0;
    _DAT_01c51d18 = 6;
    _DAT_01c4f02c = core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_00487327;
  }
  else {
    _DAT_01c51d14 = 0;
    _DAT_01c51d18 = 0;
    _DAT_01c4f02c = core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_004873a5;
  }
  iVar2 = *(int *)(this_ptr + 4);
  if (_DAT_01c50948 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
            (this_ptr,*(int *)(prim + 4),(int *)(prim + 0x18));
  if (_DAT_01c50948 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(this_ptr,iVar2);
  }
  _DAT_01e7dac8 = uVar1;
  return (uint)(DAT_00612564 <= _DAT_01bc1238);
}
