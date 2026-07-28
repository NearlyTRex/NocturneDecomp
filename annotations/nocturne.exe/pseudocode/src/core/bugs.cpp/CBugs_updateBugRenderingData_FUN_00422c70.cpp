// Name: core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70
// Address: 00422c70
// Address Range: [[00422c70, 0042347e]]
// Convention: unknown
// Signature: void core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(CBugs *param_1,SBug *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(CBugs *param_1,SBug *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3i *pCVar5;
  CVector3f *pCVar6;
  CDeformableModel *pCVar7;
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
  
  local_118 = param_3;
  if (param_2->current_vertex < 0) {
    pCVar5 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->dest_vertex;
    local_6c.x = (float)pCVar5->x * _DAT_0059ae98;
    local_6c.y = (float)pCVar5->y * _DAT_0059ae98;
    local_6c.z = (float)pCVar5->z * _DAT_0059ae98;
    core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(&local_6c,&param_1->model_world_matrix);
    iVar9 = core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(param_1,param_2,param_3,&local_6c)
    ;
    if (iVar9 != 0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00423480(param_1,param_2);
      param_2->interp_t = 0.0;
      return;
    }
  }
  else {
    if (param_2->crawl_duration <= 0.0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00423480(param_1,param_2);
      param_2->interp_t = 0.0;
    }
    else {
      fVar4 = 1.0f / param_2->crawl_duration;
      iVar9 = 0;
      while( true ) {
        fVar2 = param_2->interp_t;
        fVar3 = local_118 * fVar4 + fVar2;
        param_2->interp_t = fVar3;
        if (fVar3 < 1.0) break;
        core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00423480(param_1,param_2);
        local_118 = local_118 - (1.0 - fVar2) / fVar4;
        param_2->interp_t = param_2->interp_t + 1.5873523201947252e-314._0_4_;
        if ((local_118 < (float)0.001) || (iVar9 = iVar9 + 1, 2 < iVar9)) break;
      }
      if (param_2->interp_t < 0.0) {
        param_2->interp_t = 0.0;
      }
      if (1.0 < param_2->interp_t) {
        param_2->interp_t = 1.0;
      }
    }
    pCVar5 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->current_vertex;
    local_84 = (float)pCVar5->x * _DAT_0059ae98;
    local_80 = (float)pCVar5->y * _DAT_0059ae98;
    local_7c = (float)pCVar5->z * _DAT_0059ae98;
    pCVar5 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->dest_vertex;
    local_30 = (float)pCVar5->x * _DAT_0059ae98;
    local_2c = (float)pCVar5->y * _DAT_0059ae98;
    local_28 = (float)pCVar5->z * _DAT_0059ae98;
    pfVar1 = &param_2->interp_t;
    local_b4 = local_30 * *pfVar1;
    local_b0 = local_2c * *pfVar1;
    local_ac = local_28 * *pfVar1;
    local_1c = 1.0 - param_2->interp_t;
    local_78 = local_84 * local_1c;
    local_74 = local_80 * local_1c;
    local_70 = local_7c * local_1c;
    local_3c.x = local_78 + local_b4;
    local_3c.y = local_74 + local_b0;
    local_3c.z = local_70 + local_ac;
    pCVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_a8,&local_3c,&param_1->model_world_matrix);
    if (&param_2->position != pCVar6) {
      (param_2->position).x = pCVar6->x;
      (param_2->position).y = pCVar6->y;
      (param_2->position).z = pCVar6->z;
    }
    local_d8 = local_30 - local_84;
    local_d4 = local_2c - local_80;
    local_d0 = local_28 - local_7c;
    iVar9 = param_1->swarm_vertices[param_2->current_vertex].first_edge_data;
    local_18 = param_1->lod_index << 2;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                       (param_1->deformable_model_ptr);
    puVar8 = (ushort *)(*(int *)((int)pCVar7->tri_data_ptr + local_18) + iVar9 * 0x12);
    pCVar5 = param_1->deformable_model_ptr->skinned_vertices_buffer + *puVar8;
    local_84 = (float)pCVar5->x * _DAT_0059ae98;
    local_80 = (float)pCVar5->y * _DAT_0059ae98;
    local_7c = (float)pCVar5->z * _DAT_0059ae98;
    pCVar5 = param_1->deformable_model_ptr->skinned_vertices_buffer + puVar8[1];
    local_30 = (float)pCVar5->x * _DAT_0059ae98;
    local_2c = (float)pCVar5->y * _DAT_0059ae98;
    local_28 = (float)pCVar5->z * _DAT_0059ae98;
    pCVar5 = param_1->deformable_model_ptr->skinned_vertices_buffer + puVar8[2];
    local_60 = (float)pCVar5->x * _DAT_0059ae98;
    local_5c = (float)pCVar5->y * _DAT_0059ae98;
    local_58 = (float)pCVar5->z * _DAT_0059ae98;
    local_50 = local_2c - local_80;
    local_94 = local_58 - local_28;
    local_4c = local_28 - local_7c;
    local_9c = local_60 - local_30;
    local_54 = local_30 - local_84;
    local_98 = local_5c - local_2c;
    local_bc = local_4c * local_9c - local_54 * local_94;
    local_b8 = local_54 * local_98 - local_50 * local_9c;
    local_c0 = local_50 * local_94 - local_4c * local_98;
    local_88 = local_c0 * local_d4 - local_bc * local_d8;
    local_90 = local_bc * local_d0 - local_b8 * local_d4;
    local_8c = local_b8 * local_d8 - local_c0 * local_d0;
    local_cc = local_d4 * local_88 - local_d0 * local_8c;
    local_c8 = local_d0 * local_90 - local_d8 * local_88;
    local_c4 = local_d8 * local_8c - local_d4 * local_90;
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
      fVar4 = 1.0 / fVar4;
      local_c0 = local_c0 * fVar4;
      local_bc = local_bc * fVar4;
      local_b8 = local_b8 * fVar4;
    }
    fVar4 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    if (fVar4 <= 0.0) {
      local_8c = 0.0;
      local_90 = 0.0;
      local_88 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_90 = local_90 * fVar4;
      local_8c = local_8c * fVar4;
      local_88 = local_88 * fVar4;
    }
    fVar4 = SQRT(local_d0 * local_d0 + local_d8 * local_d8 + local_d4 * local_d4);
    if (fVar4 <= 0.0) {
      local_d4 = 0.0;
      local_d8 = 0.0;
      local_d0 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_d8 = local_d8 * fVar4;
      local_d4 = local_d4 * fVar4;
      local_d0 = local_d0 * fVar4;
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
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(&local_100,&local_48);
    if (&param_2->orientation != pCVar6) {
      (param_2->orientation).x = pCVar6->x;
      (param_2->orientation).y = pCVar6->y;
      (param_2->orientation).z = pCVar6->z;
      return;
    }
  }
  return;
}
