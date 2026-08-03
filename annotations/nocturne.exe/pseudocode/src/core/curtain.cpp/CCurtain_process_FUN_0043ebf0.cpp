// Name: core_curtain.cpp_CCurtain_process_FUN_0043ebf0
// Address: 0043ebf0
// Address Range: [[0043ebf0, 0043f32e]]
// Convention: unknown
// Signature: void core_curtain_cpp_CCurtain_process_FUN_0043ebf0(CCurtain *param_1,float param_2)

#include "nocturne.h"

void core_curtain_cpp_CCurtain_process_FUN_0043ebf0(CCurtain *param_1,float param_2)

{
  CVector3f *pCVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  CCurtain *pCVar8;
  SCurtainVertex *pSVar9;
  int iVar10;
  SCollisionInfo *pSVar11;
  float fStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  SCurtainVertex *pSStack_30;
  SCurtainVertex *pSStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (((param_1->is_visible != 0) || (param_1->falling != 0)) &&
     (param_1->is_visible = 0, param_1->simulate_me != 0)) {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->let_go_event);
    if (iVar6 != 0) {
      param_1->falling = 1;
    }
    iVar6 = _strcmp(param_1->let_go_event,"none");
    if ((iVar6 == 0) || (param_1->falling != 0)) {
      if (param_1->hit_floor != 0) {
        fStack_14 = (*((param_1->base).vtable._ub)->cylinderGroundCheck)
                              (&param_1->base,0.1,(CVector3f *)0x0);
        param_1->floor_height = fStack_14;
      }
      (param_1->mesh).inv_delta_time = 1.0 / param_2;
      local_ac = 99999.0;
      local_a8 = 99999.0;
      local_a4 = 99999.0;
      local_7c = -99999.0;
      local_78 = -99999.0;
      local_74 = -99999.0;
      iVar6 = 0;
      if (0 < param_1->vertex_count) {
        pSVar9 = param_1->vertices;
        do {
          if ((pSVar9->world_position).x < local_ac) {
            local_ac = (pSVar9->world_position).x;
          }
          if ((pSVar9->world_position).y < local_a8) {
            local_a8 = (pSVar9->world_position).y;
          }
          if ((pSVar9->world_position).z < local_a4) {
            local_a4 = (pSVar9->world_position).z;
          }
          if (local_7c < (pSVar9->world_position).x) {
            local_7c = (pSVar9->world_position).x;
          }
          if (local_78 < (pSVar9->world_position).y) {
            local_78 = (pSVar9->world_position).y;
          }
          if (local_74 < (pSVar9->world_position).z) {
            local_74 = (pSVar9->world_position).z;
          }
          iVar6 = iVar6 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar6 < param_1->vertex_count);
      }
      iStack_28 = 0;
      DAT_0077bdb8 = 0;
      for (iStack_20 = 0; iVar6 = DAT_0077bdb8,
          iStack_20 < g_CDemonSet_PTR_005be368->character_count; iStack_20 = iStack_20 + 1) {
        iVar10 = *(int *)((int)g_CDemonSet_PTR_005be368->characters + iStack_28);
        pSVar11 = g_SCollisionInfo_ARRAY_0077c26c + DAT_0077bdb8;
        if (g_CVector3f_ARRAY_0077bdbc + DAT_0077bdb8 != (CVector3f *)(iVar10 + 0x20)) {
          g_CVector3f_ARRAY_0077bdbc[DAT_0077bdb8].x = ((CVector3f *)(iVar10 + 0x20))->x;
          g_CVector3f_ARRAY_0077bdbc[iVar6].y = *(float *)(iVar10 + 0x24);
          g_CVector3f_ARRAY_0077bdbc[iVar6].z = *(float *)(iVar10 + 0x28);
        }
        (pSVar11->ray_query).ray_type = 0;
        iVar7 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0x34))(iVar10,pSVar11);
        if (((iVar7 == 2) && (*(float *)(iVar10 + 0x24) <= local_78)) &&
           ((local_a8 <=
             *(float *)(iVar10 + 0x24) + g_SCollisionInfo_ARRAY_0077c26c[iVar6].cylinder_top_y &&
            ((((local_ac <=
                *(float *)(iVar10 + 0x20) + g_SCollisionInfo_ARRAY_0077c26c[iVar6].cylinder_radius
               && (*(float *)(iVar10 + 0x20) -
                   g_SCollisionInfo_ARRAY_0077c26c[iVar6].cylinder_radius <= local_7c)) &&
              (local_a4 <=
               *(float *)(iVar10 + 0x28) + g_SCollisionInfo_ARRAY_0077c26c[iVar6].cylinder_radius))
             && (*(float *)(iVar10 + 0x28) - g_SCollisionInfo_ARRAY_0077c26c[iVar6].cylinder_radius
                 <= local_74)))))) {
          DAT_0077bdb8 = DAT_0077bdb8 + 1;
        }
        iStack_28 = iStack_28 + 4;
      }
      param_1->needs_update = 1;
      if ((iVar6 == 0) && (param_1->falling == 0)) {
        param_1->needs_update = 0;
        if (0 < param_1->vertex_count) {
          pSVar9 = param_1->vertices;
          iVar6 = 0;
          do {
            if (pSVar9->is_pinned == 0) {
              fVar5 = (pSVar9->velocity).y;
              fVar3 = (pSVar9->velocity).x;
              fVar4 = (pSVar9->velocity).z;
              if ((float)0.10000000000000001 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5)) {
                param_1->needs_update = 1;
                goto LAB_0043eed9;
              }
              fStack_b8 = (pSVar9->initial_position).x - (pSVar9->local_position).x;
              fStack_b4 = (pSVar9->initial_position).y - (pSVar9->local_position).y;
              fStack_b0 = (pSVar9->initial_position).z - (pSVar9->local_position).z;
              if ((float)0.10000000000000001 <
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4)) {
                param_1->needs_update = 1;
                goto LAB_0043eed9;
              }
            }
            iVar6 = iVar6 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar6 < param_1->vertex_count);
        }
        if (param_1->needs_update == 0) {
          return;
        }
      }
