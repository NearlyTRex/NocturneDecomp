// Name: core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
// Address: 0047bf40
// Address Range: [[0047bf40, 0047c078]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel *this_ptr)

{
  int iVar2;
  int iVar7;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  CKeyFramedModel *local_20;
  int local_18;
  int iVar1;
  
  iVar4 = 0;
  iVar2 = 0;
  local_28 = 0;
  if (0 < this_ptr->part_count) {
    local_20 = this_ptr;
    iVar7 = iVar2;
    iVar5 = iVar4;
    do {
      iVar4 = local_20->part_list[0].vertex_count + iVar5;
      iVar2 = local_20->part_list[0].poly_count + iVar7;
      if (iVar7 < iVar2) {
        local_18 = iVar7 * 0x48;
        do {
          iVar6 = 0;
          iVar3 = 0;
          while (iVar3 < *(int *)((int)this_ptr->poly_vert_list->vertices + local_18 + -0x14)) {
            iVar1 = *(int *)((int)&this_ptr->poly_vert_list->vertices[0].vertex_index +
                            iVar6 + local_18);
            if ((iVar1 < iVar5) || (iVar4 <= iVar1)) {
              g_CurrentFilename = "..\\core\\dmodel.cpp";
              g_CurrentLineNumber = 0xab6;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel part vertex overlap detected!");
              iVar3 = iVar3 + 1;
              iVar6 = iVar6 + 0xc;
            }
            else {
              iVar3 = iVar3 + 1;
              iVar6 = iVar6 + 0xc;
            }
          }
          local_18 = local_18 + 0x48;
        } while (local_18 < iVar2 * 0x48);
      }
      local_20 = (CKeyFramedModel *)(local_20->model_filename + 8);
      local_28 = local_28 + 1;
      iVar7 = iVar2;
      iVar5 = iVar4;
    } while (local_28 < this_ptr->part_count);
  }
  if ((iVar4 == this_ptr->vertex_count) && (iVar2 == this_ptr->poly_count)) {
    return;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 0xabf;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel partList/mastercount mismatch detected.");
  return;
}
