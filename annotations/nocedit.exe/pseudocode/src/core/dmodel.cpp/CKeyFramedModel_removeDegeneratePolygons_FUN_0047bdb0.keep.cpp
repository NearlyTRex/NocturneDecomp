// Name: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
// Address: 0047bdb0
// MANUAL RECONSTRUCTION
// Address Range: [[0047bdb0, 0047bf30]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)

{
  int iVar4;
  int iVar6;
  int iVar7;
  int local_34;
  int local_18;
  int iVar3;
  bool bVar2;
  SMRGLPrimitiveQuad *poly;

  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_18 = 0;
  local_34 = 0;
  if (0 < this_ptr->part_count) {
    do {
      iVar3 = local_18;
      while (local_18 < iVar3 + this_ptr->part_list[local_34].poly_count) {
        poly = this_ptr->poly_vert_list + local_18;
        bVar2 = false;
        for (iVar6 = 0; iVar6 < poly->base.base.count; iVar6 = iVar6 + 1) {
          for (iVar4 = iVar6 + 1; iVar4 < poly->base.base.count; iVar4 = iVar4 + 1) {
            if (poly->vertices[iVar6].vertex_index == poly->vertices[iVar4].vertex_index) {
              bVar2 = true;
            }
          }
        }
        if (bVar2) {
          iVar7 = this_ptr->poly_count + -1;
          this_ptr->poly_count = iVar7;
          memmove(this_ptr->poly_vert_list + local_18,this_ptr->poly_vert_list + (local_18 + 1),
                  (iVar7 - local_18) * 0x48);
          this_ptr->part_list[local_34].poly_count = this_ptr->part_list[local_34].poly_count + -1;
        }
        else {
          local_18 = local_18 + 1;
        }
      }
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  return;
}