LAB_0043eed9:
      iVar6 = 0;
      pCVar8 = param_1;
      if (0 < param_1->vertex_count) {
        do {
          pCVar8->vertices[0].has_collision = 0;
          iVar6 = iVar6 + 1;
          pCVar8 = (CCurtain *)&(pCVar8->base).create_prob;
        } while (iVar6 < param_1->vertex_count);
      }
      iStack_1c = 0;
      if (0 < param_1->vertex_count) {
        pSVar9 = param_1->vertices;
        do {
          if (pSVar9->is_pinned == 0) {
            fVar3 = (float)0.84999999999999998;
            (pSVar9->velocity).x = (pSVar9->velocity).x * fVar3;
            fVar5 = param_1->dampen;
            (pSVar9->velocity).z = fVar3 * (pSVar9->velocity).z;
            (pSVar9->velocity).y = fVar5 * (pSVar9->velocity).y;
            fStack_e0 = param_1->weight;
            if (pSVar9->is_corner != 0) {
              fStack_e0 = fStack_e0 * (float)4;
            }
            fStack_44 = 1.0 / param_2;
            fStack_18 = fStack_e0 * (float)0.03125;
            fStack_64 = -(pSVar9->velocity).x;
            fStack_60 = -(pSVar9->velocity).y;
            fStack_4c = fStack_64 * fStack_44;
            fStack_50 = 1.0 / fStack_18;
            fStack_48 = fStack_60 * fStack_44;
            fStack_5c = -(pSVar9->velocity).z;
            fStack_44 = fStack_5c * fStack_44;
            fStack_94 = fStack_4c * fStack_18;
            fStack_90 = fStack_48 * fStack_18;
            fStack_8c = fStack_44 * fStack_18;
            fStack_70 = fStack_94 * 5.0811852348229435e-315._0_4_ + 0.0;
            fStack_58 = fStack_70 * fStack_50;
            fStack_6c = (0.0 - fStack_e0) + fStack_90 * 5.0811852348229435e-315._0_4_;
            fStack_68 = fStack_8c * 5.0811852348229435e-315._0_4_ + 0.0;
            fStack_54 = fStack_6c * fStack_50;
            fStack_50 = fStack_68 * fStack_50;
            if (&fStack_c4 != &fStack_58) {
              fStack_c4 = fStack_58;
              fStack_c0 = fStack_54;
              fStack_bc = fStack_50;
            }
            pCVar1 = &pSVar9->velocity;
            pCVar1->x = pCVar1->x + fStack_c4 * param_2;
            (pSVar9->velocity).y = (pSVar9->velocity).y + fStack_c0 * param_2;
            fStack_a0 = pCVar1->x * param_2;
            (pSVar9->velocity).z = (pSVar9->velocity).z + fStack_bc * param_2;
            fStack_9c = (pSVar9->velocity).y * param_2;
            fStack_98 = param_2 * (pSVar9->velocity).z;
            (pSVar9->world_position).x = (pSVar9->world_position).x + fStack_a0;
            (pSVar9->world_position).y = (pSVar9->world_position).y + fStack_9c;
            (pSVar9->world_position).z = (pSVar9->world_position).z + fStack_98;
            core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(param_1,pSVar9);
          }
          pSVar9 = pSVar9 + 1;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < param_1->vertex_count);
      }
      pSStack_30 = param_1->vertices;
      iStack_24 = 0;
      do {
        iVar6 = 0;
        pSVar9 = pSStack_30;
        if (0 < param_1->vertex_count) {
          do {
            if (pSVar9->is_pinned == 0) {
              core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(param_1,pSVar9);
            }
            iVar6 = iVar6 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar6 < param_1->vertex_count);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 3);
      iVar6 = 0;
      if (0 < param_1->vertex_count) {
        pfVar2 = &param_1->friction;
        pSVar9 = param_1->vertices;
        do {
          pSStack_2c = pSVar9;
          if (pSStack_2c->has_collision != 0) {
            (pSStack_2c->velocity).x = *pfVar2 * (pSStack_2c->velocity).x;
            (pSStack_2c->velocity).y = *pfVar2 * (pSStack_2c->velocity).y;
            (pSStack_2c->velocity).z = *pfVar2 * (pSStack_2c->velocity).z;
          }
          if (&pSStack_2c->last_world_position != &pSStack_2c->world_position) {
            (pSStack_2c->last_world_position).x = (pSStack_2c->world_position).x;
            (pSStack_2c->last_world_position).y = (pSStack_2c->world_position).y;
            (pSStack_2c->last_world_position).z = (pSStack_2c->world_position).z;
          }
          iVar6 = iVar6 + 1;
          pSVar9 = pSStack_2c + 1;
        } while (iVar6 < param_1->vertex_count);
      }
      if (param_1->hit_floor != 0) {
        iVar10 = 0;
        iVar6 = 0;
        if (0 < param_1->vertex_count) {
          pSVar9 = param_1->vertices;
          do {
            if ((pSVar9->world_position).y <= param_1->floor_height) {
              iVar6 = iVar6 + 1;
            }
            iVar10 = iVar10 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar10 < param_1->vertex_count);
        }
        if (iVar6 == param_1->vertex_count) {
          param_1->simulate_me = 0;
        }
      }
      core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(param_1);
    }
  }
  return;
}
