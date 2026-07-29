// Name: engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590
// Address: 00460590
// Address Range: [[00460590, 004606d1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    if (0 < (poly->base).base.count) {
      iVar3 = 0;
      pSVar2 = poly;
      do {
        iVar1 = pSVar2->vertices[0].vertex_index;
        *(int *)(&DAT_01b4d76c + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        local_14 = local_14 & this_ptr->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (poly->base).base.count);
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a4 = 0;
        _DAT_01c039a0 = 0x327;
        if ((this_ptr->skip_uv_extraction == 0) && (iVar4 = 0, 0 < (poly->base).base.count)) {
          iVar3 = 0;
          pSVar2 = poly;
          do {
            iVar1 = *(int *)(&DAT_01b4d76c + iVar3);
            this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2->vertices[0].texture_u;
            this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2->vertices[0].texture_v;
            pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < (poly->base).base.count);
        }
      }
      else {
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
    }
  }
  return;
}
