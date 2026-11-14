// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
// Address: 004699a0
// Address Range: [[004699a0, 00469a80]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _DAT_01e61b58;
  _DAT_01ba5c7c = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->shadow_pass_active == 0) {
    _DAT_01c38b54 = 0xc0;
    _DAT_01c38b58 = 6;
    _DAT_01c35e6c = core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_0046ee37;
  }
  else {
    _DAT_01c38b54 = 0;
    _DAT_01c38b58 = 0;
    _DAT_01c35e6c = core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046eeb5;
  }
  iVar2 = this_ptr->shadow_pass_active;
  if (_DAT_01c37788 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (_DAT_01c37788 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(this_ptr,iVar2);
  }
  _DAT_01e61b58 = uVar1;
  return (uint)(DAT_0060b284 <= _DAT_01ba5c7c);
}
