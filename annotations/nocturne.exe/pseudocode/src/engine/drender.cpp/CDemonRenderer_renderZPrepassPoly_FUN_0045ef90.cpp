// Name: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90
// Address: 0045ef90
// Address Range: [[0045ef90, 0045f089]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((param_1->plane_culling_enabled == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_2 + 8)), iVar4 != 0)) {
    iVar4 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar2 = 0;
      iVar3 = param_2;
      do {
        iVar1 = *(int *)(iVar3 + 0x18);
        *(int *)(&DAT_01b4d76c + iVar2) = iVar1;
        local_14 = local_14 & param_1->vertex_buffer_ptr[iVar1].projected_vertex.screen_x;
        if ((int)(param_1->vertex_buffer_ptr[iVar1].projected_vertex.screen_x & -0x80000000) != 0) {
          local_18 = 1;
        }
        iVar2 = iVar2 + 4;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < *(int *)(param_2 + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar4 = param_1->face_capture_enabled;
      if ((iVar4 != 0) && (param_1->face_count != 0)) {
        param_1->face_capture_enabled = local_18;
      }
      if (param_1->face_count == 0) {
        _DAT_01c039a0 = 0x90;
        _DAT_01c039a4 = 6;
        _DAT_01c00c7c = core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42;
      }
      else {
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        _DAT_01c00c7c = core_dstrender_cpp_renderDepth16BitConditional_FUN_00463ac7;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
                (param_1,*(int *)(param_2 + 4),(int *)&DAT_01b4d76c);
      param_1->face_capture_enabled = iVar4;
    }
  }
  return;
}
