// Name: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
// Address: 0046b8f0
// Address Range: [[0046b8f0, 0046ba61]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if ((this_ptr->plane_culling_enabled == 0) ||
       (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403920(poly + 8), iVar3 != 0)) {
      if (this_ptr->shadow_pass_active == 0) {
        iVar3 = 0;
        if (0 < *(int *)(poly + 4)) {
          iVar4 = 0;
          pSVar2 = poly;
          do {
            iVar1 = *(int *)(pSVar2 + 0x18);
            if (this_ptr->skip_uv_extraction == 0) {
              iVar5 = iVar1 * 0x30;
              *(uint *)(this_ptr->vertex_buffer_ptr + iVar5 + 0x18) =
                   *(uint *)(pSVar2 + 0x1c);
              *(uint *)(this_ptr->vertex_buffer_ptr + iVar5 + 0x1c) =
                   *(uint *)(pSVar2 + 0x20);
            }
            *(int *)(&DAT_01bdd818 + iVar4) = iVar1;
            pSVar2 = pSVar2 + 0xc;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < *(int *)(poly + 4));
        }
      }
      else {
        iVar3 = 0;
        if (0 < *(int *)(poly + 4)) {
          iVar4 = 0;
          pSVar2 = poly;
          do {
            *(uint *)(&DAT_01bdd818 + iVar4) = *(uint *)(pSVar2 + 0x18);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            pSVar2 = pSVar2 + 0xc;
          } while (iVar3 < *(int *)(poly + 4));
        }
      }
      if (this_ptr->shadow_pass_active == 0) {
        if (DAT_005fba20 == 0x20) {
          _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
        }
        else {
          _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        _DAT_01c6e2b4 = render_flags;
        _DAT_01c6e2b8 = 6;
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
  engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
            (this_ptr,(SMRGLHeaderPrimitive *)poly,render_flags);
  return;
}
