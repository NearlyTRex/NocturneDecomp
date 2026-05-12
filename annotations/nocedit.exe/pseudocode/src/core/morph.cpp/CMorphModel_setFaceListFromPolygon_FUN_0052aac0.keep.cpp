// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0
// Address: 0052aac0
// MANUAL RECONSTRUCTION
// Address Range: [[0052aac0, 0052ac97] [0060a11a, 0060a1af]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  int iVar2;
  int iVar4;
  int *local_24;
  int local_20;
  int local_18;
  SMRGLVertex *verts;
  int N;
  int count;
  int start_vertex;

  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_face;
  local_18 = start_face + iVar2;
  if (iVar2 + this_ptr->parts[part_index].face_count < poly_count + local_18) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  start_vertex = this_ptr->parts[part_index].start_vertex;
  local_24 = texture_index_list;
  for (local_20 = 0; local_20 < poly_count; local_20 = local_20 + 1) {
    iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                      (this_ptr,texture_list[*local_24].textures[0].texture_name);
    count = (poly_data->base).count;
    if (2 < count) {
      verts = (SMRGLVertex *)(poly_data + 1);
      for (N = 0; N < count - 2; N = N + 1) {
        this_ptr->faces[local_18].base.base.count = 3;
        if (INT_02f43974 == 0) {
          this_ptr->faces[local_18].vertices[0] = verts[0];
          this_ptr->faces[local_18].vertices[1] = verts[N + 1];
          this_ptr->faces[local_18].vertices[2] = verts[N + 2];
        }
        else {
          this_ptr->faces[local_18].vertices[0] = verts[N + 2];
          this_ptr->faces[local_18].vertices[1] = verts[N + 1];
          this_ptr->faces[local_18].vertices[2] = verts[0];
        }
        this_ptr->faces[local_18].base.base.type = iVar4;
        this_ptr->faces[local_18].vertices[0].vertex_index =
            this_ptr->faces[local_18].vertices[0].vertex_index + start_vertex;
        this_ptr->faces[local_18].vertices[1].vertex_index =
            this_ptr->faces[local_18].vertices[1].vertex_index + start_vertex;
        this_ptr->faces[local_18].vertices[2].vertex_index =
            this_ptr->faces[local_18].vertices[2].vertex_index + start_vertex;
        local_18 = local_18 + 1;
      }
    }
    local_24 = local_24 + 1;
    poly_data = (SMRGLHeaderPrimitive *)((char *)poly_data + poly_stride);
  }
  return;
}
