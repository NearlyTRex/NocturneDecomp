// Name: core_curtain.cpp_CCurtain_process_FUN_0044b6f0
// Address: 0044b6f0
// Address Range: [[0044b6f0, 0044bf1d]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044b6f0(CCurtain *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044b6f0(CCurtain *this_ptr,float delta_time)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CCurtain *pCVar7;
  SCurtainVertex *pSVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  if (((this_ptr->is_visible != 0) || (this_ptr->falling != 0)) &&
     (this_ptr->is_visible = 0, this_ptr->simulate_me != 0)) {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->let_go_event);
    if (iVar5 != 0) {
      this_ptr->falling = 1;
    }
    iVar5 = _strcmp(this_ptr->let_go_event,(char *)0x5d7412);
    if ((iVar5 == 0) || (this_ptr->falling != 0)) {
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
      iVar5 = 0;
      if (0 < this_ptr->vertex_count) {
        pSVar8 = this_ptr->vertices;
        do {
          if ((pSVar8->world_position).x < fStack_108) {
            fStack_108 = (pSVar8->world_position).x;
          }
          if ((pSVar8->world_position).y < fStack_104) {
            fStack_104 = (pSVar8->world_position).y;
          }
          if ((pSVar8->world_position).z < fStack_100) {
            fStack_100 = (pSVar8->world_position).z;
          }
          if (fStack_48 < (pSVar8->world_position).x) {
            fStack_48 = (pSVar8->world_position).x;
          }
          if (fStack_44 < (pSVar8->world_position).y) {
            fStack_44 = (pSVar8->world_position).y;
          }
          if (fStack_40 < (pSVar8->world_position).z) {
            fStack_40 = (pSVar8->world_position).z;
          }
          iVar5 = iVar5 + 1;
          pSVar8 = pSVar8 + 1;
        } while (iVar5 < this_ptr->vertex_count);
      }
      iVar5 = 0;
      _DAT_007dc718 = 0;
      for (iStack_1c = 0; iVar10 = _DAT_007dc718, iStack_1c < g_CDemonSetPtr->character_count;
          iStack_1c = iStack_1c + 1) {
        iVar9 = _DAT_007dc718 * 0x28;
        iVar6 = _DAT_007dc718 * 0xc;
        iVar10 = *(int *)((int)g_CDemonSetPtr->characters + iVar5);
        if ((uint *)(iVar6 + 0x7dc71c) != (uint *)(iVar10 + 0x20)) {
          *(uint *)(iVar6 + 0x7dc71c) = *(uint *)(iVar10 + 0x20);
          *(uint *)(iVar6 + 0x7dc720) = *(uint *)(iVar10 + 0x24);
          *(uint *)(iVar6 + 0x7dc724) = *(uint *)(iVar10 + 0x28);
        }
        *(uint *)(iVar9 + 0x7dcbcc) = 0;
        iVar6 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x3c))
                          (iVar10,(uint *)(iVar9 + 0x7dcbcc));
        if (((iVar6 == 2) && (*(float *)(iVar10 + 0x24) <= fStack_44)) &&
           ((fStack_104 <= *(float *)(iVar10 + 0x24) + *(float *)(iVar9 + 0x7dcbe4) &&
            ((((fStack_108 <= *(float *)(iVar10 + 0x20) + *(float *)(iVar9 + 0x7dcbe8) &&
               (*(float *)(iVar10 + 0x20) - *(float *)(iVar9 + 0x7dcbe8) <= fStack_48)) &&
              (fStack_100 <= *(float *)(iVar10 + 0x28) + *(float *)(iVar9 + 0x7dcbe8))) &&
             (*(float *)(iVar10 + 0x28) - *(float *)(iVar9 + 0x7dcbe8) <= fStack_40)))))) {
          _DAT_007dc718 = _DAT_007dc718 + 1;
        }
        iVar5 = iVar5 + 4;
      }
      this_ptr->needs_update = 1;
      if ((iVar10 == 0) && (this_ptr->falling == 0)) {
        this_ptr->needs_update = 0;
        if (0 < this_ptr->vertex_count) {
          pSVar8 = this_ptr->vertices;
          iVar5 = 0;
          do {
            if (pSVar8->is_pinned == 0) {
              fVar4 = (pSVar8->velocity).y;
              fVar3 = (pSVar8->velocity).x;
              fVar2 = (pSVar8->velocity).z;
              if ((float)_DAT_005d743a < SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4)) {
                this_ptr->needs_update = 1;
                goto LAB_0044ba02;
              }
              fStack_d8 = (pSVar8->initial_position).x - (pSVar8->local_position).x;
              fStack_d4 = (pSVar8->initial_position).y - (pSVar8->local_position).y;
              fStack_d0 = (pSVar8->initial_position).z - (pSVar8->local_position).z;
              fStack_84 = fStack_d8;
              *(float *)((int)&stack0xffffff80 + (uint)bVar11 * -8) =
                   (&stack0xffffff2c)[(uint)bVar11 * 0xfffffffe];
              *(uint *)((int)&stack0xffffff84 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                   *(uint *)((int)&stack0xffffff30 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
              if ((float)_DAT_005d743a <
                  SQRT(fStack_7c * fStack_7c + fStack_84 * fStack_84 + fStack_80 * fStack_80)) {
                this_ptr->needs_update = 1;
                goto LAB_0044ba02;
              }
            }
            iVar5 = iVar5 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar5 < this_ptr->vertex_count);
        }
        if (this_ptr->needs_update == 0) {
          return;
        }
      }
LAB_0044ba02:
      iVar5 = 0;
      pCVar7 = this_ptr;
      if (0 < this_ptr->vertex_count) {
        do {
          pCVar7->vertices[0].has_collision = 0;
          iVar5 = iVar5 + 1;
          pCVar7 = (CCurtain *)&(pCVar7->base).create_prob;
        } while (iVar5 < this_ptr->vertex_count);
      }
      iStack_20 = 0;
      if (0 < this_ptr->vertex_count) {
        pSVar8 = this_ptr->vertices;
        do {
          fVar4 = (float)pSVar8->is_pinned;
          if (fVar4 == 0.0) {
            fVar2 = (float)_DAT_005d741a;
            (pSVar8->velocity).x = (pSVar8->velocity).x * fVar2;
            fVar3 = this_ptr->dampen;
            fStack_dc = fVar4;
            fStack_e0 = fVar4;
            fStack_e4 = fVar4;
            (pSVar8->velocity).z = fVar2 * (pSVar8->velocity).z;
            (pSVar8->velocity).y = fVar3 * (pSVar8->velocity).y;
            fStack_130 = this_ptr->weight;
            if (pSVar8->is_corner != 0) {
              fStack_130 = this_ptr->weight * (float)_DAT_005d7422;
            }
            fVar2 = fStack_130;
            fVar4 = 1.0 / delta_time;
            fVar3 = fStack_130 * (float)_DAT_005d742a;
            fStack_cc = -(pSVar8->velocity).x;
            fStack_c8 = -(pSVar8->velocity).y;
            fStack_c4 = -(pSVar8->velocity).z;
            fStack_60 = fStack_cc;
            *(uint *)((int)&stack0xffffffa4 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff38 + (uint)bVar11 * -8);
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff3c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fStack_18 = fVar3;
            fVar3 = 1.0 / fVar3;
            fStack_78 = fStack_60 * fVar4;
            fStack_74 = fStack_5c * fVar4;
            fStack_70 = fStack_58 * fVar4;
            fStack_a8 = fStack_60 * fVar4;
            *(uint *)((int)&stack0xffffff5c + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff8c + (uint)bVar11 * -8);
            *(uint *)((int)&stack0xffffff60 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff90 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fStack_f0 = fStack_a8 * fStack_18;
            fStack_ec = fStack_a4 * fStack_18;
            fStack_e8 = fStack_a0 * fStack_18;
            fStack_6c = fStack_a8 * fStack_18;
            *(uint *)((int)&stack0xffffff98 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff14 + (uint)bVar11 * -8);
            *(uint *)((int)&stack0xffffff9c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff18 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fStack_90 = fStack_6c * _DAT_005d7432;
            fStack_8c = fStack_68 * _DAT_005d7432;
            fStack_88 = fStack_64 * _DAT_005d7432;
            fStack_114 = fStack_6c * _DAT_005d7432;
            *(uint *)((int)&stack0xfffffef0 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff74 + (uint)bVar11 * -8);
            *(uint *)((int)&stack0xfffffef4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fStack_e4 = fStack_e4 + fStack_114;
            fStack_120 = fStack_e4 * fVar3;
            fStack_e0 = (fStack_e0 - fVar2) + fStack_110;
            fStack_dc = fStack_dc + fStack_10c;
            fStack_11c = fStack_e0 * fVar3;
            fStack_118 = fStack_dc * fVar3;
            fStack_12c = fStack_120;
            (&stack0xfffffed8)[(uint)bVar11 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xfffffee4 + (uint)bVar11 * -8);
            *(uint *)((int)&stack0xfffffedc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xfffffee8 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            if (&stack0xffffffac != &stack0xfffffed4) {
              fStack_54 = fStack_12c;
              fStack_50 = fStack_128;
              fStack_4c = fStack_124;
            }
            fStack_fc = fStack_54 * delta_time;
            fStack_f8 = fStack_50 * delta_time;
            fStack_f4 = fStack_4c * delta_time;
            fStack_9c = fStack_54 * delta_time;
            *(float *)((int)&stack0xffffff68 + (uint)bVar11 * -8) =
                 (&stack0xffffff08)[(uint)bVar11 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff6c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            fStack_b4 = (pSVar8->velocity).x + fStack_9c;
            (pSVar8->velocity).x = fStack_b4;
            fStack_b4 = fStack_b4 * delta_time;
            fVar3 = (pSVar8->velocity).y + fStack_98;
            fVar4 = (pSVar8->velocity).z + fStack_94;
            (pSVar8->velocity).y = fVar3;
            (pSVar8->velocity).z = fVar4;
            fStack_b0 = fVar3 * delta_time;
            fStack_ac = fVar4 * delta_time;
            fStack_c0 = fStack_b4;
            *(uint *)((int)&stack0xffffff44 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff50 + (uint)bVar11 * -8);
            *(uint *)((int)&stack0xffffff48 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            (pSVar8->world_position).x = (pSVar8->world_position).x + fStack_c0;
            (pSVar8->world_position).y = (pSVar8->world_position).y + fStack_bc;
            (pSVar8->world_position).z = (pSVar8->world_position).z + fStack_b8;
            core_curtain_cpp_CCurtain_solveConstraints_FUN_0044ac10(this_ptr,pSVar8);
          }
          pSVar8 = pSVar8 + 1;
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < this_ptr->vertex_count);
      }
      pSStack_24 = this_ptr->vertices;
      iVar5 = 0;
      do {
        iVar10 = 0;
        pSVar8 = pSStack_24;
        if (0 < this_ptr->vertex_count) {
          do {
            if (pSVar8->is_pinned == 0) {
              core_curtain_cpp_CCurtain_solveConstraints_FUN_0044ac10(this_ptr,pSVar8);
            }
            iVar10 = iVar10 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar10 < this_ptr->vertex_count);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar5 = 0;
      if (0 < this_ptr->vertex_count) {
        pfVar1 = &this_ptr->friction;
        pSVar8 = this_ptr->vertices;
        do {
          if (pSVar8->has_collision != 0) {
            (pSVar8->velocity).x = *pfVar1 * (pSVar8->velocity).x;
            (pSVar8->velocity).y = *pfVar1 * (pSVar8->velocity).y;
            (pSVar8->velocity).z = *pfVar1 * (pSVar8->velocity).z;
          }
          if (&pSVar8->last_world_position != &pSVar8->world_position) {
            (pSVar8->last_world_position).x = (pSVar8->world_position).x;
            (pSVar8->last_world_position).y = (pSVar8->world_position).y;
            (pSVar8->last_world_position).z = (pSVar8->world_position).z;
          }
          iVar5 = iVar5 + 1;
          pSVar8 = pSVar8 + 1;
        } while (iVar5 < this_ptr->vertex_count);
      }
      if (this_ptr->hit_floor != 0) {
        iVar5 = 0;
        iVar10 = 0;
        if (0 < this_ptr->vertex_count) {
          pSVar8 = this_ptr->vertices;
          do {
            if ((pSVar8->world_position).y <= this_ptr->floor_height) {
              iVar10 = iVar10 + 1;
            }
            iVar5 = iVar5 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar5 < this_ptr->vertex_count);
        }
        if (iVar10 == this_ptr->vertex_count) {
          this_ptr->simulate_me = 0;
        }
      }
      core_curtain_cpp_FUN_0044ab20(this_ptr);
    }
  }
  return;
}
