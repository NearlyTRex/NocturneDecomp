// Name: core_curtain.cpp_CCurtain_solveConstraints_FUN_0043e290
// Address: 0043e290
// Address Range: [[0043e290, 0043ebe2]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(CCurtain *this_ptr,SCurtainVertex *vertex)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(CCurtain *this_ptr,SCurtainVertex *vertex)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  SCurtainMeshData *pSVar12;
  SCurtainVertex *pSVar13;
  float local_14c [3];
  float local_140 [15];
  float local_104 [2];
  float local_fc;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4 [40];
  int local_34;
  float *local_1c;
  int local_18;
  
  if ((this_ptr->hit_floor != 0) && ((vertex->world_position).y < this_ptr->floor_height)) {
    (vertex->velocity).z = 0.0;
    (vertex->velocity).y = (vertex->velocity).z;
    (vertex->velocity).x = (vertex->velocity).y;
    (vertex->world_position).y = this_ptr->floor_height;
    vertex->has_collision = 1;
  }
  local_18 = 0;
  if (0 < DAT_0077bdb8) {
    pCVar1 = &vertex->world_position;
    pCVar2 = &vertex->velocity;
    pfVar10 = &(vertex->world_position).z;
    iVar11 = 0;
    pSVar12 = &this_ptr->mesh;
    local_1c = (float *)&DAT_0077c288;
    do {
      if (((((float)-0.5 <= (vertex->velocity).y) ||
           (fVar7 = *(float *)((int)&DAT_0077bdc0 + iVar11) + (float)(&DAT_0077c284)[local_18 * 10],
           fVar7 <= (vertex->world_position).y)) ||
          ((vertex->world_position).y <= *(float *)((int)&DAT_0077bdc0 + iVar11))) ||
         (fVar5 = (vertex->world_position).x - *(float *)((int)&DAT_0077bdbc + iVar11),
         fVar3 = (vertex->world_position).z - *(float *)((int)&DAT_0077bdc4 + iVar11),
         (float)(&DAT_0077c288)[local_18 * 10] <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))) {
        if ((*(float *)((int)&DAT_0077bdc0 + iVar11) <= (vertex->world_position).y) &&
           (fVar7 = *(float *)((int)&DAT_0077bdc0 + iVar11) + (float)(&DAT_0077c284)[local_18 * 10],
           (vertex->world_position).y <= fVar7)) {
          local_104[0] = (vertex->world_position).x - *(float *)((int)&DAT_0077bdbc + iVar11);
          local_fc = (vertex->world_position).z - *(float *)((int)&DAT_0077bdc4 + iVar11);
          fVar5 = SQRT(local_104[0] * local_104[0] + local_fc * local_fc);
          if (fVar5 <= (float)(&DAT_0077c288)[local_18 * 10]) {
            if ((vertex->last_world_position).y < fVar7) {
              if (*(float *)((int)&DAT_0077bdc0 + iVar11) < (vertex->last_world_position).y) {
                if (fVar5 <= 0.0) {
                  local_104[0] = 0.0;
                  local_fc = 0.0;
                }
                else {
                  local_104[0] = local_104[0] * (1.0 / fVar5);
                  local_fc = local_fc * (1.0 / fVar5);
                }
                fVar8 = local_104[0] * *local_1c + *(float *)((int)&DAT_0077bdbc + iVar11);
                fVar6 = (vertex->world_position).y;
                fVar9 = local_fc * *local_1c + *(float *)((int)&DAT_0077bdc4 + iVar11);
                fVar7 = (vertex->world_position).y;
                fVar5 = (vertex->world_position).z;
                fVar3 = pSVar12->inv_delta_time;
                fVar4 = pSVar12->inv_delta_time;
                pCVar2->x = pCVar2->x + (fVar8 - pCVar1->x) * pSVar12->inv_delta_time;
                (vertex->velocity).y = (vertex->velocity).y + (fVar6 - fVar7) * fVar3;
                (vertex->velocity).z = (vertex->velocity).z + (fVar9 - fVar5) * fVar4;
                if (pCVar1 != (CVector3f *)local_104) {
                  pCVar1->x = fVar8;
                  (vertex->world_position).y = fVar6;
                  (vertex->world_position).z = fVar9;
                }
                vertex->has_collision = 1;
              }
              else {
                fVar6 = pCVar1->x;
                fVar8 = *pfVar10;
                fVar9 = *(float *)((int)&DAT_0077bdc0 + iVar11);
                fVar7 = (vertex->world_position).y;
                fVar5 = (vertex->world_position).z;
                fVar3 = pSVar12->inv_delta_time;
                fVar4 = pSVar12->inv_delta_time;
                pCVar2->x = pCVar2->x + (fVar6 - pCVar1->x) * pSVar12->inv_delta_time;
                (vertex->velocity).y = (vertex->velocity).y + (fVar9 - fVar7) * fVar3;
                (vertex->velocity).z = (vertex->velocity).z + (fVar8 - fVar5) * fVar4;
                if (pCVar1 != (CVector3f *)local_140) {
                  pCVar1->x = fVar6;
                  (vertex->world_position).y = fVar9;
                  (vertex->world_position).z = fVar8;
                }
              }
            }
            else {
              fVar8 = pCVar1->x;
              fVar9 = *pfVar10;
              fVar5 = (vertex->world_position).y;
              fVar3 = (vertex->world_position).z;
              fVar4 = pSVar12->inv_delta_time;
              fVar6 = pSVar12->inv_delta_time;
              pCVar2->x = pCVar2->x + (fVar8 - pCVar1->x) * pSVar12->inv_delta_time;
              (vertex->velocity).y = (vertex->velocity).y + (fVar7 - fVar5) * fVar4;
              (vertex->velocity).z = (vertex->velocity).z + (fVar9 - fVar3) * fVar6;
              if (pCVar1 != (CVector3f *)local_d4) {
                pCVar1->x = fVar8;
                (vertex->world_position).y = fVar7;
                (vertex->world_position).z = fVar9;
              }
            }
          }
        }
      }
      else {
        (vertex->velocity).y = 0.0;
        vertex->has_collision = 1;
        (vertex->world_position).y = fVar7;
      }
      local_1c = local_1c + 10;
      local_18 = local_18 + 1;
      iVar11 = iVar11 + 0xc;
    } while (local_18 < DAT_0077bdb8);
  }
  local_34 = 0;
  if (0 < vertex->neighbor_count) {
    pCVar1 = &vertex->world_position;
    pfVar10 = &this_ptr->spring;
    pSVar12 = &this_ptr->mesh;
    pCVar2 = &vertex->velocity;
    pSVar13 = vertex;
    do {
      iVar11 = pSVar13->neighbor_indices[0];
      if (&local_e0 != local_14c) {
        local_e0 = pCVar1->x - this_ptr->vertices[iVar11].world_position.x;
        local_dc = (vertex->world_position).y - this_ptr->vertices[iVar11].world_position.y;
        local_d8 = (vertex->world_position).z - this_ptr->vertices[iVar11].world_position.z;
      }
      fVar5 = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
      fVar7 = pSVar13->rest_distances[0];
      if (fVar7 < fVar5) {
        fVar3 = fVar5 - fVar7;
        fVar6 = 1.0 / fVar5;
        fVar8 = local_e0 * fVar3 * fVar6;
        fVar9 = local_dc * fVar3 * fVar6;
        fVar6 = local_d8 * fVar3 * fVar6;
        pCVar1->x = pCVar1->x - fVar8;
        (vertex->world_position).y = (vertex->world_position).y - fVar9;
        (vertex->world_position).z = (vertex->world_position).z - fVar6;
        fVar3 = pSVar12->inv_delta_time;
        fVar4 = pSVar12->inv_delta_time;
        pCVar2->x = pCVar2->x - fVar8 * pSVar12->inv_delta_time;
        (vertex->velocity).y = (vertex->velocity).y - fVar9 * fVar3;
        (vertex->velocity).z = (vertex->velocity).z - fVar6 * fVar4;
      }
      if ((fVar5 < fVar7) && ((float)0.01 < fVar5)) {
        fVar7 = fVar7 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = local_e0 * fVar7 * fVar5 * *pfVar10;
        fVar4 = local_dc * fVar7 * fVar5 * *pfVar10;
        fVar6 = local_d8 * fVar7 * fVar5 * *pfVar10;
        pCVar1->x = pCVar1->x + fVar3;
        (vertex->world_position).y = (vertex->world_position).y + fVar4;
        (vertex->world_position).z = (vertex->world_position).z + fVar6;
        fVar7 = pSVar12->inv_delta_time;
        fVar5 = pSVar12->inv_delta_time;
        pCVar2->x = pCVar2->x + fVar3 * pSVar12->inv_delta_time;
        (vertex->velocity).y = (vertex->velocity).y + fVar4 * fVar7;
        (vertex->velocity).z = (vertex->velocity).z + fVar6 * fVar5;
      }
      local_34 = local_34 + 1;
      pSVar13 = (SCurtainVertex *)&(pSVar13->local_position).y;
    } while (local_34 < vertex->neighbor_count);
  }
  return;
}
