// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0
// Address: 0045f5e0
// Address Range: [[0045f5e0, 0045f6f5]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(CDemonRenderer *param_1,STrianglePackedIndices *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(CDemonRenderer *param_1,STrianglePackedIndices *param_2,int param_3)

{
  STrianglePackedIndices *pSVar1;
  ushort uVar2;
  STrianglePackedIndices *pSVar3;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if (param_1->texture_capture_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(param_1,param_2,param_3);
    return;
  }
  if ((param_1->face_count == 0) && (param_1->skip_uv_extraction == 0)) {
    pSVar3 = param_2;
    do {
      uVar2 = pSVar3->vertex_index_0;
      param_1->vertex_buffer_ptr[uVar2].u = (uint)pSVar3[1].vertex_index_0 << 8;
      pSVar1 = pSVar3 + 2;
      pSVar3 = (STrianglePackedIndices *)&pSVar3->vertex_index_1;
      param_1->vertex_buffer_ptr[uVar2].v = (uint)pSVar1->vertex_index_0 << 8;
    } while (pSVar3 != param_2 + 1);
  }
  _DAT_01b4d76c = (uint)param_2->vertex_index_0;
  _DAT_01b4d770 = (uint)param_2->vertex_index_1;
  _DAT_01b4d774 = (uint)param_2->vertex_index_2;
  if (param_1->face_count == 0) {
    if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a0 = param_3;
    _DAT_01c039a4 = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(param_1,3,(int *)&DAT_01b4d76c);
    return;
  }
  _DAT_01c039a0 = 0;
  _DAT_01c039a4 = 0;
  _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(param_1,3,(int *)&DAT_01b4d76c);
  return;
}
