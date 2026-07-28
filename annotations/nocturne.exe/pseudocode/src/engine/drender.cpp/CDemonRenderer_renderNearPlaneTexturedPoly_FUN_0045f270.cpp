// Name: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270
// Address: 0045f270
// Address Range: [[0045f270, 0045f3b5]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_2 + 8)), iVar3 != 0)) {
    local_14 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar4 = 0;
      iVar2 = param_2;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)(&DAT_01b4d76c + iVar4) = iVar1;
        iVar4 = iVar4 + 4;
        local_14 = local_14 & param_1->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      if ((param_1->face_count == 0) && (param_1->skip_uv_extraction == 0)) {
        iVar4 = 0;
        iVar3 = 0;
        iVar2 = param_2;
        if (0 < *(int *)(param_2 + 4)) {
          do {
            iVar1 = *(int *)(&DAT_01b4d76c + iVar3);
            param_1->vertex_buffer_ptr[iVar1].u = *(int *)(iVar2 + 0x1c);
            param_1->vertex_buffer_ptr[iVar1].v = *(int *)(iVar2 + 0x20);
            iVar2 = iVar2 + 0xc;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < *(int *)(param_2 + 4));
        }
      }
      if (param_1->face_count == 0) {
        _DAT_01c039a0 = 0xc1;
        _DAT_01c039a4 = 3;
        _DAT_01c00c7c = core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200;
      }
      else {
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (param_1,*(int *)(param_2 + 4),(int *)&DAT_01b4d76c);
    }
  }
  return;
}
