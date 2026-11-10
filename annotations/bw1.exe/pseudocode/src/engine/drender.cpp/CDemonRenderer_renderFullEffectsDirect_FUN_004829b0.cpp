// Name: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_004829b0
// Address: 004829b0
// Address Range: [[004829b0, 00482a81]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_004829b0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_004829b0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (prim->base).count) {
      pSVar1 = prim;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & *(uint *)(this_ptr->vertex_buffer_ptr + pSVar1[1].base.type * 0x30 + 0x10);
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->base).count;
      } while (iVar3 < (prim->base).count);
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
        }
        else {
          _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
        }
        _DAT_01c51d18 = 6;
        _DAT_01c51d14 = 999;
      }
      else {
        _DAT_01c51d14 = 1;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
                (this_ptr,(prim->base).count,(int *)(prim + 1));
    }
  }
  return;
}
