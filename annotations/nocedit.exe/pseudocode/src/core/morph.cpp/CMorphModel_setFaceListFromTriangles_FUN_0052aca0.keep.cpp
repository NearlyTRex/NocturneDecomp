// Name: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0
// Address: 0052aca0
// MANUAL RECONSTRUCTION
// Address Range: [[0052aca0, 0052ae5e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

{
  int iVar2;
  int iVar1;
  int iVar5;
  int local_1c;
  int v;
  int slot;
  SInputFace *src;
  SMRGLPrimitiveTriangle *dst;
  ushort *src_vidx;
  ushort *src_u;
  ushort *src_v;
  int start_vertex;

  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x191;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar1 = this_ptr->parts[part_index].start_face;
  iVar5 = start_face + iVar1;
  if (iVar1 + this_ptr->parts[part_index].face_count < face_count + iVar5) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x198;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  start_vertex = this_ptr->parts[part_index].start_vertex;
  for (local_1c = 0; local_1c < face_count; local_1c = local_1c + 1) {
    iVar2 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                      (this_ptr,texture_sets->textures[index_data[local_1c]].textures[0].texture_name);
    src = &face_data[local_1c];
    dst = &this_ptr->faces[iVar5 + local_1c];
    src_vidx = &src->vertex_indices.vertex_index_0;
    src_u = &src->u_coord_0;
    src_v = &src->v_coord_0;
    dst->base.base.count = 3;
    for (v = 0; v < 3; v = v + 1) {
      slot = (INT_02f43974 != 0) ? 2 - v : v;
      dst->vertices[slot].vertex_index = (uint)src_vidx[v];
      dst->vertices[slot].texture_u = (uint)src_u[v] << 8;
      dst->vertices[slot].texture_v = (uint)src_v[v] << 8;
    }
    dst->base.base.type = iVar2;
    dst->vertices[0].vertex_index = dst->vertices[0].vertex_index + start_vertex;
    dst->vertices[1].vertex_index = dst->vertices[1].vertex_index + start_vertex;
    dst->vertices[2].vertex_index = dst->vertices[2].vertex_index + start_vertex;
  }
  return;
}
