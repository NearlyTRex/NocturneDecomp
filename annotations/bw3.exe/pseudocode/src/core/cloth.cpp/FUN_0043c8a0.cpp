// Name: core_cloth.cpp_FUN_0043c8a0
// Address: 0043c8a0
// Address Range: [[0043c8a0, 0043caf9]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043c8a0(CCloth *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_FUN_0043c8a0(CCloth *this_ptr)

{
  SClothVertex *pSVar1;
  int iVar2;
  int iVar3;
  SClothVertex *pSVar4;
  byte bVar5;
  float afStackY_1040 [1017];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  SClothVertex *local_3c;
  CCloth *local_38;
  int local_34;
  int local_30;
  SClothVertex *local_2c;
  SClothVertex *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  local_24 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_3c = this_ptr->vertices;
    local_2c = this_ptr->vertices;
    local_38 = this_ptr;
    do {
      pSVar1 = local_3c;
      local_38->vertices[0].connected_count = 0;
      local_38->vertices[0].locked = 0;
      local_34 = 0;
      if (0 < (this_ptr->model).poly_count) {
        local_30 = 0;
        local_28 = local_2c + local_24;
        do {
          local_18 = (int)&(((SMRGLPrimitiveQuad *)
                            (((this_ptr->model).poly_vert_list)->vertices + -2))->base).base.type +
                     local_30;
          iVar2 = 0;
          iVar3 = local_18;
          if (0 < *(int *)(local_18 + 4)) {
            do {
              if (local_24 == *(int *)(iVar3 + 0x18)) break;
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 0xc;
            } while (iVar2 < *(int *)(local_18 + 4));
          }
          if ((iVar2 != *(int *)(local_18 + 4)) && (local_1c = 0, 0 < *(int *)(local_18 + 4))) {
            local_20 = local_18;
            do {
              iVar3 = *(int *)(((local_1c + 1) % *(int *)(local_18 + 4)) * 0xc + local_18 + 0x18);
              iVar2 = iVar3;
              if ((*(int *)(local_20 + 0x18) == local_24) ||
                 (iVar2 = *(int *)(local_20 + 0x18), iVar3 == local_24)) {
                iVar3 = 0;
                pSVar4 = pSVar1;
                if (0 < pSVar1->connected_count) {
                  do {
                    if (iVar2 == pSVar4->connected_indices[0]) break;
                    iVar3 = iVar3 + 1;
                    pSVar4 = (SClothVertex *)&(pSVar4->position).y;
                  } while (iVar3 < pSVar1->connected_count);
                }
                if ((iVar3 == pSVar1->connected_count) &&
                   ((pSVar1->offset_pos).y <= this_ptr->vertices[iVar2].offset_pos.y)) {
                  pSVar1->connected_indices[pSVar1->connected_count] = iVar2;
                  pSVar4 = local_2c + iVar2;
                  local_4c = (local_28->position).x - (pSVar4->position).x;
                  local_48 = (local_28->position).y - (pSVar4->position).y;
                  local_44 = (local_28->position).z - (pSVar4->position).z;
                  local_58 = local_4c;
                  *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8) =
                       *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
                  *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                       *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                  local_40 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
                  pSVar1->rest_lengths[pSVar1->connected_count] = local_40;
                  iVar3 = pSVar1->connected_count + 1;
                  pSVar1->connected_count = iVar3;
                  if (0xf < iVar3) {
                    _DAT_01d71de0 = "..\\core\\cloth.cpp";
                    _DAT_01d71de4 = 0x1c3;
                    core_main_c_FUN_004e4330("Too many connecting verticies");
                  }
                }
              }
              local_1c = local_1c + 1;
              local_20 = local_20 + 0xc;
            } while (local_1c < *(int *)(local_18 + 4));
          }
          local_34 = local_34 + 1;
          local_30 = local_30 + 0x48;
        } while (local_34 < (this_ptr->model).poly_count);
      }
      local_24 = local_24 + 1;
      local_3c = local_3c + 1;
      local_38 = (CCloth *)&(local_38->model).env_map_opac_list;
    } while (local_24 < (this_ptr->model).vertex_count);
  }
  return;
}
