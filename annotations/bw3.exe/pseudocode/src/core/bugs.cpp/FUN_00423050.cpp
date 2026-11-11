// Name: core_bugs.cpp_FUN_00423050
// Address: 00423050
// Address Range: [[00423050, 004239b7]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00423050(CBugs *param_1,SBug *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_00423050(CBugs *param_1,SBug *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3i *pCVar6;
  CDeformableModel *pCVar7;
  SInputFace *pSVar8;
  int iVar9;
  byte bVar10;
  float afStackY_1154 [1001];
  CMatrix3x4f *pCVar11;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
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
  float local_a8;
  float local_a4;
  float local_a0;
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
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar10 = 0;
  local_1a0 = param_3;
  if (param_2->current_vertex < 0) {
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->dest_vertex;
    local_160 = (float)pCVar6->x * _DAT_005dcbb8;
    local_15c = (float)pCVar6->y * _DAT_005dcbb8;
    local_158 = (float)pCVar6->z * _DAT_005dcbb8;
    core_xform_cpp_transformVector3x4InPlace_FUN_005832e0
              (&stack0xfffffea0,&param_1->model_world_matrix);
    iVar9 = core_bugs_cpp_FUN_00422a00(param_1,param_2,local_1a0,&stack0xfffffea0);
    if (iVar9 != 0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004239c0(param_1,param_2);
      param_2->interp_t = 0.0;
      return;
    }
  }
  else {
    if (param_2->crawl_duration <= 0.0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004239c0(param_1,param_2);
      param_2->interp_t = 0.0;
    }
    else {
      iVar9 = 0;
      local_198 = _DAT_005dcbcc / param_2->crawl_duration;
      while( true ) {
        local_19c = param_2->interp_t;
        fVar2 = local_1a0 * local_198 + param_2->interp_t;
        param_2->interp_t = fVar2;
        if (fVar2 < 1.0) break;
        core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004239c0(param_1,param_2);
        local_1a0 = local_1a0 - (1.0 - local_19c) / local_198;
        param_2->interp_t = param_2->interp_t + _DAT_005b7891;
        if ((local_1a0 < (float)_DAT_005b7899) || (iVar9 = iVar9 + 1, 2 < iVar9)) break;
      }
      if (param_2->interp_t < 0.0) {
        param_2->interp_t = 0.0;
      }
      if (1.0 < param_2->interp_t) {
        param_2->interp_t = 1.0;
      }
    }
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->current_vertex;
    local_13c = (float)pCVar6->x * _DAT_005dcbb8;
    local_138 = (float)pCVar6->y * _DAT_005dcbb8;
    local_134 = (float)pCVar6->z * _DAT_005dcbb8;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->dest_vertex;
    local_e8 = (float)pCVar6->x * _DAT_005dcbb8;
    local_e4 = (float)pCVar6->y * _DAT_005dcbb8;
    local_e0 = (float)pCVar6->z * _DAT_005dcbb8;
    local_154 = local_e8 * param_2->interp_t;
    local_150 = local_e4 * param_2->interp_t;
    local_14c = local_e0 * param_2->interp_t;
    local_dc = local_154;
    (&stack0xffffff28)[(uint)bVar10 * 0xfffffffe] = (&stack0xfffffeb0)[(uint)bVar10 * 0xfffffffe];
    *(uint *)((int)&stack0xffffff2c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xfffffeb4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_18 = 1.0 - param_2->interp_t;
    pCVar11 = &param_1->model_world_matrix;
    local_100 = local_13c * local_18;
    local_fc = local_138 * local_18;
    local_f8 = local_134 * local_18;
    local_88 = local_13c * local_18;
    *(uint *)((int)&stack0xffffff7c + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffff04 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xffffff80 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffff08 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_4c = local_88 + local_dc;
    local_48 = local_84 + local_d8;
    local_44 = local_80 + local_d4;
    local_a0 = local_88 + local_dc;
    *(uint *)((int)&stack0xffffff64 + (uint)bVar10 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar10 * -8);
    *(uint *)(&stack0xffffff68 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    core_xform_cpp_FUN_00583260(&stack0xffffff60,pCVar11);
    local_10c = local_40;
    (&stack0xfffffef8)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffc4 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xfffffefc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (&param_2->position != (CVector3f *)&stack0xfffffef4) {
      (param_2->position).x = local_10c;
      (param_2->position).y = local_108;
      (param_2->position).z = local_104;
    }
    local_58 = local_e8 - local_13c;
    local_54 = local_e4 - local_138;
    local_50 = local_e0 - local_134;
    local_16c = local_e8 - local_13c;
    (&stack0xfffffe98)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffac + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xfffffe9c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffffb0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    iVar9 = param_1->swarm_vertices[param_2->current_vertex].first_edge_data;
    iVar1 = param_1->lod_index;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       (param_1->deformable_model_ptr);
    pSVar8 = pCVar7->tri_data_ptr[iVar1] + iVar9;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer +
             (pSVar8->vertex_indices).vertex_index_0;
    local_13c = (float)pCVar6->x * _DAT_005dcbb8;
    local_138 = (float)pCVar6->y * _DAT_005dcbb8;
    local_134 = (float)pCVar6->z * _DAT_005dcbb8;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer +
             (pSVar8->vertex_indices).vertex_index_1;
    local_e8 = (float)pCVar6->x * _DAT_005dcbb8;
    fVar2 = (float)pCVar6->y * _DAT_005dcbb8;
    local_e4 = fVar2;
    fVar3 = (float)pCVar6->z * _DAT_005dcbb8;
    local_e0 = fVar3;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer +
             (pSVar8->vertex_indices).vertex_index_2;
    local_c4 = (float)pCVar6->x * _DAT_005dcbb8;
    fVar4 = (float)pCVar6->y * _DAT_005dcbb8;
    local_c0 = fVar4;
    fVar5 = (float)pCVar6->z * _DAT_005dcbb8;
    local_bc = fVar5;
    local_64 = local_e8 - local_13c;
    local_60 = fVar2 - local_138;
    local_5c = fVar3 - local_134;
    local_148 = local_c4 - local_e8;
    local_7c = local_64;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xffffff8c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_144 = fVar4 - fVar2;
    local_140 = fVar5 - fVar3;
    local_b8 = local_148;
    (&stack0xffffff4c)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffebc + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xffffff50 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xfffffec0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_d0 = local_78 * local_b0 - local_74 * local_b4;
    local_cc = local_74 * local_b8 - local_7c * local_b0;
    local_c8 = local_7c * local_b4 - local_78 * local_b8;
    local_ac = local_d0;
    (&stack0xffffff58)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff34 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffff38 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_94 = local_a8 * local_164 - local_a4 * local_168;
    local_90 = local_a4 * local_16c - local_ac * local_164;
    local_8c = local_ac * local_168 - local_a8 * local_16c;
    local_130 = local_94;
    (&stack0xfffffed4)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff70 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xfffffed8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xffffff74 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    local_118 = local_168 * local_128 - local_164 * local_12c;
    local_114 = local_164 * local_130 - local_16c * local_128;
    local_110 = local_16c * local_12c - local_168 * local_130;
    local_70 = local_118;
    (&stack0xffffff94)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xfffffeec + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xffffff98 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&stack0xfffffef0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (&stack0xffffff54 != &stack0xffffff90) {
      local_ac = local_70;
      local_a8 = local_6c;
      local_a4 = local_68;
    }
    local_1c = SQRT(local_a4 * local_a4 + local_ac * local_ac + local_a8 * local_a8);
    if (local_1c <= 0.0) {
      local_a8 = 0.0;
      local_ac = 0.0;
      local_a4 = 0.0;
    }
    else {
      fVar2 = 1.0 / local_1c;
      local_ac = local_ac * fVar2;
      local_a8 = local_a8 * fVar2;
      local_a4 = local_a4 * fVar2;
    }
    local_24 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
    if (local_24 <= 0.0) {
      local_12c = 0.0;
      local_130 = 0.0;
      local_128 = 0.0;
    }
    else {
      fVar2 = 1.0 / local_24;
      local_130 = local_130 * fVar2;
      local_12c = local_12c * fVar2;
      local_128 = local_128 * fVar2;
    }
    local_20 = SQRT(local_164 * local_164 + local_16c * local_16c + local_168 * local_168);
    if (local_20 <= 0.0) {
      local_168 = 0.0;
      local_16c = 0.0;
      local_164 = 0.0;
    }
    else {
      fVar2 = 1.0 / local_20;
      local_16c = local_16c * fVar2;
      local_168 = local_168 * fVar2;
      local_164 = local_164 * fVar2;
    }
    local_194 = local_130;
    local_190 = local_ac;
    local_18c = local_16c;
    local_188 = local_12c;
    local_184 = local_a8;
    local_180 = local_168;
    local_17c = local_128;
    local_178 = local_a4;
    local_174 = local_164;
    core_dirmat_cpp_FUN_0045b9b0(&stack0xfffffe6c);
    local_124 = local_f4;
    (&stack0xfffffee0)[(uint)bVar10 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffff10 + (uint)bVar10 * -8);
    *(uint *)((int)&stack0xfffffee4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)(&stack0xffffff14 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (&param_2->orientation != (CVector3f *)&stack0xfffffedc) {
      (param_2->orientation).x = local_124;
      (param_2->orientation).y = local_120;
      (param_2->orientation).z = local_11c;
      return;
    }
  }
  return;
}
