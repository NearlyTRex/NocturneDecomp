// Name: core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
// Address: 0047a820
// Address Range: [[0047a820, 0047a9fa]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel * model_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047a8bc) */
/* WARNING: Removing unreachable block (ram,0x0047a929) */
/* WARNING: Removing unreachable block (ram,0x0047a92b) */
/* WARNING: Removing unreachable block (ram,0x0047a936) */
/* WARNING: Removing unreachable block (ram,0x0047a938) */
/* WARNING: Removing unreachable block (ram,0x0047a965) */

void __cdecl
core_dmodel_cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel *model_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModel *in_stack_00000008;
  CKeyFramedModel *local_28;
  int local_24;
  int local_20;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(model_ptr);
  local_20 = 0;
  local_24 = 0;
  if (0 < in_stack_00000008->part_count) {
    local_28 = in_stack_00000008;
    do {
      iVar3 = local_20 + local_28->part_list[0].poly_count;
      iVar1 = iVar3;
      while (iVar1 = iVar1 + -1, iVar2 = local_20, local_20 < iVar1) {
        for (; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = (CKeyFramedModel *)(local_28->model_filename + 8);
      local_24 = local_24 + 1;
      local_20 = iVar3;
    } while (local_24 < in_stack_00000008->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  return;
}
