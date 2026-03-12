// Name: core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
// Address: 0058f120
// Address Range: [[0058f120, 0058f78c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr,_FILE *file_handle)

{
  CSkeleton *pCVar16;
  byte *pbVar17;
  int iVar1;
  CDeformableModel *pCVar18;
  CVector3f *pCVar19;
  CDeformableModel *pCVar20;
  int iVar21;
  int iVar2;
  int iVar22;
  byte *pbVar23;
  int iVar24;
  int local_38;
  int local_34;
  CDeformableModel *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  ushort *puVar4;
  uint *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  SInputFace *pSVar14;
  float *pfVar15;
  
  __STK();
  pCVar16 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar13 = pCVar16->bone_count;
  _fprintf(file_handle,"// version\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// lodCount,textureSetCount,textureCount,boneCount,partCount\n");
  _fprintf(file_handle,"%d,%d,%d,%d,%d\n");
  _fprintf(file_handle,"// Lod list: VertexCount,triCount,capTriCount,pixelHeight,shadowOnlyFlag\n");
  iVar22 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      _fprintf(file_handle,"%d,%d,%d,%d,%d\n");
      iVar22 = iVar22 + 1;
    } while (iVar22 < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// skeleton file\n");
  _fprintf(file_handle,"%s\n");
  _fprintf(file_handle,"// partList: \"name\", dominantBone, adjPartCount, adjpartList, lods(triCount, capTriCount)\n");
  local_24 = 0;
  pCVar20 = this_ptr;
  if (0 < this_ptr->num_parts) {
    do {
      _fprintf(file_handle,"\"%s\", %d\n");
      for (iVar1 = 0; iVar1 < this_ptr->parts[local_24].adj_part_count; iVar1 = iVar1 + 1) {
        _fprintf(file_handle,"\t%d\n");
      }
      iVar1 = 0;
      pCVar18 = pCVar20;
      if (0 < this_ptr->num_lods) {
        do {
          _fprintf(file_handle,"\t%d, %d\n",pCVar18->parts[0].tri_counts[0]);
          iVar1 = iVar1 + 1;
          pCVar18 = (CDeformableModel *)pCVar18->lod_info;
        } while (iVar1 < this_ptr->num_lods);
      }
      pCVar20 = (CDeformableModel *)(pCVar20->tri_count + 3);
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->num_parts);
  }
  _fprintf(file_handle,"// vertexList: boneCount, boneInfo(index, weight, x,y,z)\n");
  local_28 = 0;
  if (0 < this_ptr->num_lods) {
    local_38 = 0;
    do {
      local_1c = 0;
      for (local_18 = 0; local_18 < *(int *)((int)this_ptr->vertex_count + local_38);
          local_18 = local_18 + 1) {
        pbVar17 = (byte *)(local_1c + *(int *)((int)this_ptr->vertex_data_ptr + local_38));
        _fprintf(file_handle,"%d\n");
        pbVar23 = pbVar17;
        for (iVar1 = 0; iVar1 < (int)(uint)*pbVar17; iVar1 = iVar1 + 1) {
          pbVar1 = pbVar23 + 1;
          pbVar23 = pbVar23 + 1;
          _fprintf(file_handle,"%d, %g, %g,%g,%g\n",(uint)*pbVar1);
        }
        local_1c = local_1c + 0x34;
      }
      local_38 = local_38 + 4;
      local_28 = local_28 + 1;
    } while (local_28 < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// triList: textureIndex, verts(index, u, v)\n");
  local_2c = 0;
  if (0 < this_ptr->num_lods) {
    local_30 = this_ptr;
    do {
      iVar1 = 0;
      iVar21 = 0;
      for (iVar24 = 0; iVar24 < local_30->tri_count[0] + local_30->cap_tri_count[0];
          iVar24 = iVar24 + 1) {
        pSVar14 = local_30->tri_data_ptr[0];
        puVar6 = (ushort *)((int)&pSVar14->u_coord_2 + iVar21);
        puVar7 = (ushort *)((int)&(pSVar14->vertex_indices).vertex_index_2 + iVar21);
        puVar8 = (ushort *)((int)&pSVar14->v_coord_1 + iVar21);
        puVar9 = (ushort *)((int)&pSVar14->u_coord_1 + iVar21);
        puVar10 = (ushort *)((int)&(pSVar14->vertex_indices).vertex_index_1 + iVar21);
        puVar11 = (ushort *)((int)&pSVar14->v_coord_0 + iVar21);
        puVar12 = (ushort *)((int)&pSVar14->u_coord_0 + iVar21);
        puVar4 = (ushort *)((int)&(pSVar14->vertex_indices).vertex_index_0 + iVar21);
        puVar5 = (uint *)((int)local_30->index_data_ptr[0] + iVar1);
        iVar1 = iVar1 + 4;
        iVar21 = iVar21 + 0x12;
        _fprintf(file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",*puVar5,(uint)*puVar4,
                   (uint)*puVar12 << 8,(uint)*puVar11 << 8,(uint)*puVar10,(uint)*puVar9 << 8,
                   (uint)*puVar8 << 8,(uint)*puVar7,(uint)*puVar6 << 8);
      }
      local_30 = (CDeformableModel *)local_30->lod_info;
      local_2c = local_2c + 1;
    } while (local_2c < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// capTriList: matching part\n");
  iVar1 = 0;
  if (0 < this_ptr->num_lods) {
    local_34 = 0;
    do {
      for (iVar2 = 0; iVar2 < *(int *)((int)this_ptr->cap_tri_count + local_34); iVar2 = iVar2 + 1)
      {
        _fprintf(file_handle,"%d\n");
      }
      iVar1 = iVar1 + 1;
      local_34 = local_34 + 4;
    } while (iVar1 < this_ptr->num_lods);
  }
  _fprintf(file_handle,"// texture list\n");
  iVar1 = 0;
  if (0 < this_ptr->num_texture_sets) {
    do {
      iVar2 = 0;
      if (0 < this_ptr->num_textures) {
        do {
          _fprintf(file_handle,"%s\n");
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
      _fprintf(file_handle,"%d\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar13);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::saveStream - error writing file!");
    return;
  }
  return;
}
