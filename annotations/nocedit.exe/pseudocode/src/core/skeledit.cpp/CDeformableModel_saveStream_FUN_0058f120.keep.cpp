// Name: core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
// Address: 0058f120
// MANUAL RECONSTRUCTION
// Address Range: [[0058f120, 0058f78c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr,_FILE *file_handle)

{
  CSkeleton *pCVar16;
  byte *pbVar17;
  int iVar1;
  CVector3f *pCVar19;
  int iVar2;
  int iVar22;
  byte *pbVar23;
  int iVar24;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar13;
  SInputFace *pSVar14;
  float *pfVar15;
  
  pCVar16 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar13 = pCVar16->bone_count;
  _fprintf(file_handle,"// version\n");
  _fprintf(file_handle,"%d\n",INT_00681864);
  _fprintf(file_handle,"// lodCount,textureSetCount,textureCount,boneCount,partCount\n");
  _fprintf(file_handle,"%d,%d,%d,%d,%d\n",this_ptr->num_lods,this_ptr->num_texture_sets,this_ptr->num_textures,iVar13,this_ptr->num_parts);
  _fprintf(file_handle,"// Lod list: VertexCount,triCount,capTriCount,pixelHeight,shadowOnlyFlag\n");
  iVar22 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      _fprintf(file_handle,"%d,%d,%d,%d,%d\n",this_ptr->vertex_count[iVar22],this_ptr->tri_count[iVar22],this_ptr->cap_tri_count[iVar22],this_ptr->lod_info[iVar22].pixel_height,this_ptr->lod_info[iVar22].shadow_only_flag);
      iVar22 = iVar22 + 1;
    } while (iVar22 < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// skeleton file\n");
  _fprintf(file_handle,"%s\n",this_ptr->model_name);
  _fprintf(file_handle,"// partList: \"name\", dominantBone, adjPartCount, adjpartList, lods(triCount, capTriCount)\n");
  local_24 = 0;
  if (0 < this_ptr->num_parts) {
    do {
      _fprintf(file_handle,"\"%s\", %d, %d\n",this_ptr->parts[local_24].part_name,this_ptr->parts[local_24].dominant_bone,this_ptr->parts[local_24].adj_part_count);
      for (iVar1 = 0; iVar1 < this_ptr->parts[local_24].adj_part_count; iVar1 = iVar1 + 1) {
        _fprintf(file_handle,"\t%d\n",this_ptr->parts[local_24].adj_part_list[iVar1]);
      }
      for (iVar1 = 0; iVar1 < this_ptr->num_lods; iVar1 = iVar1 + 1) {
        _fprintf(file_handle,"\t%d, %d\n",this_ptr->parts[local_24].tri_counts[iVar1],this_ptr->parts[local_24].cap_tri_counts[iVar1]);
      }
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->num_parts);
  }
  _fprintf(file_handle,"// vertexList: boneCount, boneInfo(index, weight, x,y,z)\n");
  local_28 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      local_1c = 0;
      for (local_18 = 0; local_18 < this_ptr->vertex_count[local_28];
          local_18 = local_18 + 1) {
        pbVar17 = (byte *)((char *)this_ptr->vertex_data_ptr[local_28] + local_1c);
        _fprintf(file_handle,"%d\n",(uint)*pbVar17);
        pbVar23 = pbVar17;
        for (iVar1 = 0; iVar1 < (int)(uint)*pbVar17; iVar1 = iVar1 + 1) {
          pbVar1 = pbVar23 + 1;
          pbVar23 = pbVar23 + 1;
          _fprintf(file_handle,"%d, %g, %g,%g,%g\n",(uint)*pbVar1,
                     (double)*(float *)(pbVar17 + 4 + iVar1 * 4),
                     (double)*(float *)(pbVar17 + 0x10 + iVar1 * 0xc),
                     (double)*(float *)(pbVar17 + 0x14 + iVar1 * 0xc),
                     (double)*(float *)(pbVar17 + 0x18 + iVar1 * 0xc));
        }
        local_1c = local_1c + 0x34;
      }
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// triList: textureIndex, verts(index, u, v)\n");
  local_2c = 0;
  if (0 < this_ptr->num_lods) {
    do {
      pSVar14 = this_ptr->tri_data_ptr[local_2c];
      for (iVar24 = 0; iVar24 < this_ptr->tri_count[local_2c] + this_ptr->cap_tri_count[local_2c];
          iVar24 = iVar24 + 1) {
        _fprintf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
                   this_ptr->index_data_ptr[local_2c][iVar24],
                   (uint)pSVar14[iVar24].vertex_indices.vertex_index_0,
                   (uint)pSVar14[iVar24].u_coord_0 << 8,(uint)pSVar14[iVar24].v_coord_0 << 8,
                   (uint)pSVar14[iVar24].vertex_indices.vertex_index_1,(uint)pSVar14[iVar24].u_coord_1 << 8,
                   (uint)pSVar14[iVar24].v_coord_1 << 8,(uint)pSVar14[iVar24].vertex_indices.vertex_index_2,
                   (uint)pSVar14[iVar24].u_coord_2 << 8,
                   (uint)pSVar14[iVar24].v_coord_2 << 8);
      }
      local_2c = local_2c + 1;
    } while (local_2c < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// capTriList: matching part\n");
  iVar1 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      for (iVar2 = 0; iVar2 < this_ptr->cap_tri_count[iVar1]; iVar2 = iVar2 + 1)
      {
        _fprintf(file_handle,"%d\n",this_ptr->cap_index_ptr[iVar1][iVar2]);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// texture list\n");
  iVar1 = 0;
  if (0 < this_ptr->num_texture_sets) {
    do {
      iVar2 = 0;
      if (0 < this_ptr->num_textures) {
        do {
          _fprintf(file_handle,"%s\n",this_ptr->texture_sets[iVar1].textures[iVar2].textures[0].texture_name);
          iVar2 = iVar2 + 1;
        } while (iVar2 < this_ptr->num_textures);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->num_texture_sets);
  }
  _fprintf(file_handle,"// bone origin list\n");
  iVar1 = 0;
  if (0 < iVar13) {
    pCVar19 = this_ptr->vertex_pool;
    do {
      pfVar2 = &pCVar19->z;
      pfVar3 = &pCVar19->y;
      pfVar15 = &pCVar19->x;
      pCVar19 = pCVar19 + 1;
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,"%g,%g,%g\n",(double)*pfVar15,(double)*pfVar3,(double)*pfVar2);
    } while (iVar1 < iVar13);
  }
  _fprintf(file_handle,"// defaultRootOffsetScale\n");
  _fprintf(file_handle,"%g,%g,%g\n",(double)(this_ptr->model_scale).x,
             (double)(this_ptr->model_scale).y,(double)(this_ptr->model_scale).z);
  _fprintf(file_handle,"// biasUsed\n");
  _fprintf(file_handle,"%g,%g,%g\n",(double)this_ptr->bbox_pool[0].min.x,
             (double)this_ptr->bbox_pool[0].min.y,(double)this_ptr->bbox_pool[0].min.z);
  _fprintf(file_handle,"// partForBoneList\n");
  iVar1 = 0;
  if (0 < iVar13) {
    do {
      _fprintf(file_handle,"%d\n",this_ptr->bone_to_part_map[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar13);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 2987;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::saveStream - error writing file!");
    return;
  }
  return;
}
