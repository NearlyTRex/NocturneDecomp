// Name: shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
// Address: 00516500
// Address Range: [[00516500, 0051656f]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh *this_ptr,CBoundingBox3D *out_bbox)

#include "nocturne.h"

CBoundingBox3D * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(CLodMesh *this_ptr,CBoundingBox3D *out_bbox)

{
  CLodVert *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pCVar1 = this_ptr->vertex_data;
  if ((CLodVert *)out_bbox != pCVar1) {
    (out_bbox->min).x = (pCVar1->position).x;
    (out_bbox->min).y = (pCVar1->position).y;
    (out_bbox->min).z = (pCVar1->position).z;
  }
  if ((CLodVert *)&out_bbox->max != pCVar1) {
    (out_bbox->max).x = (pCVar1->position).x;
    (out_bbox->max).y = (pCVar1->position).y;
    (out_bbox->max).z = (pCVar1->position).z;
  }
  iVar3 = 1;
  if (1 < this_ptr->vertex_count) {
    iVar4 = 0x4c4;
    do {
      iVar2 = iVar4 + -0x10;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x4c4;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                (out_bbox,(CVector3f *)(this_ptr->vertex_data->lod_workspace + iVar2));
    } while (iVar3 < this_ptr->vertex_count);
  }
  return out_bbox;
}
