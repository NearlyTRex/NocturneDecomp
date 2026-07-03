// Name: core_cloth.cpp_CCloth_initializeConnections_FUN_004394e0
// Address: 004394e0
// MANUAL RECONSTRUCTION
// Address Range: [[004394e0, 00439705]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(CCloth *this_ptr)

{
  SClothVertex *pSVar4;
  SClothVertex *pSVar1;
  SClothVertex *pSVar8;
  SClothVertex *local_2c;
  SMRGLPrimitiveQuad *quad;
  int local_14;
  int local_24;
  int iVar5;
  int iVar3;
  int iVar6;
  int iVar2;
  int iVar7;
  int v0;
  int v1;
  int count;
  float fVar2;
  float fVar1;
  float fVar3;

  pSVar4 = this_ptr->vertices;
  local_2c = pSVar4;
  for (local_14 = 0; local_14 < (this_ptr->model).vertex_count; local_14 = local_14 + 1) {
    local_2c->connected_count = 0;
    local_2c->locked = 0;
    pSVar8 = pSVar4 + local_14;
    for (local_24 = 0; local_24 < (this_ptr->model).poly_count; local_24 = local_24 + 1) {
      quad = (this_ptr->model).poly_vert_list + local_24;
      count = quad->base.base.count;
      // Skip this polygon unless the current vertex is one of its corners.
      for (iVar5 = 0; iVar5 < count; iVar5 = iVar5 + 1) {
        if (quad->vertices[iVar5].vertex_index == local_14) break;
      }
      if (iVar5 == count) continue;
      // For each edge (corner iVar3 -> next corner) incident to the current
      // vertex, record the edge's other endpoint as a connected vertex.
      for (iVar3 = 0; iVar3 < count; iVar3 = iVar3 + 1) {
        v0 = quad->vertices[iVar3].vertex_index;
        v1 = quad->vertices[(iVar3 + 1) % count].vertex_index;
        if ((v0 != local_14) && (v1 != local_14)) continue;
        iVar2 = (v0 == local_14) ? v1 : v0;
        for (iVar6 = 0; iVar6 < local_2c->connected_count; iVar6 = iVar6 + 1) {
          if (iVar2 == local_2c->connected_indices[iVar6]) break;
        }
        if ((iVar6 == local_2c->connected_count) &&
           ((local_2c->offset_pos).y <= this_ptr->vertices[iVar2].offset_pos.y)) {
          local_2c->connected_indices[local_2c->connected_count] = iVar2;
          pSVar1 = pSVar4 + iVar2;
          fVar1 = (pSVar8->position).x - (pSVar1->position).x;
          fVar2 = (pSVar8->position).y - (pSVar1->position).y;
          fVar3 = (pSVar8->position).z - (pSVar1->position).z;
          local_2c->rest_lengths[local_2c->connected_count] =
               SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
          iVar7 = local_2c->connected_count + 1;
          local_2c->connected_count = iVar7;
          if (0xf < iVar7) {
            g_CurrentFilename = "..\\core\\cloth.cpp";
            g_CurrentLineNumber = 451;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many connecting verticies");
          }
        }
      }
    }
    local_2c = local_2c + 1;
  }
  return;
}
