// Name: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00
// Address: 0045fc00
// Address Range: [[0045fc00, 0045fcd1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (prim->base).count) {
      pSVar1 = prim;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & this_ptr->vertex_buffer_ptr[pSVar1[1].base.type].projected_vertex.screen_x;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->base).count;
      } while (iVar3 < (prim->base).count);
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a4 = 6;
        _DAT_01c039a0 = 999;
      }
      else {
        _DAT_01c039a0 = 1;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (this_ptr,(prim->base).count,(int *)(prim + 1));
    }
  }
  return;
}
