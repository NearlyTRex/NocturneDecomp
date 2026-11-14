// Name: core_bugs.cpp_FUN_00426ec0
// Address: 00426ec0
// Address Range: [[00426ec0, 00427827]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00426ec0(CBugs *param_1,SBug *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_00426ec0(CBugs *param_1,SBug *param_2,float param_3)

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
  CVector3f local_160;
  float local_154;
  float local_150 [4];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c [4];
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
  float local_d8 [4];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [8];
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
    local_160.x = (float)pCVar6->x * _DAT_005fd218;
    local_160.y = (float)pCVar6->y * _DAT_005fd218;
    local_160.z = (float)pCVar6->z * _DAT_005fd218;
    core_xform_cpp_transformVector3x4InPlace_FUN_005b5100(&local_160,&param_1->model_world_matrix);
    iVar9 = core_bugs_cpp_FUN_00426870(param_1,param_2,local_1a0,&local_160);
    if (iVar9 != 0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00427830(param_1,param_2);
      param_2->interp_t = 0.0;
      return;
    }
  }
  else {
    if (param_2->crawl_duration <= 0.0) {
      core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00427830(param_1,param_2);
      param_2->interp_t = 0.0;
    }
    else {
      iVar9 = 0;
      local_198 = _DAT_005fd22c / param_2->crawl_duration;
      while( true ) {
        local_19c = param_2->interp_t;
        fVar2 = local_1a0 * local_198 + param_2->interp_t;
        param_2->interp_t = fVar2;
        if (fVar2 < 1.0) break;
        core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00427830(param_1,param_2);
        local_1a0 = local_1a0 - (1.0 - local_19c) / local_198;
        param_2->interp_t = param_2->interp_t + _DAT_005d5158;
        if ((local_1a0 < (float)_DAT_005d5160) || (iVar9 = iVar9 + 1, 2 < iVar9)) break;
      }
      if (param_2->interp_t < 0.0) {
        param_2->interp_t = 0.0;
      }
      if (1.0 < param_2->interp_t) {
        param_2->interp_t = 1.0;
      }
    }
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->current_vertex;
    local_13c = (float)pCVar6->x * _DAT_005fd218;
    local_138 = (float)pCVar6->y * _DAT_005fd218;
    local_134 = (float)pCVar6->z * _DAT_005fd218;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer + param_2->dest_vertex;
    local_e8 = (float)pCVar6->x * _DAT_005fd218;
    local_e4 = (float)pCVar6->y * _DAT_005fd218;
    local_e0 = (float)pCVar6->z * _DAT_005fd218;
    local_154 = local_e8 * param_2->interp_t;
    local_150[0] = local_e4 * param_2->interp_t;
    local_150[1] = local_e0 * param_2->interp_t;
    local_dc = local_154;
    local_d8[(uint)bVar10 * -2] = local_150[(uint)bVar10 * -2];
    local_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_150[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    local_18 = 1.0 - param_2->interp_t;
    pCVar11 = &param_1->model_world_matrix;
    local_100 = local_13c * local_18;
    local_fc = local_138 * local_18;
    local_f8 = local_134 * local_18;
    local_88 = local_13c * local_18;
    local_b4[(uint)bVar10 * -2 + 0xc] = local_12c[(uint)bVar10 * -2 + 0xc];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         local_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    local_4c = local_88 + local_dc;
    local_48 = local_84 + local_d8[0];
    local_44 = local_80 + local_d8[1];
    local_b4[5] = local_88 + local_dc;
    local_b4[(uint)bVar10 * -2 + 6] = local_b4[(uint)bVar10 * -2 + 0x1b];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
    core_xform_cpp_FUN_005b5080(local_b4 + 5,pCVar11);
    local_10c = local_40;
    local_12c[(uint)bVar10 * -2 + 9] = local_b4[(uint)bVar10 * -2 + 0x1e];
    local_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
    if (&param_2->position != (CVector3f *)(local_12c + 8)) {
      (param_2->position).x = local_10c;
      (param_2->position).y = local_108;
      (param_2->position).z = local_104;
    }
    local_58 = local_e8 - local_13c;
    local_54 = local_e4 - local_138;
    local_50 = local_e0 - local_134;
    local_16c = local_e8 - local_13c;
    (&stack0xfffffe98)[(uint)bVar10 * 0xfffffffe] = local_b4[(uint)bVar10 * -2 + 0x18];
    local_150[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -5] =
         local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
    iVar9 = param_1->swarm_vertices[param_2->current_vertex].first_edge_data;
    iVar1 = param_1->lod_index;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       (param_1->deformable_model_ptr);
    pSVar8 = pCVar7->tri_data_ptr[iVar1] + iVar9;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer +
             (pSVar8->vertex_indices).vertex_index_0;
    local_13c = (float)pCVar6->x * _DAT_005fd218;
    local_138 = (float)pCVar6->y * _DAT_005fd218;
    local_134 = (float)pCVar6->z * _DAT_005fd218;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer +
             (pSVar8->vertex_indices).vertex_index_1;
    local_e8 = (float)pCVar6->x * _DAT_005fd218;
    fVar2 = (float)pCVar6->y * _DAT_005fd218;
    local_e4 = fVar2;
    fVar3 = (float)pCVar6->z * _DAT_005fd218;
    local_e0 = fVar3;
    pCVar6 = param_1->deformable_model_ptr->skinned_vertices_buffer +
             (pSVar8->vertex_indices).vertex_index_2;
    local_c4 = (float)pCVar6->x * _DAT_005fd218;
    fVar4 = (float)pCVar6->y * _DAT_005fd218;
    local_c0 = fVar4;
    fVar5 = (float)pCVar6->z * _DAT_005fd218;
    local_bc = fVar5;
    local_64 = local_e8 - local_13c;
    local_60 = fVar2 - local_138;
    local_5c = fVar3 - local_134;
    local_150[2] = local_c4 - local_e8;
    local_7c = local_64;
    local_b4[(uint)bVar10 * -2 + 0xf] = local_b4[(uint)bVar10 * -2 + 0x15];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
    local_150[3] = fVar4 - fVar2;
    local_140 = fVar5 - fVar3;
    local_b8 = local_150[2];
    local_b4[(uint)bVar10 * -2] = local_150[(uint)bVar10 * -2 + 3];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_150[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    local_d8[2] = local_78 * local_b4[1] - local_74 * local_b4[0];
    local_d8[3] = local_74 * local_b8 - local_7c * local_b4[1];
    local_c8 = local_7c * local_b4[0] - local_78 * local_b8;
    local_b4[2] = local_d8[2];
    local_b4[(uint)bVar10 * -2 + 3] = local_d8[(uint)bVar10 * -2 + 3];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    local_94 = local_b4[3] * local_164 - local_b4[4] * local_168;
    local_90 = local_b4[4] * local_16c - local_b4[2] * local_164;
    local_8c = local_b4[2] * local_168 - local_b4[3] * local_16c;
    local_130 = local_94;
    local_12c[(uint)bVar10 * -2] = local_b4[(uint)bVar10 * -2 + 9];
    local_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    local_118 = local_168 * local_12c[1] - local_164 * local_12c[0];
    local_114 = local_164 * local_130 - local_16c * local_12c[1];
    local_110 = local_16c * local_12c[0] - local_168 * local_130;
    local_70 = local_118;
    local_b4[(uint)bVar10 * -2 + 0x12] = local_12c[(uint)bVar10 * -2 + 6];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
         local_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (local_b4 + 2 != local_b4 + 0x11) {
      local_b4[2] = local_70;
      local_b4[3] = local_6c;
      local_b4[4] = local_68;
    }
    local_1c = SQRT(local_b4[4] * local_b4[4] +
                    local_b4[2] * local_b4[2] + local_b4[3] * local_b4[3]);
    if (local_1c <= 0.0) {
      local_b4[3] = 0.0;
      local_b4[2] = 0.0;
      local_b4[4] = 0.0;
    }
    else {
      fVar2 = 1.0 / local_1c;
      local_b4[2] = local_b4[2] * fVar2;
      local_b4[3] = local_b4[3] * fVar2;
      local_b4[4] = local_b4[4] * fVar2;
    }
    local_24 = SQRT(local_12c[1] * local_12c[1] +
                    local_130 * local_130 + local_12c[0] * local_12c[0]);
    if (local_24 <= 0.0) {
      local_12c[0] = 0.0;
      local_130 = 0.0;
      local_12c[1] = 0.0;
    }
    else {
      fVar2 = 1.0 / local_24;
      local_130 = local_130 * fVar2;
      local_12c[0] = local_12c[0] * fVar2;
      local_12c[1] = local_12c[1] * fVar2;
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
    local_190 = local_b4[2];
    local_18c = local_16c;
    local_188 = local_12c[0];
    local_184 = local_b4[3];
    local_180 = local_168;
    local_17c = local_12c[1];
    local_178 = local_b4[4];
    local_174 = local_164;
    core_dirmat_cpp_FUN_0045f840(&stack0xfffffe6c);
    local_12c[2] = local_f4;
    local_12c[(uint)bVar10 * -2 + 3] = local_12c[(uint)bVar10 * -2 + 0xf];
    local_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    if (&param_2->orientation != (CVector3f *)(local_12c + 2)) {
      (param_2->orientation).x = local_12c[2];
      (param_2->orientation).y = local_12c[3];
      (param_2->orientation).z = local_11c;
      return;
    }
  }
  return;
}
