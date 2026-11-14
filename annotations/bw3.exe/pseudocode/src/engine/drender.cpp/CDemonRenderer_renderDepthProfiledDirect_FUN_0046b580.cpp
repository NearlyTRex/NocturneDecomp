// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
// Address: 0046b580
// Address Range: [[0046b580, 0046b660]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _DAT_01ed3198;
  _DAT_01bdd810 = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (this_ptr->shadow_pass_active == 0) {
    _DAT_01c6e2b4 = 0xc0;
    _DAT_01c6e2b8 = 6;
    _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_0046fea7;
  }
  else {
    _DAT_01c6e2b4 = 0;
    _DAT_01c6e2b8 = 0;
    _DAT_01c6b5cc = core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046ff25;
  }
  iVar2 = this_ptr->shadow_pass_active;
  if (_DAT_01c6cee8 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (_DAT_01c6cee8 != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(this_ptr,iVar2);
  }
  _DAT_01ed3198 = uVar1;
  return (uint)(DAT_005f2b00 <= _DAT_01bdd810);
}
