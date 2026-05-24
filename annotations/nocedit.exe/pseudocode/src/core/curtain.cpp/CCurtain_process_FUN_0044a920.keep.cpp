// Name: core_curtain.cpp_CCurtain_process_FUN_0044a920
// Address: 0044a920
// MANUAL RECONSTRUCTION
// Address Range: [[0044a920, 0044b05e]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044a920(CCurtain *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044a920(CCurtain *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *iVar2;
  float fVar6;
  int iVar6;
  int iVar8;
  int iVar7;
  SCurtainVertex *pSVar9;
  SCurtainVertex *pSVar10;
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
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  CVector3f *pCVar1;
  float fVar4;
  float fVar5;
  float *pfVar2;
  float fVar3;
  
  if (((this_ptr->is_visible != 0) || (this_ptr->falling != 0)) &&
     (this_ptr->is_visible = 0, this_ptr->simulate_me != 0)) {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->let_go_event);
    if (iVar6 != 0) {
      this_ptr->falling = 1;
    }
    iVar8 = _strcmp(this_ptr->let_go_event,"none");
    if ((iVar8 == 0) || (this_ptr->falling != 0)) {
      if (this_ptr->hit_floor != 0) {
        fStack_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                              (&this_ptr->base,0.1,(CVector3f *)0x0);
        this_ptr->floor_height = fStack_14;
      }
      (this_ptr->mesh).inv_delta_time = 1.0 / delta_time;
      local_ac = 99999.0;
      local_a8 = 99999.0;
      local_a4 = 99999.0;
      local_7c = -99999.0;
      local_78 = -99999.0;
      local_74 = -99999.0;
      iVar8 = 0;
      if (0 < this_ptr->vertex_count) {
        pSVar10 = this_ptr->vertices;
        do {
          if ((pSVar10->world_position).x < local_ac) {
            local_ac = (pSVar10->world_position).x;
          }
          if ((pSVar10->world_position).y < local_a8) {
            local_a8 = (pSVar10->world_position).y;
          }
          if ((pSVar10->world_position).z < local_a4) {
            local_a4 = (pSVar10->world_position).z;
          }
          if (local_7c < (pSVar10->world_position).x) {
            local_7c = (pSVar10->world_position).x;
          }
          if (local_78 < (pSVar10->world_position).y) {
            local_78 = (pSVar10->world_position).y;
          }
          if (local_74 < (pSVar10->world_position).z) {
            local_74 = (pSVar10->world_position).z;
          }
          iVar8 = iVar8 + 1;
          pSVar10 = pSVar10 + 1;
        } while (iVar8 < this_ptr->vertex_count);
      }
      INT_008879bc = 0;
      for (iStack_20 = 0; iVar8 = INT_008879bc, iStack_20 < g_CDemonSetPtr->character_count;
          iStack_20 = iStack_20 + 1) {
        iVar2 = (CDemonActor *)g_CDemonSetPtr->characters[iStack_20];
        pSVar11 = SCollisionInfo_ARRAY_00887e70 + INT_008879bc;
        if (CVector3f_ARRAY_008879c0 + INT_008879bc != &iVar2->location.position) {
          CVector3f_ARRAY_008879c0[INT_008879bc] = iVar2->location.position;
        }
        pSVar11->ray_type = 0;
        iVar7 = (*(iVar2->vtable._ub)->getCollisionType)(iVar2,pSVar11);
        if (((iVar7 == 2) && (iVar2->location.position.y <= local_78)) &&
           ((local_a8 <=
             iVar2->location.position.y + SCollisionInfo_ARRAY_00887e70[iVar8].cylinder_top_y &&
            ((((local_ac <=
                iVar2->location.position.x + SCollisionInfo_ARRAY_00887e70[iVar8].cylinder_radius &&
               (iVar2->location.position.x - SCollisionInfo_ARRAY_00887e70[iVar8].cylinder_radius <=
                local_7c)) &&
              (local_a4 <=
               iVar2->location.position.z + SCollisionInfo_ARRAY_00887e70[iVar8].cylinder_radius)) &&
             (iVar2->location.position.z - SCollisionInfo_ARRAY_00887e70[iVar8].cylinder_radius <=
              local_74)))))) {
          INT_008879bc = INT_008879bc + 1;
        }
      }
      this_ptr->needs_update = 1;
      if ((iVar8 == 0) && (this_ptr->falling == 0)) {
        this_ptr->needs_update = 0;
        if (0 < this_ptr->vertex_count) {
          pSVar10 = this_ptr->vertices;
          iVar8 = 0;
          do {
            if (pSVar10->is_pinned == 0) {
              fVar1 = (pSVar10->velocity).y;
              fVar3 = (pSVar10->velocity).x;
              fVar4 = (pSVar10->velocity).z;
              if ((float)0.10000000000000001 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1)) {
                this_ptr->needs_update = 1;
                goto LAB_0044ac09;
              }
              fStack_b8 = (pSVar10->initial_position).x - (pSVar10->local_position).x;
              fStack_b4 = (pSVar10->initial_position).y - (pSVar10->local_position).y;
              fStack_b0 = (pSVar10->initial_position).z - (pSVar10->local_position).z;
              if ((float)0.10000000000000001 <
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4)) {
                this_ptr->needs_update = 1;
                goto LAB_0044ac09;
              }
            }
            iVar8 = iVar8 + 1;
            pSVar10 = pSVar10 + 1;
          } while (iVar8 < this_ptr->vertex_count);
        }
        if (this_ptr->needs_update == 0) {
          return;
        }
      }
