// Name: core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
// Address: 0047a820
// MANUAL RECONSTRUCTION
// Address Range: [[0047a820, 0047a9fa]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel *model_ptr)

{
  int iVar3;
  int local_28;
  int local_24;
  int iVar1;
  int iVar2;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(model_ptr);
  local_24 = 0;
  local_28 = 0;
  if (0 < model_ptr->part_count) {
    do {
      iVar3 = local_24 + model_ptr->part_list[local_28].poly_count;
      iVar1 = iVar3;
      while (iVar1 = iVar1 + -1, iVar2 = local_24, local_24 < iVar1) {
        for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = local_28 + 1;
      local_24 = iVar3;
    } while (local_28 < model_ptr->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(model_ptr);
  return;
}
