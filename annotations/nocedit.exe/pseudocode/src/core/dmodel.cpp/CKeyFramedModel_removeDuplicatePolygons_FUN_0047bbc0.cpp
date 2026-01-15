// Name: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// Address: 0047bbc0
// Address Range: [[0047bbc0, 0047bda0]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  CKeyFramedModel *local_38;
  int local_2c;
  int local_24;
  int local_20;
  SMRGLPrimitiveQuad **local_1c;
  int local_18;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_20 = 0;
  local_3c = 0;
  if (0 < this_ptr->part_count) {
    local_38 = this_ptr;
    do {
      iVar3 = local_20;
      local_24 = local_20 * 0x48;
      local_2c = local_24 + 0x48;
      while (local_20 < iVar3 + local_38->part_list[0].poly_count) {
        bVar2 = false;
        local_18 = iVar3;
        iVar5 = local_24 + (int)this_ptr->poly_vert_list;
        if (iVar3 < local_20) {
          local_1c = this_ptr->poly_vert_list + iVar3 * 0x12;
          do {
            if (*(SMRGLPrimitiveQuad **)(iVar5 + 4) == local_1c[1]) {
              iVar6 = 0;
              if (0 < *(int *)(iVar5 + 4)) {
                do {
                  iVar8 = 0;
                  bVar2 = true;
                  iVar4 = iVar6;
                  iVar7 = iVar5;
                  if (0 < *(int *)(iVar5 + 4)) {
                    do {
                      if (*(int *)(iVar7 + 0x18) !=
                          *(int *)(iVar5 + (iVar4 % *(int *)(iVar5 + 4)) * 0xc + 0x18)) {
                        bVar2 = false;
                        break;
                      }
                      iVar8 = iVar8 + 1;
                      iVar4 = iVar4 + 1;
                      iVar7 = iVar7 + 0xc;
                    } while (iVar8 < *(int *)(iVar5 + 4));
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(iVar5 + 4));
              }
              if (bVar2) break;
            }
            local_1c = local_1c + 0x12;
            local_18 = local_18 + 1;
          } while (local_18 < local_20);
        }
        if (bVar2) {
          iVar5 = this_ptr->poly_count + -1;
          this_ptr->poly_count = iVar5;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)this_ptr->poly_vert_list + local_24),
                     (void *)(local_2c + (int)this_ptr->poly_vert_list),(iVar5 - local_20) * 0x48);
          piVar1 = &local_38->part_list[0].poly_count;
          *piVar1 = *piVar1 + -1;
        }
        else {
          local_2c = local_2c + 0x48;
          local_20 = local_20 + 1;
          local_24 = local_24 + 0x48;
        }
      }
      local_38 = (CKeyFramedModel *)(local_38->model_filename + 8);
      local_3c = local_3c + 1;
    } while (local_3c < this_ptr->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  return;
}
