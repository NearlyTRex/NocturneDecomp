// Name: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// Address: 0047bbc0
// Address Range: [[0047bbc0, 0047bda0]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CKeyFramedModel *in_stack_00000008;
  int local_38;
  CKeyFramedModel *local_34;
  int local_28;
  int local_20;
  int local_1c;
  SMRGLPrimitiveQuad **local_18;
  int local_14;
  bool bVar7;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_1c = 0;
  local_38 = 0;
  if (0 < in_stack_00000008->part_count) {
    local_34 = in_stack_00000008;
    do {
      iVar1 = local_1c;
      local_20 = local_1c * 0x48;
      local_28 = local_20 + 0x48;
      while (local_1c < iVar1 + local_34->part_list[0].poly_count) {
        bVar7 = false;
        local_14 = iVar1;
        iVar3 = local_20 + (int)in_stack_00000008->poly_vert_list;
        if (iVar1 < local_1c) {
          local_18 = in_stack_00000008->poly_vert_list + iVar1 * 0x12;
          do {
            if (*(SMRGLPrimitiveQuad **)(iVar3 + 4) == local_18[1]) {
              iVar4 = 0;
              if (0 < *(int *)(iVar3 + 4)) {
                do {
                  iVar6 = 0;
                  bVar7 = true;
                  iVar2 = iVar4;
                  iVar5 = iVar3;
                  if (0 < *(int *)(iVar3 + 4)) {
                    do {
                      if (*(int *)(iVar5 + 0x18) !=
                          *(int *)(iVar3 + (iVar2 % *(int *)(iVar3 + 4)) * 0xc + 0x18)) {
                        bVar7 = false;
                        break;
                      }
                      iVar6 = iVar6 + 1;
                      iVar2 = iVar2 + 1;
                      iVar5 = iVar5 + 0xc;
                    } while (iVar6 < *(int *)(iVar3 + 4));
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(iVar3 + 4));
              }
              if (bVar7) break;
            }
            local_18 = local_18 + 0x12;
            local_14 = local_14 + 1;
          } while (local_14 < local_1c);
        }
        if (bVar7) {
          iVar3 = in_stack_00000008->poly_count + -1;
          in_stack_00000008->poly_count = iVar3;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)in_stack_00000008->poly_vert_list + local_20),
                     (void *)(local_28 + (int)in_stack_00000008->poly_vert_list),
                     (iVar3 - local_1c) * 0x48);
          *(int *)(local_28 + 0x558c) = *(int *)(local_28 + 0x558c) + -1;
        }
        else {
          local_28 = local_28 + 0x48;
          local_1c = local_1c + 1;
          local_20 = local_20 + 0x48;
        }
      }
      local_34 = (CKeyFramedModel *)(local_34->model_filename + 8);
      local_38 = local_38 + 1;
    } while (local_38 < in_stack_00000008->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  return;
}
