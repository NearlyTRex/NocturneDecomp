// Name: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0
// Address: 0052aca0
// Address Range: [[0052aca0, 0052ae5e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

{
  int *piVar1;
  int iVar2;
  SInputFace *pSVar3;
  int iVar4;
  int iVar5;
  SInputFace *local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x191;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_face;
  iVar5 = start_face + iVar2;
  if (iVar2 + this_ptr->parts[part_index].face_count < face_count + iVar5) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x198;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  local_1c = 0;
  local_24 = face_data;
  if (0 < face_count) {
    local_20 = index_data;
    local_14 = iVar5 * 0x3c;
    do {
      iVar2 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,texture_sets->textures[*local_20].textures[0].texture_name);
      iVar5 = 0;
      *(uint *)((int)this_ptr->faces->vertices + local_14 + -0x14) = 3;
      pSVar3 = local_24;
      do {
        iVar4 = iVar5;
        if (INT_02f43974 != 0) {
          iVar4 = 2 - iVar5;
        }
        *(uint *)((int)&this_ptr->faces->vertices[iVar4].vertex_index + local_14) =
             (uint)(pSVar3->vertex_indices).vertex_index_0;
        iVar5 = iVar5 + 1;
        *(uint *)((int)&this_ptr->faces->vertices[iVar4].texture_u + local_14) =
             (uint)pSVar3->u_coord_0 << 8;
        *(uint *)((int)&this_ptr->faces->vertices[iVar4].texture_v + local_14) =
             (uint)pSVar3->v_coord_0 << 8;
        pSVar3 = (SInputFace *)&(pSVar3->vertex_indices).vertex_index_1;
      } while (iVar5 < 3);
      *(int *)((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.type
              + local_14) = iVar2;
      piVar1 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + local_14);
      *piVar1 = *piVar1 + this_ptr->parts[part_index].start_vertex;
      *(int *)((int)&this_ptr->faces->vertices[1].vertex_index + local_14) =
           *(int *)((int)&this_ptr->faces->vertices[1].vertex_index + local_14) +
           this_ptr->parts[part_index].start_vertex;
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      *(int *)((int)&this_ptr->faces->vertices[2].vertex_index + local_14) =
           *(int *)((int)&this_ptr->faces->vertices[2].vertex_index + local_14) +
           this_ptr->parts[part_index].start_vertex;
      local_24 = local_24 + 1;
      local_14 = local_14 + 0x3c;
    } while (local_1c < face_count);
  }
  return;
}
