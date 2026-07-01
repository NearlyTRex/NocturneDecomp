// Name: core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790
// Address: 0058d790
// MANUAL RECONSTRUCTION
// Address Range: [[0058d790, 0058ddd5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel *this_ptr,int lod_index,CLodMesh *lod_mesh,CMatrix3x4f *inverse_matrices)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel *this_ptr,int lod_index,CLodMesh *lod_mesh,CMatrix3x4f *inverse_matrices)

{
  int *piVar1;
  CSkeleton *pCVar4;
  CVector3f *pCVar6;
  int iVar2;
  CLodFace *in_face;
  SInputFace *out_face;
  int *piVar9;
  int iVar3;
  CLodVert *pCLodVert;
  CVector3f *pCVar14;
  int iVar4;
  int iVar16;
  SVert *pfVar18;
  int iVar20;
  float local_538;
  CVector3f local_534;
  float local_528 [250];
  float local_138 [50];
  CVector3f local_70 [2];
  int local_38;
  int local_34;
  int local_30;
  int local_1c;
  float fVar2;
  byte bVar8;
  
  bVar8 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  iVar2 = pCVar4->bone_count;
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (this_ptr,lod_index,lod_mesh->vertex_count,lod_mesh->tri_count,0);
  local_38 = 0;
  do {
    if (this_ptr->vertex_count[lod_index] <= local_38) {
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(lod_mesh,0);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(lod_mesh,1);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(lod_mesh,2);
      iVar3 = 0;
      if (0 < this_ptr->num_parts) {
        do {
          this_ptr->parts[iVar3].cap_tri_counts[lod_index] = 0;
          this_ptr->parts[iVar3].tri_counts[lod_index] = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 < this_ptr->num_parts);
      }
      this_ptr->tri_count[lod_index] = 0;
      this_ptr->cap_tri_count[lod_index] = 0;
      local_30 = 0;
      if (0 < lod_mesh->tri_count) {
        do {
          in_face = lod_mesh->tri_data + local_30;
          out_face = this_ptr->tri_data_ptr[lod_index] + local_30;
          this_ptr->index_data_ptr[lod_index][local_30] = in_face->attribute_indices[0];
          out_face->vertex_indices.vertex_index_0 = (ushort)in_face->vertex_idx_0;
          out_face->vertex_indices.vertex_index_1 = (ushort)in_face->vertex_idx_1;
          out_face->vertex_indices.vertex_index_2 = (ushort)in_face->vertex_idx_2;
          out_face->u_coord_0 = (short)(int)ROUND((double)in_face->uv_coords[0][0] * 256.0);
          out_face->v_coord_0 = (short)(int)ROUND((double)in_face->uv_coords[0][1] * 256.0);
          out_face->u_coord_1 = (short)(int)ROUND((double)in_face->uv_coords[1][0] * 256.0);
          out_face->v_coord_1 = (short)(int)ROUND((double)in_face->uv_coords[1][1] * 256.0);
          out_face->u_coord_2 = (short)(int)ROUND((double)in_face->uv_coords[2][0] * 256.0);
          out_face->v_coord_2 = (short)(int)ROUND((double)in_face->uv_coords[2][1] * 256.0);
          if (in_face->attribute_indices[2] == 0) {
            piVar1 = this_ptr->parts[in_face->attribute_indices[1]].tri_counts + lod_index;
            *piVar1 = *piVar1 + 1;
            this_ptr->tri_count[lod_index] = this_ptr->tri_count[lod_index] + 1;
          }
          else {
            piVar1 = this_ptr->parts[in_face->attribute_indices[1]].cap_tri_counts + lod_index;
            *piVar1 = *piVar1 + 1;
            this_ptr->cap_tri_count[lod_index] = this_ptr->cap_tri_count[lod_index] + 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 < lod_mesh->tri_count);
      }
      iVar20 = 0;
      iVar4 = 0;
      iVar3 = 0;
      if (0 < this_ptr->num_parts) {
        do {
          iVar3 = iVar3 + this_ptr->parts[iVar4].tri_counts[lod_index];
          iVar20 = iVar20 + this_ptr->parts[iVar4].cap_tri_counts[lod_index];
          iVar4 = iVar4 + 1;
        } while (iVar4 < this_ptr->num_parts);
      }
      if ((iVar3 != this_ptr->tri_count[lod_index]) ||
         (iVar20 != this_ptr->cap_tri_count[lod_index])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 2204;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < this_ptr->cap_tri_count[lod_index]) {
        piVar9 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                           (this_ptr->cap_tri_count[lod_index] * 4,"..\\core\\skeledit.cpp",
                            2209);
        this_ptr->cap_index_ptr[lod_index] = piVar9;
        if (piVar9 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 2210;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        local_1c = 0;
        local_34 = 0;
        iVar2 = this_ptr->tri_count[lod_index];
        if (0 < this_ptr->num_parts) {
          do {
            for (iVar4 = 0; iVar4 < this_ptr->parts[local_34].cap_tri_counts[lod_index]; iVar4 = iVar4 + 1)
            {
              this_ptr->cap_index_ptr[lod_index][local_1c] = lod_mesh->tri_data[iVar2].submesh_id;
              iVar2 = iVar2 + 1;
              local_1c = local_1c + 1;
            }
            local_34 = local_34 + 1;
          } while (local_34 < this_ptr->num_parts);
        }
      }
      return;
    }
    pCLodVert = lod_mesh->vertex_data + local_38;
    local_534 = pCLodVert->position;
    memcpy(local_528,(char *)pCLodVert + 0x10,0x3e8);
    memcpy(local_138,pCLodVert->adjacent_edge_indices,0xc8);
    pfVar18 = this_ptr->vertex_data_ptr[lod_index] + local_38;
    fVar2 = 0.0;
    pfVar18->num_bone_influences = 0;
    while (pfVar18->num_bone_influences < 3) {
      iVar16 = -1;
      iVar3 = 0;
      local_538 = 0.0;
      if (0 < iVar2) {
        do {
          if (local_538 < local_528[iVar3]) {
            local_538 = local_528[iVar3];
            iVar16 = iVar3;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      if (local_538 <= 0.0) break;
      pfVar18->bone_indices[pfVar18->num_bone_influences] = (char)iVar16;
      pfVar18->bone_weights[pfVar18->num_bone_influences] = local_538;
      pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (local_70,&local_534,inverse_matrices + iVar16);
      pCVar14 = (&pfVar18->position) + pfVar18->num_bone_influences;
      if (pCVar14 != pCVar6) {
        *pCVar14 = *pCVar6;
      }
      local_528[iVar16] = 0.0;
      fVar2 = local_538 + fVar2;
      pfVar18->num_bone_influences = pfVar18->num_bone_influences + 1;
    }
    if (pfVar18->num_bone_influences == 0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 2134;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find any bones influencing vertex!");
    }
    for (iVar3 = 0; iVar3 < (int)(uint)pfVar18->num_bone_influences; iVar3 = iVar3 + 1) {
      pfVar18->bone_weights[iVar3] = pfVar18->bone_weights[iVar3] / fVar2;
    }
    local_38 = local_38 + 1;
  } while( true );
}
