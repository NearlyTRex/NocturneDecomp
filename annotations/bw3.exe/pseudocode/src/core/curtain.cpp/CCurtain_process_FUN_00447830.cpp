// Name: core_curtain.cpp_CCurtain_process_FUN_00447830
// Address: 00447830
// Address Range: [[00447830, 0044805d]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_process_FUN_00447830(CCurtain *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_curtain_cpp_CCurtain_process_FUN_00447830(CCurtain *this_ptr,float delta_time)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  CCurtain *pCVar8;
  SCurtainVertex *pSVar9;
  SCollisionInfo *pSVar10;
  int iVar11;
  byte bVar12;
  float afStackY_1114 [1014];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
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
  float fStack_40;
  SCurtainVertex *pSStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar12 = 0;
  if (((this_ptr->is_visible != 0) || (this_ptr->falling != 0)) &&
     (this_ptr->is_visible = 0, this_ptr->simulate_me != 0)) {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (g_CEventList_PTR_005fba60,this_ptr->let_go_event);
    if (iVar6 != 0) {
      this_ptr->falling = 1;
    }
    iVar6 = _strcmp(this_ptr->let_go_event,"none");
    if ((iVar6 == 0) || (this_ptr->falling != 0)) {
      if (this_ptr->hit_floor != 0) {
        fStack_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                              (&this_ptr->base,0.1,(CVector3f *)0x0);
        this_ptr->floor_height = fStack_14;
      }
      fStack_108 = 99999.0;
      fStack_104 = 99999.0;
      (this_ptr->mesh).inv_delta_time = 1.0 / delta_time;
      fStack_48 = -99999.0;
      fStack_44 = -99999.0;
      fStack_40 = -99999.0;
      fStack_100 = 99999.0;
      iVar6 = 0;
      if (0 < this_ptr->vertex_count) {
        pSVar9 = this_ptr->vertices;
        do {
          if ((pSVar9->world_position).x < fStack_108) {
            fStack_108 = (pSVar9->world_position).x;
          }
          if ((pSVar9->world_position).y < fStack_104) {
            fStack_104 = (pSVar9->world_position).y;
          }
          if ((pSVar9->world_position).z < fStack_100) {
            fStack_100 = (pSVar9->world_position).z;
          }
          if (fStack_48 < (pSVar9->world_position).x) {
            fStack_48 = (pSVar9->world_position).x;
          }
          if (fStack_44 < (pSVar9->world_position).y) {
            fStack_44 = (pSVar9->world_position).y;
          }
          if (fStack_40 < (pSVar9->world_position).z) {
            fStack_40 = (pSVar9->world_position).z;
          }
          iVar6 = iVar6 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar6 < this_ptr->vertex_count);
      }
      iVar6 = 0;
      g_INT_007f8fcc = 0;
      for (iStack_1c = 0; iVar11 = g_INT_007f8fcc, iStack_1c < g_CDemonSetPtr->character_count;
          iStack_1c = iStack_1c + 1) {
        iVar4 = *(int *)((int)g_CDemonSetPtr->characters + iVar6);
        pSVar10 = g_SCollisionInfo_ARRAY_007f9480 + g_INT_007f8fcc;
        if (g_CVector3f_ARRAY_007f8fd0 + g_INT_007f8fcc != (CVector3f *)(iVar4 + 0x20)) {
          g_CVector3f_ARRAY_007f8fd0[g_INT_007f8fcc].x = ((CVector3f *)(iVar4 + 0x20))->x;
          g_CVector3f_ARRAY_007f8fd0[iVar11].y = *(float *)(iVar4 + 0x24);
          g_CVector3f_ARRAY_007f8fd0[iVar11].z = *(float *)(iVar4 + 0x28);
        }
        (pSVar10->ray_query).ray_type = 0;
        iVar7 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x3c))(iVar4,pSVar10);
        if (((iVar7 == 2) && (*(float *)(iVar4 + 0x24) <= fStack_44)) &&
           ((fStack_104 <=
             *(float *)(iVar4 + 0x24) + g_SCollisionInfo_ARRAY_007f9480[iVar11].cylinder_top_y &&
            ((((fStack_108 <=
                *(float *)(iVar4 + 0x20) + g_SCollisionInfo_ARRAY_007f9480[iVar11].cylinder_radius
               && (*(float *)(iVar4 + 0x20) -
                   g_SCollisionInfo_ARRAY_007f9480[iVar11].cylinder_radius <= fStack_48)) &&
              (fStack_100 <=
               *(float *)(iVar4 + 0x28) + g_SCollisionInfo_ARRAY_007f9480[iVar11].cylinder_radius))
             && (*(float *)(iVar4 + 0x28) - g_SCollisionInfo_ARRAY_007f9480[iVar11].cylinder_radius
                 <= fStack_40)))))) {
          g_INT_007f8fcc = g_INT_007f8fcc + 1;
        }
        iVar6 = iVar6 + 4;
      }
      this_ptr->needs_update = 1;
      if ((iVar11 == 0) && (this_ptr->falling == 0)) {
        this_ptr->needs_update = 0;
        if (0 < this_ptr->vertex_count) {
          pSVar9 = this_ptr->vertices;
          iVar6 = 0;
          do {
            if (pSVar9->is_pinned == 0) {
              fVar5 = (pSVar9->velocity).y;
              fVar3 = (pSVar9->velocity).x;
              fVar2 = (pSVar9->velocity).z;
              if ((float)0.10000000000000001 < SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5)) {
                this_ptr->needs_update = 1;
                goto LAB_00447b42;
              }
              fStack_d8 = (pSVar9->initial_position).x - (pSVar9->local_position).x;
              fStack_d4 = (pSVar9->initial_position).y - (pSVar9->local_position).y;
              fStack_d0 = (pSVar9->initial_position).z - (pSVar9->local_position).z;
              fStack_84 = fStack_d8;
              *(float *)((int)&stack0xffffff80 + (uint)bVar12 * -8) =
                   (&stack0xffffff2c)[(uint)bVar12 * 0xfffffffe];
              *(uint *)((int)&stack0xffffff84 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                   *(uint *)((int)&stack0xffffff30 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
              if ((float)0.10000000000000001 <
                  SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80)) {
                this_ptr->needs_update = 1;
                goto LAB_00447b42;
              }
            }
            iVar6 = iVar6 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar6 < this_ptr->vertex_count);
        }
        if (this_ptr->needs_update == 0) {
          return;
        }
      }
