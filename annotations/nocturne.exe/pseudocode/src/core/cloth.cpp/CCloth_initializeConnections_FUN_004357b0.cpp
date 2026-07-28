// Name: core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0
// Address: 004357b0
// Address Range: [[004357b0, 004359d5]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(CCloth *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *local_2c;
  CCloth *local_28;
  int local_24;
  int local_20;
  int local_14;
  
  local_14 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    piVar1 = &(this_ptr->model).texture_list[8].textures[2].base.count;
    local_28 = this_ptr;
    local_2c = piVar1;
    do {
      (local_28->model).texture_list[9].textures[1].base.count = 0;
      (local_28->model).texture_list[10].textures[1].base.type = 0;
      local_24 = 0;
      if (0 < (this_ptr->model).poly_count) {
        piVar5 = piVar1 + local_14 * 0x47;
        local_20 = 0;
        do {
          iVar8 = (int)&(((SMRGLPrimitiveQuad *)(((this_ptr->model).poly_vert_list)->vertices + -2))
                        ->base).base.type + local_20;
          iVar2 = 0;
          iVar7 = iVar8;
          if (0 < *(int *)(iVar8 + 4)) {
            do {
              if (local_14 == *(int *)(iVar7 + 0x18)) break;
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar2 < *(int *)(iVar8 + 4));
          }
          if ((iVar2 != *(int *)(iVar8 + 4)) && (iVar2 = 0, iVar7 = iVar8, 0 < *(int *)(iVar8 + 4)))
          {
LAB_004358cb:
            do {
              iVar4 = *(int *)(iVar8 + ((iVar2 + 1) % *(int *)(iVar8 + 4)) * 0xc + 0x18);
              if ((*(int *)(iVar7 + 0x18) == local_14) ||
                 (bVar9 = iVar4 == local_14, iVar4 = *(int *)(iVar7 + 0x18), bVar9)) {
                iVar3 = 0;
                piVar6 = local_2c;
                if (0 < local_2c[0xc]) {
                  do {
                    if (iVar4 == piVar6[0xd]) break;
                    iVar3 = iVar3 + 1;
                    piVar6 = piVar6 + 1;
                  } while (iVar3 < local_2c[0xc]);
                }
                if ((iVar3 == local_2c[0xc]) &&
                   ((float)local_2c[0x31] <=
                    *(float *)((int)(this_ptr->model).texture_list + iVar4 * 0x11c + 0x338))) {
                  local_2c[local_2c[0xc] + 0xd] = iVar4;
                  piVar6 = piVar1 + iVar4 * 0x47;
                  local_2c[local_2c[0xc] + 0x1e] =
                       (int)SQRT(((float)piVar5[2] - (float)piVar6[2]) *
                                 ((float)piVar5[2] - (float)piVar6[2]) +
                                 ((float)*piVar5 - (float)*piVar6) *
                                 ((float)*piVar5 - (float)*piVar6) +
                                 ((float)piVar5[1] - (float)piVar6[1]) *
                                 ((float)piVar5[1] - (float)piVar6[1]));
                  iVar4 = local_2c[0xc];
                  local_2c[0xc] = iVar4 + 1;
                  if (0xf < iVar4 + 1) {
                    PTR_01cc4800 = "..\\core\\cloth.cpp";
                    INT_01cc4804 = 0x1c3;
                    core_main_c_FUN_004c8440("Too many connecting verticies");
                    iVar2 = iVar2 + 1;
                    iVar7 = iVar7 + 0xc;
                    if (*(int *)(iVar8 + 4) <= iVar2) break;
                    goto LAB_004358cb;
                  }
                }
              }
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 0xc;
            } while (iVar2 < *(int *)(iVar8 + 4));
          }
          local_20 = local_20 + 0x48;
          local_24 = local_24 + 1;
        } while (local_24 < (this_ptr->model).poly_count);
      }
      local_2c = local_2c + 0x47;
      local_28 = (CCloth *)&(local_28->model).env_map_opac_list;
      local_14 = local_14 + 1;
    } while (local_14 < (this_ptr->model).vertex_count);
  }
  return;
}
