// Name: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
// Address: 0045f190
// Address Range: [[0045f190, 0045f264]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  _DAT_01b4d764 = 0;
  if (this_ptr->plane_culling_enabled != 0) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (this_ptr->face_count == 0) {
    _DAT_01c039a0 = 0xc0;
    _DAT_01c039a4 = 6;
    _DAT_01c00c7c = core_dstrender_cpp_renderDepthInterlacedProfiled_FUN_00463f77;
  }
  else {
    _DAT_01c039a0 = 0;
    _DAT_01c039a4 = 0;
    _DAT_01c00c7c = core_dstrender_cpp_renderScreenDepthTestInterlacedProfiled_FUN_00463ff5;
  }
  iVar1 = this_ptr->face_count;
  if (_DAT_01c02594 != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(this_ptr,1);
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
            (this_ptr,(prim->base).count,(int *)(prim + 1));
  if (_DAT_01c02594 != 0) {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(this_ptr,iVar1);
  }
  return (uint)(DAT_005ae708 <= _DAT_01b4d764);
}
