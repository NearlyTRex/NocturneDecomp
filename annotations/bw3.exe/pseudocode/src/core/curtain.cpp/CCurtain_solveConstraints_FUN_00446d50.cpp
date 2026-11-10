// Name: core_curtain.cpp_CCurtain_solveConstraints_FUN_00446d50
// Address: 00446d50
// Address Range: [[00446d50, 00447826]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_00446d50(CCurtain *this_ptr,SCurtainVertex *vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_00446d50(CCurtain *this_ptr,SCurtainVertex *vertex)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  SCurtainMeshData *pSVar11;
  float *pfVar12;
  float afStack_19c [21];
  float afStack_148 [18];
  float afStack_100 [9];
  float afStack_dc [2];
  float fStack_d4;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  SCurtainVertex *pSStack_44;
  float *pfStack_34;
  int iStack_28;
  int iStack_1c;
  int iStack_14;
  
  if ((this_ptr->hit_floor != 0) && ((vertex->world_position).y < this_ptr->floor_height)) {
    (vertex->velocity).z = 0.0;
    (vertex->velocity).y = (vertex->velocity).z;
    (vertex->velocity).x = (vertex->velocity).y;
    (vertex->world_position).y = this_ptr->floor_height;
    vertex->has_collision = 1;
  }
  iStack_1c = 0;
  if (0 < _DAT_007f8fcc) {
    pCVar1 = &vertex->world_position;
    pSVar11 = &this_ptr->mesh;
    pCVar2 = &vertex->velocity;
    iStack_28 = 0;
    pfStack_34 = (float *)0x7f949c;
    do {
      if ((float)_DAT_005b9a69 <= (vertex->velocity).y) {
LAB_00447357:
        if (*(float *)(iStack_28 + 0x7f8fd4) <= (vertex->world_position).y) {
          fVar10 = *(float *)(iStack_28 + 0x7f8fd4) + *(float *)(iStack_1c * 0x28 + 0x7f9498);
          if ((vertex->world_position).y <= fVar10) {
            afStack_dc[0] = (vertex->world_position).x - *(float *)(iStack_28 + 0x7f8fd0);
            fStack_d4 = (vertex->world_position).z - *(float *)(iStack_28 + 0x7f8fd8);
            fVar5 = SQRT(afStack_dc[0] * afStack_dc[0] + fStack_d4 * fStack_d4);
            if (fVar5 <= *(float *)(iStack_1c * 0x28 + 0x7f949c)) {
              if ((vertex->last_world_position).y < fVar10) {
                if (*(float *)(iStack_28 + 0x7f8fd4) < (vertex->last_world_position).y) {
                  if (fVar5 <= 0.0) {
                    afStack_dc[0] = 0.0;
                    fStack_d4 = 0.0;
                  }
                  else {
                    afStack_dc[0] = afStack_dc[0] * (1.0 / fVar5);
                    fStack_d4 = fStack_d4 * (1.0 / fVar5);
                  }
                  fVar7 = afStack_dc[0] * *pfStack_34 + *(float *)(iStack_28 + 0x7f8fd0);
                  fVar6 = (vertex->world_position).y;
                  fVar8 = fStack_d4 * *pfStack_34 + *(float *)(iStack_28 + 0x7f8fd8);
                  fVar10 = (vertex->world_position).y;
                  fVar5 = (vertex->world_position).z;
                  fVar3 = pSVar11->inv_delta_time;
                  fVar4 = pSVar11->inv_delta_time;
                  pCVar2->x = pCVar2->x + (fVar7 - pCVar1->x) * pSVar11->inv_delta_time;
                  (vertex->velocity).y = (vertex->velocity).y + (fVar6 - fVar10) * fVar3;
                  (vertex->velocity).z = (vertex->velocity).z + (fVar8 - fVar5) * fVar4;
                  if (pCVar1 != (CVector3f *)afStack_dc) {
                    pCVar1->x = fVar7;
                    (vertex->world_position).y = fVar6;
                    (vertex->world_position).z = fVar8;
                  }
                  vertex->has_collision = 1;
                }
                else {
                  fVar6 = (vertex->world_position).x;
                  fVar7 = (vertex->world_position).z;
                  fVar8 = *(float *)(iStack_28 + 0x7f8fd4);
                  fVar10 = (vertex->world_position).z;
                  fVar5 = (vertex->world_position).y;
                  fVar3 = pSVar11->inv_delta_time;
                  fVar4 = pSVar11->inv_delta_time;
                  pCVar2->x = pCVar2->x + (fVar6 - pCVar1->x) * pSVar11->inv_delta_time;
                  (vertex->velocity).y = (vertex->velocity).y + (fVar8 - fVar5) * fVar3;
                  (vertex->velocity).z = (vertex->velocity).z + (fVar7 - fVar10) * fVar4;
                  if (pCVar1 != (CVector3f *)afStack_19c) {
                    pCVar1->x = fVar6;
                    (vertex->world_position).y = fVar8;
                    (vertex->world_position).z = fVar7;
                  }
                }
              }
              else {
                fVar7 = (vertex->world_position).x;
                fVar8 = (vertex->world_position).z;
                fVar5 = (vertex->world_position).y;
                fVar3 = (vertex->world_position).z;
                fVar4 = pSVar11->inv_delta_time;
                fVar6 = pSVar11->inv_delta_time;
                pCVar2->x = pCVar2->x + (fVar7 - pCVar1->x) * pSVar11->inv_delta_time;
                (vertex->velocity).y = (vertex->velocity).y + (fVar10 - fVar5) * fVar4;
                (vertex->velocity).z = (vertex->velocity).z + (fVar8 - fVar3) * fVar6;
                if (pCVar1 != (CVector3f *)afStack_100) {
                  pCVar1->x = fVar7;
                  (vertex->world_position).y = fVar10;
                  (vertex->world_position).z = fVar8;
                }
              }
            }
          }
        }
      }
      else {
        fVar10 = *(float *)(iStack_28 + 0x7f8fd4) + *(float *)(iStack_1c * 0x28 + 0x7f9498);
        if ((fVar10 <= (vertex->world_position).y) ||
           ((vertex->world_position).y <= *(float *)(iStack_28 + 0x7f8fd4))) goto LAB_00447357;
        fVar5 = (vertex->world_position).x - *(float *)(iStack_28 + 0x7f8fd0);
        fVar3 = (vertex->world_position).z - *(float *)(iStack_28 + 0x7f8fd8);
        if (*(float *)(iStack_1c * 0x28 + 0x7f949c) <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))
        goto LAB_00447357;
        (vertex->velocity).y = 0.0;
        vertex->has_collision = 1;
        (vertex->world_position).y = fVar10;
      }
      iStack_28 = iStack_28 + 0xc;
      pfStack_34 = pfStack_34 + 10;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < _DAT_007f8fcc);
  }
  iStack_14 = 0;
  if (0 < vertex->neighbor_count) {
    pfVar12 = &this_ptr->spring;
    pSVar11 = &this_ptr->mesh;
    pCVar1 = &vertex->world_position;
    pCVar2 = &vertex->velocity;
    pSStack_44 = vertex;
    do {
      iVar9 = pSStack_44->neighbor_indices[0];
      if (&fStack_94 != afStack_148) {
        fStack_94 = pCVar1->x - this_ptr->vertices[iVar9].world_position.x;
        fStack_90 = (vertex->world_position).y - this_ptr->vertices[iVar9].world_position.y;
        fStack_8c = (vertex->world_position).z - this_ptr->vertices[iVar9].world_position.z;
      }
      fVar5 = SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90);
      fVar10 = pSStack_44->rest_distances[0];
      if (fVar10 < fVar5) {
        fVar3 = fVar5 - fVar10;
        fVar6 = 1.0 / fVar5;
        fVar7 = fStack_94 * fVar3 * fVar6;
        fVar8 = fStack_90 * fVar3 * fVar6;
        fVar6 = fStack_8c * fVar3 * fVar6;
        pCVar1->x = pCVar1->x - fVar7;
        (vertex->world_position).y = (vertex->world_position).y - fVar8;
        (vertex->world_position).z = (vertex->world_position).z - fVar6;
        fVar3 = pSVar11->inv_delta_time;
        fVar4 = pSVar11->inv_delta_time;
        pCVar2->x = pCVar2->x - fVar7 * pSVar11->inv_delta_time;
        (vertex->velocity).y = (vertex->velocity).y - fVar8 * fVar3;
        (vertex->velocity).z = (vertex->velocity).z - fVar6 * fVar4;
      }
      if ((fVar5 < fVar10) && ((float)_DAT_005b9a71 < fVar5)) {
        fVar10 = fVar10 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = fStack_94 * fVar10 * fVar5 * *pfVar12;
        fVar4 = fStack_90 * fVar10 * fVar5 * *pfVar12;
        fVar6 = fStack_8c * fVar10 * fVar5 * *pfVar12;
        pCVar1->x = pCVar1->x + fVar3;
        (vertex->world_position).y = (vertex->world_position).y + fVar4;
        (vertex->world_position).z = (vertex->world_position).z + fVar6;
        fVar10 = pSVar11->inv_delta_time;
        fVar5 = pSVar11->inv_delta_time;
        pCVar2->x = pCVar2->x + fVar3 * pSVar11->inv_delta_time;
        (vertex->velocity).y = (vertex->velocity).y + fVar4 * fVar10;
        (vertex->velocity).z = (vertex->velocity).z + fVar6 * fVar5;
      }
      pSStack_44 = (SCurtainVertex *)&(pSStack_44->local_position).y;
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < vertex->neighbor_count);
  }
  return;
}
