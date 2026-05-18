// Name: core_bugs.cpp_CBugs_updateBugRenderingData_FUN_004268e0
// Address: 004268e0
// Address Range: [[004268e0, 004270ee]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateBugRenderingData_FUN_004268e0(CBugs *this_ptr,SBug *bug_data,float delta_time)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_updateBugRenderingData_FUN_004268e0(CBugs *this_ptr,SBug *bug_data,float delta_time)

{
  int iVar1;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int *piVar5;
  CVector3i *pCVar14;
  CVector3f *pCVar6;
  CDeformableModel *pCVar7;
  CVector3i *pCVar15;
  CVector3f *pCVar16;
  int iVar17;
  ushort *puVar8;
  int iVar9;
  float local_118;
  CMatrix3x3f local_100;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  CVector3f local_a8;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  int local_18;
  float fVar4;
  float fVar2;
  float fVar3;
  float *pfVar1;
  
  local_118 = delta_time;
  if (bug_data->current_vertex < 0) {
    pCVar14 = this_ptr->deformable_model_ptr->skinned_vertices_buffer + bug_data->dest_vertex;
    local_6c.x = (float)pCVar14->x * 0.00390625f;
    local_6c.y = (float)pCVar14->y * 0.00390625f;
    local_6c.z = (float)pCVar14->z * 0.00390625f;
    core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20(&local_6c,&this_ptr->model_world_matrix);
    iVar17 = core_bugs_cpp_CBugs_updateBugPathfinding_FUN_00426420
                       (this_ptr,bug_data,delta_time,&local_6c);
    if (iVar17 != 0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(this_ptr,bug_data);
      bug_data->interp_t = 0.0;
      return;
    }
  }
  else {
    if (bug_data->crawl_duration <= 0.0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(this_ptr,bug_data);
      bug_data->interp_t = 0.0;
    }
    else {
      fVar5 = 1.0f / bug_data->crawl_duration;
      iVar9 = 0;
      while( true ) {
        fVar2 = bug_data->interp_t;
        fVar3 = local_118 * fVar5 + fVar2;
        bug_data->interp_t = fVar3;
        if (fVar3 < 1.0) break;
        core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(this_ptr,bug_data);
        local_118 = local_118 - (1.0 - fVar2) / fVar5;
        bug_data->interp_t = bug_data->interp_t + -1.0f;
        if ((local_118 < (float)0.001) || (iVar9 = iVar9 + 1, 2 < iVar9)) break;
      }
      if (bug_data->interp_t < 0.0) {
        bug_data->interp_t = 0.0;
      }
      if (1.0 < bug_data->interp_t) {
        bug_data->interp_t = 1.0;
      }
    }
    piVar5 = &this_ptr->deformable_model_ptr->skinned_vertices_buffer[bug_data->current_vertex].x;
    fVar9 = (float)*piVar5 * 0.00390625f;
    fVar10 = (float)piVar5[1] * 0.00390625f;
    fVar11 = (float)piVar5[2] * 0.00390625f;
    pCVar14 = this_ptr->deformable_model_ptr->skinned_vertices_buffer + bug_data->dest_vertex;
    fVar6 = (float)pCVar14->x * 0.00390625f;
    fVar7 = (float)pCVar14->y * 0.00390625f;
    fVar8 = (float)pCVar14->z * 0.00390625f;
    pfVar1 = &bug_data->interp_t;
    local_b4 = fVar6 * *pfVar1;
    local_b0 = fVar7 * *pfVar1;
    local_ac = fVar8 * *pfVar1;
    fVar5 = 1.0 - bug_data->interp_t;
    local_3c.x = fVar9 * fVar5 + local_b4;
    local_3c.y = fVar10 * fVar5 + local_b0;
    local_3c.z = fVar11 * fVar5 + local_ac;
    pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_a8,&local_3c,&this_ptr->model_world_matrix);
    if (&bug_data->position != pCVar6) {
      (bug_data->position).x = pCVar6->x;
      (bug_data->position).y = pCVar6->y;
      (bug_data->position).z = pCVar6->z;
    }
    fVar6 = fVar6 - fVar9;
    fVar7 = fVar7 - fVar10;
    fVar8 = fVar8 - fVar11;
    iVar17 = this_ptr->swarm_vertices[bug_data->current_vertex].first_edge_data;
    iVar1 = this_ptr->lod_index;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (this_ptr->deformable_model_ptr);
    puVar8 = (ushort *)(pCVar7->tri_data_ptr[iVar1] + iVar17);
    pCVar14 = this_ptr->deformable_model_ptr->skinned_vertices_buffer + *puVar8;
    pCVar15 = this_ptr->deformable_model_ptr->skinned_vertices_buffer + puVar8[1];
    fVar13 = (float)pCVar15->x * 0.00390625f;
    fVar12 = (float)pCVar15->y * 0.00390625f;
    fVar11 = (float)pCVar15->z * 0.00390625f;
    pCVar15 = this_ptr->deformable_model_ptr->skinned_vertices_buffer + puVar8[2];
    fVar9 = fVar12 - (float)pCVar14->y * 0.00390625f;
    fVar5 = (float)pCVar15->z * 0.00390625f - fVar11;
    fVar11 = fVar11 - (float)pCVar14->z * 0.00390625f;
    fVar10 = (float)pCVar15->x * 0.00390625f - fVar13;
    fVar13 = fVar13 - (float)pCVar14->x * 0.00390625f;
    fVar12 = (float)pCVar15->y * 0.00390625f - fVar12;
    local_bc = fVar11 * fVar10 - fVar13 * fVar5;
    local_b8 = fVar13 * fVar12 - fVar9 * fVar10;
    local_c0 = fVar9 * fVar5 - fVar11 * fVar12;
    fVar5 = local_c0 * fVar7 - local_bc * fVar6;
    fVar9 = local_bc * fVar8 - local_b8 * fVar7;
    fVar10 = local_b8 * fVar6 - local_c0 * fVar8;
    local_cc = fVar7 * fVar5 - fVar8 * fVar10;
    local_c8 = fVar8 * fVar9 - fVar6 * fVar5;
    local_c4 = fVar6 * fVar10 - fVar7 * fVar9;
    if (&local_c0 != &local_cc) {
      local_c0 = local_cc;
      local_bc = local_c8;
      local_b8 = local_c4;
    }
    fVar4 = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
    if (fVar4 <= 0.0) {
      local_bc = 0.0;
      local_c0 = 0.0;
      local_b8 = 0.0;
    }
    else {
      fVar11 = 1.0 / fVar4;
      local_c0 = local_c0 * fVar11;
      local_bc = local_bc * fVar11;
      local_b8 = local_b8 * fVar11;
    }
    fVar11 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10);
    if (fVar11 <= 0.0) {
      local_8c = 0.0;
      local_90 = 0.0;
      local_88 = 0.0;
    }
    else {
      fVar11 = 1.0 / fVar11;
      local_90 = fVar9 * fVar11;
      local_8c = fVar10 * fVar11;
      local_88 = fVar5 * fVar11;
    }
    fVar5 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
    if (fVar5 <= 0.0) {
      local_d4 = 0.0;
      local_d8 = 0.0;
      local_d0 = 0.0;
    }
    else {
      fVar5 = 1.0 / fVar5;
      local_d8 = fVar6 * fVar5;
      local_d4 = fVar7 * fVar5;
      local_d0 = fVar8 * fVar5;
    }
    local_100.m[0].x = local_90;
    local_100.m[0].y = local_c0;
    local_100.m[0].z = local_d8;
    local_100.m[1].x = local_8c;
    local_100.m[1].y = local_bc;
    local_100.m[1].z = local_d4;
    local_100.m[2].x = local_88;
    local_100.m[2].y = local_b8;
    local_100.m[2].z = local_d0;
    pCVar16 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_100,&local_48);
    if (&bug_data->orientation != pCVar16) {
      (bug_data->orientation).x = pCVar16->x;
      (bug_data->orientation).y = pCVar16->y;
      (bug_data->orientation).z = pCVar16->z;
      return;
    }
  }
  return;
}
