// Name: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// Address: 0047bbc0
// MANUAL RECONSTRUCTION
// Address Range: [[0047bbc0, 0047bda0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

{
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int local_3c;
  int local_20;
  SMRGLPrimitiveQuad *local_1c;
  int local_18;
  int iVar3;
  bool bVar2;
  SMRGLPrimitiveQuad *poly;

  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_20 = 0;
  local_3c = 0;
  if (0 < this_ptr->part_count) {
    do {
      iVar3 = local_20;
      while (local_20 < iVar3 + this_ptr->part_list[local_3c].poly_count) {
        bVar2 = false;
        local_18 = iVar3;
        poly = this_ptr->poly_vert_list + local_20;
        if (iVar3 < local_20) {
          local_1c = this_ptr->poly_vert_list + iVar3;
          do {
            if (poly->base.base.count == (local_1c->base).base.count) {
              iVar6 = 0;
              if (0 < poly->base.base.count) {
                do {
                  iVar8 = 0;
                  bVar2 = true;
                  iVar4 = iVar6;
                  do {
                    if (poly->vertices[iVar8].vertex_index !=
                        poly->vertices[iVar4 % poly->base.base.count].vertex_index) {
                      bVar2 = false;
                      break;
                    }
                    iVar8 = iVar8 + 1;
                    iVar4 = iVar4 + 1;
                  } while (iVar8 < poly->base.base.count);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < poly->base.base.count);
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
          memmove(this_ptr->poly_vert_list + local_20,this_ptr->poly_vert_list + (local_20 + 1),
                  (iVar5 - local_20) * sizeof(*this_ptr->poly_vert_list));
          this_ptr->part_list[local_3c].poly_count = this_ptr->part_list[local_3c].poly_count + -1;
        }
        else {
          local_20 = local_20 + 1;
        }
      }
      local_3c = local_3c + 1;
    } while (local_3c < this_ptr->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  return;
}
