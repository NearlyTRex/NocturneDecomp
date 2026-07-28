// Name: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00
// Address: 0045fb00
// Address Range: [[0045fb00, 0045fbf9]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)

{
  int iVar1;
  SMRGLPrimitivePoly *pSVar2;
  int iVar3;
  int iVar4;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610(&(poly->base).surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (poly->base).base.count) {
      iVar4 = 0;
      pSVar2 = poly;
      do {
        iVar1 = pSVar2->vertices[0].vertex_index;
        if (this_ptr->skip_uv_extraction == 0) {
          this_ptr->vertex_buffer_ptr[iVar1].u = pSVar2->vertices[0].texture_u;
          this_ptr->vertex_buffer_ptr[iVar1].v = pSVar2->vertices[0].texture_v;
        }
        *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
        pSVar2 = (SMRGLPrimitivePoly *)&(pSVar2->base).surface_normal.B;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < (poly->base).base.count);
    }
    if (this_ptr->face_count == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
      }
      _DAT_01c039a4 = 6;
      _DAT_01c039a0 = 0xc3;
    }
    else {
      _DAT_01c039a0 = 1;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
              (this_ptr,(poly->base).base.count,(int *)&DAT_01b4d76c);
  }
  return;
}