LAB_0044ac09:
      iVar8 = 0;
      if (0 < this_ptr->vertex_count) {
        do {
          this_ptr->vertices[iVar8].has_collision = 0;
          iVar8 = iVar8 + 1;
        } while (iVar8 < this_ptr->vertex_count);
      }
      iStack_1c = 0;
      if (0 < this_ptr->vertex_count) {
        pSVar10 = this_ptr->vertices;
        do {
          if (pSVar10->is_pinned == 0) {
            fVar1 = (float)0.84999999999999998;
            (pSVar10->velocity).x = (pSVar10->velocity).x * fVar1;
            fVar5 = this_ptr->dampen;
            (pSVar10->velocity).z = fVar1 * (pSVar10->velocity).z;
            (pSVar10->velocity).y = fVar5 * (pSVar10->velocity).y;
            fStack_e0 = this_ptr->weight;
            if (pSVar10->is_corner != 0) {
              fStack_e0 = fStack_e0 * (float)4;
            }
            fVar6 = 1.0 / delta_time;
            fStack_18 = fStack_e0 * (float)0.03125;
            fStack_64 = -(pSVar10->velocity).x;
            fStack_60 = -(pSVar10->velocity).y;
            fStack_4c = fStack_64 * fVar6;
            fVar1 = 1.0 / fStack_18;
            fStack_48 = fStack_60 * fVar6;
            fStack_5c = -(pSVar10->velocity).z;
            fStack_44 = fStack_5c * fVar6;
            fStack_94 = fStack_4c * fStack_18;
            fStack_90 = fStack_48 * fStack_18;
            fStack_8c = fStack_44 * fStack_18;
            fStack_70 = fStack_94 * 0.05f + 0.0;
            fStack_58 = fStack_70 * fVar1;
            fStack_6c = (0.0 - fStack_e0) + fStack_90 * 0.05f;
            fStack_68 = fStack_8c * 0.05f + 0.0;
            fStack_54 = fStack_6c * fVar1;
            fStack_50 = fStack_68 * fVar1;
            fStack_c4 = fStack_58;
            fStack_c0 = fStack_54;
            fStack_bc = fStack_50;
            pCVar1 = &pSVar10->velocity;
            pCVar1->x = pCVar1->x + fStack_c4 * delta_time;
            (pSVar10->velocity).y = (pSVar10->velocity).y + fStack_c0 * delta_time;
            fStack_a0 = pCVar1->x * delta_time;
            (pSVar10->velocity).z = (pSVar10->velocity).z + fStack_bc * delta_time;
            fStack_9c = (pSVar10->velocity).y * delta_time;
            fStack_98 = delta_time * (pSVar10->velocity).z;
            (pSVar10->world_position).x = (pSVar10->world_position).x + fStack_a0;
            (pSVar10->world_position).y = (pSVar10->world_position).y + fStack_9c;
            (pSVar10->world_position).z = (pSVar10->world_position).z + fStack_98;
            core_curtain_cpp_CCurtain_solveConstraints_FUN_00449fc0(this_ptr,pSVar10);
          }
          pSVar10 = pSVar10 + 1;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < this_ptr->vertex_count);
      }
      pSStack_30 = this_ptr->vertices;
      iStack_24 = 0;
      do {
        iVar8 = 0;
        pSVar10 = pSStack_30;
        if (0 < this_ptr->vertex_count) {
          do {
            if (pSVar10->is_pinned == 0) {
              core_curtain_cpp_CCurtain_solveConstraints_FUN_00449fc0(this_ptr,pSVar10);
            }
            iVar8 = iVar8 + 1;
            pSVar10 = pSVar10 + 1;
          } while (iVar8 < this_ptr->vertex_count);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 3);
      iVar8 = 0;
      if (0 < this_ptr->vertex_count) {
        pfVar2 = &this_ptr->friction;
        pSVar10 = this_ptr->vertices;
        do {
          pSStack_2c = pSVar10;
          if (pSStack_2c->has_collision != 0) {
            (pSStack_2c->velocity).x = *pfVar2 * (pSStack_2c->velocity).x;
            (pSStack_2c->velocity).y = *pfVar2 * (pSStack_2c->velocity).y;
            (pSStack_2c->velocity).z = *pfVar2 * (pSStack_2c->velocity).z;
          }
          if (&pSStack_2c->last_world_position != &pSStack_2c->world_position) {
            pSStack_2c->last_world_position = pSStack_2c->world_position;
          }
          iVar8 = iVar8 + 1;
          pSVar10 = pSStack_2c + 1;
        } while (iVar8 < this_ptr->vertex_count);
      }
      if (this_ptr->hit_floor != 0) {
        iVar10 = 0;
        iVar8 = 0;
        if (0 < this_ptr->vertex_count) {
          pSVar9 = this_ptr->vertices;
          do {
            if ((pSVar9->world_position).y <= this_ptr->floor_height) {
              iVar8 = iVar8 + 1;
            }
            iVar10 = iVar10 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iVar10 < this_ptr->vertex_count);
        }
        if (iVar8 == this_ptr->vertex_count) {
          this_ptr->simulate_me = 0;
        }
      }
      core_curtain_cpp_CCurtain_updateLocalPositions_FUN_00449f10(this_ptr);
    }
  }
  return;
}
