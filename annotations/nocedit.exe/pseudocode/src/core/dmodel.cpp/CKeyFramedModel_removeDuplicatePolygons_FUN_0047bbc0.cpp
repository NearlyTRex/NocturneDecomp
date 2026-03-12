// Name: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// Address: 0047bbc0
// Address Range: [[0047bbc0, 0047bda0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

{
  int iVar4;
  int iVar1;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  CKeyFramedModel *local_38;
  int local_2c;
  int local_24;
  int local_20;
  SMRGLPrimitiveQuad *local_1c;
  int local_18;
  int iVar3;
  bool bVar2;
  int *piVar1;
  
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
        iVar1 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).base
                      .type + local_24;
        if (iVar3 < local_20) {
          local_1c = this_ptr->poly_vert_list + iVar3;
          do {
            if (*(int *)(iVar1 + 4) == (local_1c->base).base.count) {
              iVar6 = 0;
              if (0 < *(int *)(iVar1 + 4)) {
                do {
                  iVar8 = 0;
                  bVar2 = true;
                  iVar4 = iVar6;
                  iVar7 = iVar1;
                  if (0 < *(int *)(iVar1 + 4)) {
                    do {
                      if (*(int *)(iVar7 + 0x18) !=
                          *(int *)(iVar1 + (iVar4 % *(int *)(iVar1 + 4)) * 0xc + 0x18)) {
                        bVar2 = false;
                        break;
                      }
                      iVar8 = iVar8 + 1;
                      iVar4 = iVar4 + 1;
                      iVar7 = iVar7 + 0xc;
                    } while (iVar8 < *(int *)(iVar1 + 4));
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(iVar1 + 4));
              }
              if (bVar2) break;
            }
            local_1c = local_1c + 1;
            local_18 = local_18 + 1;
          } while (local_18 < local_20);
        }
        if (bVar2) {
          iVar5 = this_ptr->poly_count + -1;
          this_ptr->poly_count = iVar5;
          memmove
                    ((void *)((int)&(((SMRGLPrimitiveQuad *)
                                     (this_ptr->poly_vert_list->vertices + -2))->base).base.type +
                             local_24),
                     (void *)((int)&(((SMRGLPrimitiveQuad *)
                                     (this_ptr->poly_vert_list->vertices + -2))->base).base.type +
                             local_2c),(iVar5 - local_20) * 0x48);
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
