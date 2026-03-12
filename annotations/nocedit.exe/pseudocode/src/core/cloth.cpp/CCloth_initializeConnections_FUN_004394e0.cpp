// Name: core_cloth.cpp_CCloth_initializeConnections_FUN_004394e0
// Address: 004394e0
// Address Range: [[004394e0, 00439705]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(CCloth *this_ptr)

{
  SClothVertex *pSVar4;
  int iVar5;
  int iVar6;
  SClothVertex *pSVar1;
  int iVar2;
  int iVar7;
  SClothVertex *pSVar8;
  SClothVertex *pSVar9;
  int iVar10;
  int iVar11;
  int iVar3;
  bool bVar12;
  SClothVertex *local_2c;
  CCloth *local_28;
  int local_24;
  int local_20;
  int local_14;
  float fVar2;
  float fVar1;
  float fVar3;
  
  local_14 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pSVar4 = this_ptr->vertices;
    local_28 = this_ptr;
    local_2c = pSVar4;
    do {
      local_28->vertices[0].connected_count = 0;
      local_28->vertices[0].locked = 0;
      local_24 = 0;
      if (0 < (this_ptr->model).poly_count) {
        pSVar8 = pSVar4 + local_14;
        local_20 = 0;
        do {
          iVar11 = (int)&(((SMRGLPrimitiveQuad *)(((this_ptr->model).poly_vert_list)->vertices + -2)
                          )->base).base.type + local_20;
          iVar5 = 0;
          iVar3 = iVar11;
          if (0 < *(int *)(iVar11 + 4)) {
            do {
              if (local_14 == *(int *)(iVar3 + 0x18)) break;
              iVar5 = iVar5 + 1;
              iVar3 = iVar3 + 0xc;
            } while (iVar5 < *(int *)(iVar11 + 4));
          }
          if ((iVar5 != *(int *)(iVar11 + 4)) &&
             (iVar3 = 0, iVar10 = iVar11, 0 < *(int *)(iVar11 + 4))) {
LAB_004395fb:
            do {
              iVar2 = *(int *)(iVar11 + ((iVar3 + 1) % *(int *)(iVar11 + 4)) * 0xc + 0x18);
              if ((*(int *)(iVar10 + 0x18) == local_14) ||
                 (bVar12 = iVar2 == local_14, iVar2 = *(int *)(iVar10 + 0x18), bVar12)) {
                iVar6 = 0;
                pSVar9 = local_2c;
                if (0 < local_2c->connected_count) {
                  do {
                    if (iVar2 == pSVar9->connected_indices[0]) break;
                    iVar6 = iVar6 + 1;
                    pSVar9 = (SClothVertex *)&(pSVar9->position).y;
                  } while (iVar6 < local_2c->connected_count);
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
                    g_CurrentLineNumber = 0x1c3;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Too many connecting verticies");
                    iVar3 = iVar3 + 1;
                    iVar10 = iVar10 + 0xc;
                    if (*(int *)(iVar11 + 4) <= iVar3) break;
                    goto LAB_004395fb;
                  }
                }
              }
              iVar3 = iVar3 + 1;
              iVar10 = iVar10 + 0xc;
            } while (iVar3 < *(int *)(iVar11 + 4));
          }
          local_20 = local_20 + 0x48;
          local_24 = local_24 + 1;
        } while (local_24 < (this_ptr->model).poly_count);
      }
      local_2c = local_2c + 1;
      local_28 = (CCloth *)&(local_28->model).env_map_opac_list;
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->model).vertex_count);
  }
  return;
}
