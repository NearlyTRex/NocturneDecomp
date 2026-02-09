// Name: core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
// Address: 0058f120
// Address Range: [[0058f120, 0058f78c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel *this_ptr)

{
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
  CSkeleton *pCVar16;
  byte *pbVar17;
  CDeformableModel *pCVar18;
  CVector3f *pCVar19;
  CDeformableModel *pCVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  int iVar24;
  CDeformableModel *in_stack_00000004;
  int local_38;
  int local_34;
  CDeformableModel *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  
  __STK();
  pCVar16 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_00000004);
  iVar13 = pCVar16->bone_count;
  _fprintf((_FILE *)this_ptr,"// version\n");
  _fprintf((_FILE *)this_ptr,"%d\n");
  _fprintf((_FILE *)this_ptr,"// lodCount,textureSetCount,textureCount,boneCount,partCount\n");
  _fprintf((_FILE *)this_ptr,"%d,%d,%d,%d,%d\n");
  _fprintf((_FILE *)this_ptr,"// Lod list: VertexCount,triCount,capTriCount,pixelHeight,shadowOnlyFlag\n");
  iVar22 = 0;
  if (0 < in_stack_00000004->num_lods) {
    do {
      _fprintf((_FILE *)this_ptr,"%d,%d,%d,%d,%d\n");
      iVar22 = iVar22 + 1;
    } while (iVar22 < in_stack_00000004->num_lods);
  }
  _fprintf((_FILE *)this_ptr,"// skeleton file\n");
  _fprintf((_FILE *)this_ptr,"%s\n");
  _fprintf((_FILE *)this_ptr,"// partList: \"name\", dominantBone, adjPartCount, adjpartList, lods(triCount, capTriCount)\n");
  local_24 = 0;
  pCVar20 = in_stack_00000004;
  if (0 < in_stack_00000004->num_parts) {
    do {
      _fprintf((_FILE *)this_ptr,"\"%s\", %d\n");
      for (iVar22 = 0; iVar22 < in_stack_00000004->parts[local_24].adj_part_count;
          iVar22 = iVar22 + 1) {
        _fprintf((_FILE *)this_ptr,"\t%d\n");
      }
      iVar22 = 0;
      pCVar18 = pCVar20;
      if (0 < in_stack_00000004->num_lods) {
        do {
          _fprintf((_FILE *)this_ptr,"\t%d, %d\n",pCVar18->parts[0].tri_counts[0]);
          iVar22 = iVar22 + 1;
          pCVar18 = (CDeformableModel *)pCVar18->lod_info;
        } while (iVar22 < in_stack_00000004->num_lods);
      }
      local_24 = local_24 + 1;
      pCVar20 = (CDeformableModel *)(pCVar20->tri_count + 3);
    } while (local_24 < in_stack_00000004->num_parts);
  }
  _fprintf((_FILE *)this_ptr,"// vertexList: boneCount, boneInfo(index, weight, x,y,z)\n");
  local_28 = 0;
  if (0 < in_stack_00000004->num_lods) {
    local_38 = 0;
    do {
      local_1c = 0;
      for (local_18 = 0; local_18 < *(int *)((int)in_stack_00000004->vertex_count + local_38);
          local_18 = local_18 + 1) {
        pbVar17 = (byte *)(local_1c + *(int *)((int)in_stack_00000004->vertex_data_ptr + local_38));
        _fprintf((_FILE *)this_ptr,"%d\n");
        pbVar23 = pbVar17;
        for (iVar22 = 0; iVar22 < (int)(uint)*pbVar17; iVar22 = iVar22 + 1) {
          pbVar1 = pbVar23 + 1;
          pbVar23 = pbVar23 + 1;
          _fprintf((_FILE *)this_ptr,"%d, %g, %g,%g,%g\n",(uint)*pbVar1);
        }
        local_1c = local_1c + 0x34;
      }
      local_38 = local_38 + 4;
      local_28 = local_28 + 1;
    } while (local_28 < in_stack_00000004->num_lods);
  }
  _fprintf((_FILE *)this_ptr,"// triList: textureIndex, verts(index, u, v)\n");
  local_2c = 0;
  if (0 < in_stack_00000004->num_lods) {
    local_30 = in_stack_00000004;
    do {
      iVar22 = 0;
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
        puVar5 = (uint *)((int)local_30->index_data_ptr[0] + iVar22);
        iVar22 = iVar22 + 4;
        iVar21 = iVar21 + 0x12;
        _fprintf((_FILE *)this_ptr,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",*puVar5,(uint)*puVar4,
                   (uint)*puVar12 << 8,(uint)*puVar11 << 8,(uint)*puVar10,(uint)*puVar9 << 8,
                   (uint)*puVar8 << 8,(uint)*puVar7,(uint)*puVar6 << 8);
      }
      local_30 = (CDeformableModel *)local_30->lod_info;
      local_2c = local_2c + 1;
    } while (local_2c < in_stack_00000004->num_lods);
  }
  _fprintf((_FILE *)this_ptr,"// capTriList: matching part\n");
  iVar22 = 0;
  if (0 < in_stack_00000004->num_lods) {
    local_34 = 0;
    do {
      for (iVar21 = 0; iVar21 < *(int *)((int)in_stack_00000004->cap_tri_count + local_34);
          iVar21 = iVar21 + 1) {
        _fprintf((_FILE *)this_ptr,"%d\n");
      }
      iVar22 = iVar22 + 1;
      local_34 = local_34 + 4;
    } while (iVar22 < in_stack_00000004->num_lods);
  }
  _fprintf((_FILE *)this_ptr,"// texture list\n");
  iVar22 = 0;
  if (0 < in_stack_00000004->num_texture_sets) {
    do {
      iVar21 = 0;
      if (0 < in_stack_00000004->num_textures) {
        do {
          _fprintf((_FILE *)this_ptr,"%s\n");
          iVar21 = iVar21 + 1;
        } while (iVar21 < in_stack_00000004->num_textures);
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < in_stack_00000004->num_texture_sets);
  }
  _fprintf((_FILE *)this_ptr,"// bone origin list\n");
  iVar22 = 0;
  if (0 < iVar13) {
    pCVar19 = in_stack_00000004->vertex_pool;
    do {
      pfVar2 = &pCVar19->z;
      pfVar3 = &pCVar19->y;
      pfVar15 = &pCVar19->x;
      pCVar19 = pCVar19 + 1;
      iVar22 = iVar22 + 1;
      _fprintf((_FILE *)this_ptr,"%g,%g,%g\n",(double)*pfVar15,(double)*pfVar3,(double)*pfVar2
                );
    } while (iVar22 < iVar13);
  }
  _fprintf((_FILE *)this_ptr,"// defaultRootOffsetScale\n");
  _fprintf((_FILE *)this_ptr,"%g,%g,%g\n",(double)(in_stack_00000004->model_scale).x,
             (double)(in_stack_00000004->model_scale).y,(double)(in_stack_00000004->model_scale).z);
  _fprintf((_FILE *)this_ptr,"// biasUsed\n");
  _fprintf((_FILE *)this_ptr,"%g,%g,%g\n",(double)in_stack_00000004->bbox_pool[0].min.x,
             (double)in_stack_00000004->bbox_pool[0].min.y,
             (double)in_stack_00000004->bbox_pool[0].min.z);
  _fprintf((_FILE *)this_ptr,"// partForBoneList\n");
  iVar22 = 0;
  if (0 < iVar13) {
    do {
      _fprintf((_FILE *)this_ptr,"%d\n");
      iVar22 = iVar22 + 1;
    } while (iVar22 < iVar13);
  }
  if ((this_ptr->lod_info[1].pixel_height & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::saveStream - error writing file!");
    return;
  }
  return;
}
