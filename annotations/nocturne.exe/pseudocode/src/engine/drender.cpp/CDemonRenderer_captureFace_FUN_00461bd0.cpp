// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
// Address: 00461bd0
// Address Range: [[00461bd0, 00461d41]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  if (this_ptr->face_capture_enabled == 0) {
    iVar6 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(triangle_indices);
    if (iVar6 == 0) {
      return;
    }
  }
  else {
    pSVar1 = this_ptr->vertex_buffer_ptr;
    uVar5 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.screen_x &
            pSVar1[triangle_indices->vertex_index_0].projected_vertex.screen_x &
            pSVar1[triangle_indices->vertex_index_1].projected_vertex.screen_x;
    if (((uVar5 & 0x80000000) != 0) && ((char)uVar5 != '\0')) {
      return;
    }
  }
  if (4999 < _DAT_01b4d7ac) {
    g_CHAR_PTR_01cc4800 = "..\\engine\\drender.cpp";
    g_INT_01cc4804 = 0xa81;
    core_main_c_FUN_004c8440("CDR::captureFace - too many faces captured");
  }
  uVar4 = _DAT_01b4d7b0;
  iVar7 = _DAT_01b4d7ac * 0x20;
  puVar10 = (uint *)(iVar7 + 0x1b4d7c4 + (uint)bVar12 * -8);
  puVar8 = (uint *)((int)triangle_indices + (uint)bVar12 * -8 + 4);
  *(uint *)(iVar7 + 0x1b4d7c0) = *(uint *)triangle_indices;
  puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
  puVar9 = puVar8 + (uint)bVar12 * -2 + 1;
  *puVar10 = *puVar8;
  *puVar11 = *puVar9;
  puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
  *(ushort *)(puVar11 + (uint)bVar12 * -2 + 1 + (uint)bVar12 * -2 + 1) =
       *(ushort *)(puVar9 + (uint)bVar12 * -2 + 1 + (uint)bVar12 * -2 + 1);
  *(uint *)(&DAT_01b4d7b4 + iVar7) = uVar4;
  *(int *)(&DAT_01b4d7b8 + iVar7) = render_flags;
  pSVar1 = this_ptr->vertex_buffer_ptr;
  iVar6 = pSVar1[triangle_indices->vertex_index_0].projected_vertex.transformed_z;
  iVar2 = pSVar1[triangle_indices->vertex_index_1].projected_vertex.transformed_z;
  iVar3 = pSVar1[triangle_indices->vertex_index_2].projected_vertex.transformed_z;
  if ((iVar6 < iVar2) && (iVar6 < iVar3)) {
    *(int *)(iVar7 + 0x1b4d7bc) = iVar6;
    _DAT_01b4d7ac = _DAT_01b4d7ac + 1;
    return;
  }
  if (iVar3 <= iVar2) {
    *(int *)(_DAT_01b4d7ac * 0x20 + 0x1b4d7bc) = iVar3;
    _DAT_01b4d7ac = _DAT_01b4d7ac + 1;
    return;
  }
  *(int *)(_DAT_01b4d7ac * 0x20 + 0x1b4d7bc) = iVar2;
  _DAT_01b4d7ac = _DAT_01b4d7ac + 1;
  return;
}
