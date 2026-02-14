// Name: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
// Address: 0047bdb0
// Address Range: [[0047bdb0, 0047bf30]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_34;
  CKeyFramedModel *local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_18 = 0;
  local_34 = 0;
  if (0 < this_ptr->part_count) {
    local_30 = this_ptr;
    do {
      iVar3 = local_18;
      local_1c = local_18 * 0x48;
      local_20 = local_1c + 0x48;
      while (local_18 < iVar3 + local_30->part_list[0].poly_count) {
        iVar6 = (int)this_ptr->poly_vert_list + local_1c;
        bVar2 = false;
        iVar7 = 0;
        local_14 = iVar6;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar4 = iVar7 + 1;
            if (iVar4 < *(int *)(iVar6 + 4)) {
              iVar5 = iVar4 * 0xc + iVar6;
              do {
                if (*(int *)(local_14 + 0x18) == *(int *)(iVar5 + 0x18)) {
                  bVar2 = true;
                }
                iVar4 = iVar4 + 1;
                iVar5 = iVar5 + 0xc;
              } while (iVar4 < *(int *)(iVar6 + 4));
            }
            iVar7 = iVar7 + 1;
            local_14 = local_14 + 0xc;
          } while (iVar7 < *(int *)(iVar6 + 4));
        }
        if (bVar2) {
          iVar6 = this_ptr->poly_count + -1;
          this_ptr->poly_count = iVar6;
          memmove
                    ((void *)((int)this_ptr->poly_vert_list + local_1c),
                     (void *)(local_20 + (int)this_ptr->poly_vert_list),(iVar6 - local_18) * 0x48);
          piVar1 = &local_30->part_list[0].poly_count;
          *piVar1 = *piVar1 + -1;
        }
        else {
          local_20 = local_20 + 0x48;
          local_18 = local_18 + 1;
          local_1c = local_1c + 0x48;
        }
      }
      local_30 = (CKeyFramedModel *)(local_30->model_filename + 8);
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  return;
}
