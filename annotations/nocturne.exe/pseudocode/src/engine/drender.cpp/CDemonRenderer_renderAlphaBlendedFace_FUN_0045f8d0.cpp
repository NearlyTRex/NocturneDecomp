// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0
// Address: 0045f8d0
// Address Range: [[0045f8d0, 0045f9c4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0(CDemonRenderer *this_ptr,SInputFace *face)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0(CDemonRenderer *this_ptr,SInputFace *face)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if ((this_ptr->face_count == 0) && (this_ptr->skip_uv_extraction == 0)) {
    pSVar3 = face;
    do {
      uVar2 = (pSVar3->vertex_indices).vertex_index_0;
      this_ptr->vertex_buffer_ptr[uVar2].u = (uint)pSVar3->u_coord_0 << 8;
      puVar1 = &pSVar3->v_coord_0;
      pSVar3 = (SInputFace *)&(pSVar3->vertex_indices).vertex_index_1;
      this_ptr->vertex_buffer_ptr[uVar2].v = (uint)*puVar1 << 8;
    } while (pSVar3 != (SInputFace *)&face->u_coord_0);
  }
  _DAT_01b4d76c = (uint)(face->vertex_indices).vertex_index_0;
  _DAT_01b4d770 = (uint)(face->vertex_indices).vertex_index_1;
  _DAT_01b4d774 = (uint)(face->vertex_indices).vertex_index_2;
  if (this_ptr->face_count == 0) {
    if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a4 = 6;
    _DAT_01c039a0 = 0x2cd;
  }
  else {
    _DAT_01c039a0 = 0;
    _DAT_01c039a4 = 0;
    _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(this_ptr,3,(int *)&DAT_01b4d76c);
  return;
}
