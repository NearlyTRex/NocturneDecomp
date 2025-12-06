// Name: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
// Address: 0047bdb0
// Address Range: [[0047bdb0, 0047bf30]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CKeyFramedModel *in_stack_00000008;
  int local_30;
  CKeyFramedModel *local_2c;
  int local_1c;
  int local_18;
  int local_14;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_14 = 0;
  local_30 = 0;
  if (0 < in_stack_00000008->part_count) {
    local_2c = in_stack_00000008;
    do {
      iVar2 = local_14;
      local_18 = local_14 * 0x48;
      local_1c = local_18 + 0x48;
      while (local_14 < iVar2 + local_2c->part_list[0].poly_count) {
        iVar5 = (int)in_stack_00000008->poly_vert_list + local_18;
        bVar1 = false;
        iVar6 = 0;
        iVar7 = iVar5;
        if (0 < *(int *)(iVar5 + 4)) {
          do {
            iVar3 = iVar6 + 1;
            if (iVar3 < *(int *)(iVar5 + 4)) {
              iVar4 = iVar3 * 0xc + iVar5;
              do {
                if (*(int *)(iVar7 + 0x18) == *(int *)(iVar4 + 0x18)) {
                  bVar1 = true;
                }
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + 0xc;
              } while (iVar3 < *(int *)(iVar5 + 4));
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar6 < *(int *)(iVar5 + 4));
        }
        if (bVar1) {
          iVar7 = in_stack_00000008->poly_count + -1;
          in_stack_00000008->poly_count = iVar7;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)in_stack_00000008->poly_vert_list + local_18),
                     (void *)(local_1c + (int)in_stack_00000008->poly_vert_list),
                     (iVar7 - local_14) * 0x48);
          *(int *)(local_1c + 0x558c) = *(int *)(local_1c + 0x558c) + -1;
        }
        else {
          local_1c = local_1c + 0x48;
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x48;
        }
      }
      local_2c = (CKeyFramedModel *)(local_2c->model_filename + 8);
      local_30 = local_30 + 1;
    } while (local_30 < in_stack_00000008->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  return;
}