LAB_00447b42:
      iVar6 = 0;
      pCVar8 = this_ptr;
      if (0 < this_ptr->vertex_count) {
        do {
          pCVar8->vertices[0].has_collision = 0;
          iVar6 = iVar6 + 1;
          pCVar8 = (CCurtain *)&(pCVar8->base).create_prob;
        } while (iVar6 < this_ptr->vertex_count);
      }
      iStack_20 = 0;
      if (0 < this_ptr->vertex_count) {
        pSVar9 = this_ptr->vertices;
        do {
          fVar5 = (float)pSVar9->is_pinned;
          if (fVar5 == 0.0) {
            fVar2 = (float)0.84999999999999998;
            (pSVar9->velocity).x = (pSVar9->velocity).x * fVar2;
            fVar3 = this_ptr->dampen;
            fStack_dc = fVar5;
            fStack_e0 = fVar5;
            fStack_e4 = fVar5;
            (pSVar9->velocity).z = fVar2 * (pSVar9->velocity).z;
            (pSVar9->velocity).y = fVar3 * (pSVar9->velocity).y;
            fStack_130 = this_ptr->weight;
            if (pSVar9->is_corner != 0) {
              fStack_130 = this_ptr->weight * (float)4;
            }
            fVar2 = fStack_130;
            fVar5 = 1.0 / delta_time;
            fVar3 = fStack_130 * (float)0.03125;
            fStack_cc = -(pSVar9->velocity).x;
            fStack_c8 = -(pSVar9->velocity).y;
            fStack_c4 = -(pSVar9->velocity).z;
            fStack_60 = fStack_cc;
            *(uint *)((int)&stack0xffffffa4 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff38 + (uint)bVar12 * -8);
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff3c + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            fStack_18 = fVar3;
            fVar3 = 1.0 / fVar3;
            fStack_78 = fStack_60 * fVar5;
            fStack_74 = fStack_5c * fVar5;
            fStack_70 = fStack_58 * fVar5;
            fStack_a8 = fStack_60 * fVar5;
            *(uint *)((int)&stack0xffffff5c + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff8c + (uint)bVar12 * -8);
            *(uint *)((int)&stack0xffffff60 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff90 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            fStack_f0 = fStack_a8 * fStack_18;
            fStack_ec = fStack_a4 * fStack_18;
            fStack_e8 = fStack_a0 * fStack_18;
            fStack_6c = fStack_a8 * fStack_18;
            *(uint *)((int)&stack0xffffff98 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff14 + (uint)bVar12 * -8);
            *(uint *)((int)&stack0xffffff9c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff18 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            fStack_90 = fStack_6c * 0.05f;
            fStack_8c = fStack_68 * 0.05f;
            fStack_88 = fStack_64 * 0.05f;
            fStack_114 = fStack_6c * 0.05f;
            *(uint *)((int)&stack0xfffffef0 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff74 + (uint)bVar12 * -8);
            *(uint *)((int)&stack0xfffffef4 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            fStack_e4 = fStack_e4 + fStack_114;
            fStack_120 = fStack_e4 * fVar3;
            fStack_e0 = (fStack_e0 - fVar2) + fStack_110;
            fStack_dc = fStack_dc + fStack_10c;
            fStack_11c = fStack_e0 * fVar3;
            fStack_118 = fStack_dc * fVar3;
            fStack_12c = fStack_120;
            (&stack0xfffffed8)[(uint)bVar12 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffee4 + (uint)bVar12 * -8);
            *(uint *)((int)&stack0xfffffedc + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xfffffee8 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            if (&stack0xffffffac != &stack0xfffffed4) {
              fStack_54 = fStack_12c;
              fStack_50 = fStack_128;
              fStack_4c = fStack_124;
            }
            fStack_fc = fStack_54 * delta_time;
            fStack_f8 = fStack_50 * delta_time;
            fStack_f4 = fStack_4c * delta_time;
            fStack_9c = fStack_54 * delta_time;
            *(float *)((int)&stack0xffffff68 + (uint)bVar12 * -8) =
                 (&stack0xffffff08)[(uint)bVar12 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff6c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            fStack_b4 = (pSVar9->velocity).x + fStack_9c;
            (pSVar9->velocity).x = fStack_b4;
            fStack_b4 = fStack_b4 * delta_time;
            fVar3 = (pSVar9->velocity).y + fStack_98;
            fVar5 = (pSVar9->velocity).z + fStack_94;
            (pSVar9->velocity).y = fVar3;
            (pSVar9->velocity).z = fVar5;
            fStack_b0 = fVar3 * delta_time;
            fStack_ac = fVar5 * delta_time;
            fStack_c0 = fStack_b4;
            *(uint *)((int)&stack0xffffff44 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff50 + (uint)bVar12 * -8);
            *(uint *)((int)&stack0xffffff48 + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
            (pSVar9->world_position).x = (pSVar9->world_position).x + fStack_c0;
            (pSVar9->world_position).y = (pSVar9->world_position).y + fStack_bc;
            (pSVar9->world_position).z = (pSVar9->world_position).z + fStack_b8;
            core_curtain_cpp_CCurtain_solveConstraints_FUN_00446d50(this_ptr,pSVar9);
          }
          pSVar9 = pSVar9 + 1;
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < this_ptr->vertex_count);
      }
      pSStack_24 = this_ptr->vertices;
      iVar6 = 0;
      do {
        iVar11 = 0;
        pSVar9 = pSStack_24;
        if (0 < this_ptr->vertex_count) {
          do {
            if (pSVar9->is_pinned == 0) {
              core_curtain_cpp_CCurtain_solveConstraints_FUN_00446d50(this_ptr,pSVar9);
            }
            iVar11 = iVar11 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar11 < this_ptr->vertex_count);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      iVar6 = 0;
      if (0 < this_ptr->vertex_count) {
        pfVar1 = &this_ptr->friction;
        pSVar9 = this_ptr->vertices;
        do {
          if (pSVar9->has_collision != 0) {
            (pSVar9->velocity).x = *pfVar1 * (pSVar9->velocity).x;
            (pSVar9->velocity).y = *pfVar1 * (pSVar9->velocity).y;
            (pSVar9->velocity).z = *pfVar1 * (pSVar9->velocity).z;
          }
          if (&pSVar9->last_world_position != &pSVar9->world_position) {
            (pSVar9->last_world_position).x = (pSVar9->world_position).x;
            (pSVar9->last_world_position).y = (pSVar9->world_position).y;
            (pSVar9->last_world_position).z = (pSVar9->world_position).z;
          }
          iVar6 = iVar6 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar6 < this_ptr->vertex_count);
      }
      if (this_ptr->hit_floor != 0) {
        iVar6 = 0;
        iVar11 = 0;
        if (0 < this_ptr->vertex_count) {
          pSVar9 = this_ptr->vertices;
          do {
            if ((pSVar9->world_position).y <= this_ptr->floor_height) {
              iVar11 = iVar11 + 1;
            }
            iVar6 = iVar6 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar6 < this_ptr->vertex_count);
        }
        if (iVar11 == this_ptr->vertex_count) {
          this_ptr->simulate_me = 0;
        }
      }
      core_curtain_cpp_CCurtain_updateLocalPositions_FUN_00446c60(this_ptr);
    }
  }
  return;
}
