// Name: core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0
// Address: 00449fc0
// MANUAL RECONSTRUCTION
// Address Range: [[00449fc0, 0044a912]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_00449fc0(CCurtain *this_ptr,SCurtainVertex *vertex)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_00449fc0(CCurtain *this_ptr,SCurtainVertex *vertex)

{
  float *pfVar1;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar10;
  SCurtainMeshData *pSVar18;
  SCurtainMeshData *pSVar12;
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
  float fVar9;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((this_ptr->hit_floor != 0) && ((vertex->world_position).y < this_ptr->floor_height)) {
    (vertex->velocity).z = 0.0;
    (vertex->velocity).y = 0.0;
    (vertex->velocity).x = 0.0;
    (vertex->world_position).y = this_ptr->floor_height;
    vertex->has_collision = 1;
  }
  local_18 = 0;
  if (0 < INT_008879bc) {
    pCVar1 = &vertex->world_position;
    pCVar2 = &vertex->velocity;
    pfVar1 = &(vertex->world_position).z;
    pSVar12 = &this_ptr->mesh;
    local_1c = &SCollisionInfo_ARRAY_00887e70[0].cylinder_radius;
    do {
      if (((((float)-0.5 <= (vertex->velocity).y) ||
           (fVar10 = CVector3f_ARRAY_008879c0[local_18].y +
                     SCollisionInfo_ARRAY_00887e70[local_18].cylinder_top_y,
           fVar10 <= (vertex->world_position).y)) ||
          ((vertex->world_position).y <= CVector3f_ARRAY_008879c0[local_18].y))
         || (fVar11 = (vertex->world_position).x -
                      CVector3f_ARRAY_008879c0[local_18].x,
            fVar12 = (vertex->world_position).z -
                     CVector3f_ARRAY_008879c0[local_18].z,
            SCollisionInfo_ARRAY_00887e70[local_18].cylinder_radius <=
            SQRT(fVar12 * fVar12 + fVar11 * fVar11))) {
        if ((CVector3f_ARRAY_008879c0[local_18].y <= (vertex->world_position).y)
           && (fVar10 = CVector3f_ARRAY_008879c0[local_18].y +
                        SCollisionInfo_ARRAY_00887e70[local_18].cylinder_top_y,
              (vertex->world_position).y <= fVar10)) {
          fVar11 = (vertex->world_position).x -
                   CVector3f_ARRAY_008879c0[local_18].x;
          fVar13 = (vertex->world_position).z -
                   CVector3f_ARRAY_008879c0[local_18].z;
          fVar12 = SQRT(fVar11 * fVar11 + fVar13 * fVar13);
          if (fVar12 <= SCollisionInfo_ARRAY_00887e70[local_18].cylinder_radius) {
            if ((vertex->last_world_position).y < fVar10) {
              if (CVector3f_ARRAY_008879c0[local_18].y <
                  (vertex->last_world_position).y) {
                if (fVar12 <= 0.0) {
                  local_104[0] = 0.0;
                  local_fc = 0.0;
                }
                else {
                  local_104[0] = fVar11 * (1.0 / fVar12);
                  local_fc = fVar13 * (1.0 / fVar12);
                }
                fVar16 = local_104[0] * *local_1c +
                         CVector3f_ARRAY_008879c0[local_18].x;
                fVar15 = (vertex->world_position).y;
                fVar17 = local_fc * *local_1c +
                         CVector3f_ARRAY_008879c0[local_18].z;
                fVar10 = (vertex->world_position).y;
                fVar11 = (vertex->world_position).z;
                fVar12 = pSVar12->inv_delta_time;
                fVar13 = pSVar12->inv_delta_time;
                pCVar2->x = pCVar2->x + (fVar16 - pCVar1->x) * pSVar12->inv_delta_time;
                (vertex->velocity).y = (vertex->velocity).y + (fVar15 - fVar10) * fVar12;
                (vertex->velocity).z = (vertex->velocity).z + (fVar17 - fVar11) * fVar13;
                if (pCVar1 != (CVector3f *)local_104) {
                  pCVar1->x = fVar16;
                  (vertex->world_position).y = fVar15;
                  (vertex->world_position).z = fVar17;
                }
                vertex->has_collision = 1;
              }
              else {
                fVar15 = pCVar1->x;
                fVar16 = *pfVar1;
                fVar17 = CVector3f_ARRAY_008879c0[local_18].y;
                fVar10 = (vertex->world_position).y;
                fVar11 = (vertex->world_position).z;
                fVar12 = pSVar12->inv_delta_time;
                fVar13 = pSVar12->inv_delta_time;
                pCVar2->x = pCVar2->x + (fVar15 - pCVar1->x) * pSVar12->inv_delta_time;
                (vertex->velocity).y = (vertex->velocity).y + (fVar17 - fVar10) * fVar12;
                (vertex->velocity).z = (vertex->velocity).z + (fVar16 - fVar11) * fVar13;
                if (pCVar1 != (CVector3f *)local_140) {
                  pCVar1->x = fVar15;
                  (vertex->world_position).y = fVar17;
                  (vertex->world_position).z = fVar16;
                }
              }
            }
            else {
              fVar8 = pCVar1->x;
              fVar9 = *pfVar1;
              fVar11 = (vertex->world_position).y;
              fVar12 = (vertex->world_position).z;
              fVar13 = pSVar12->inv_delta_time;
              fVar6 = pSVar12->inv_delta_time;
              pCVar2->x = pCVar2->x + (fVar8 - pCVar1->x) * pSVar12->inv_delta_time;
              (vertex->velocity).y = (vertex->velocity).y + (fVar10 - fVar11) * fVar13;
              (vertex->velocity).z = (vertex->velocity).z + (fVar9 - fVar12) * fVar6;
              if (pCVar1 != (CVector3f *)local_d4) {
                pCVar1->x = fVar8;
                (vertex->world_position).y = fVar10;
                (vertex->world_position).z = fVar9;
              }
            }
          }
        }
      }
      else {
        (vertex->velocity).y = 0.0;
        vertex->has_collision = 1;
        (vertex->world_position).y = fVar10;
      }
      local_1c = local_1c + 10;
      local_18 = local_18 + 1;
    } while (local_18 < INT_008879bc);
  }
  local_34 = 0;
  if (0 < vertex->neighbor_count) {
    pCVar3 = &vertex->world_position;
    pfVar10 = &this_ptr->spring;
    pSVar18 = &this_ptr->mesh;
    pCVar4 = &vertex->velocity;
    do {
      iVar14 = vertex->neighbor_indices[local_34];
      local_e0 = pCVar3->x - this_ptr->vertices[iVar14].world_position.x;
      local_dc = (vertex->world_position).y - this_ptr->vertices[iVar14].world_position.y;
      local_d8 = (vertex->world_position).z - this_ptr->vertices[iVar14].world_position.z;
      fVar10 = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
      fVar7 = vertex->rest_distances[local_34];
      if (fVar7 < fVar10) {
        fVar15 = fVar10 - fVar7;
        fVar11 = 1.0 / fVar10;
        fVar12 = local_e0 * fVar15 * fVar11;
        fVar13 = local_dc * fVar15 * fVar11;
        fVar11 = local_d8 * fVar15 * fVar11;
        pCVar3->x = pCVar3->x - fVar12;
        (vertex->world_position).y = (vertex->world_position).y - fVar13;
        (vertex->world_position).z = (vertex->world_position).z - fVar11;
        fVar3 = pSVar18->inv_delta_time;
        fVar4 = pSVar18->inv_delta_time;
        pCVar4->x = pCVar4->x - fVar12 * pSVar18->inv_delta_time;
        (vertex->velocity).y = (vertex->velocity).y - fVar13 * fVar3;
        (vertex->velocity).z = (vertex->velocity).z - fVar11 * fVar4;
      }
      if ((fVar10 < fVar7) && ((float)0.01 < fVar10)) {
        fVar11 = fVar7 - fVar10;
        fVar10 = 1.0 / fVar10;
        fVar12 = local_e0 * fVar11 * fVar10 * *pfVar10;
        fVar13 = local_dc * fVar11 * fVar10 * *pfVar10;
        fVar11 = local_d8 * fVar11 * fVar10 * *pfVar10;
        pCVar3->x = pCVar3->x + fVar12;
        (vertex->world_position).y = (vertex->world_position).y + fVar13;
        (vertex->world_position).z = (vertex->world_position).z + fVar11;
        fVar10 = pSVar18->inv_delta_time;
        fVar5 = pSVar18->inv_delta_time;
        pCVar4->x = pCVar4->x + fVar12 * pSVar18->inv_delta_time;
        (vertex->velocity).y = (vertex->velocity).y + fVar13 * fVar10;
        (vertex->velocity).z = (vertex->velocity).z + fVar11 * fVar5;
      }
      local_34 = local_34 + 1;
    } while (local_34 < vertex->neighbor_count);
  }
  return;
}
