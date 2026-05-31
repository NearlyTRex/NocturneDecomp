// Name: core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
// Address: 0047bf40
// MANUAL RECONSTRUCTION
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
  int local_28;
  SMRGLPrimitiveQuad *quad;
  int iVar1;
  
  iVar4 = 0;
  iVar2 = 0;
  local_28 = 0;
  if (0 < this_ptr->part_count) {
    iVar7 = iVar2;
    iVar5 = iVar4;
    do {
      iVar4 = this_ptr->part_list[local_28].vertex_count + iVar5;
      iVar2 = this_ptr->part_list[local_28].poly_count + iVar7;
      if (iVar7 < iVar2) {
        quad = this_ptr->poly_vert_list + iVar7;
        do {
          iVar3 = 0;
          while (iVar3 < quad->base.base.count) {
            iVar1 = quad->vertices[iVar3].vertex_index;
            if ((iVar1 < iVar5) || (iVar4 <= iVar1)) {
              g_CurrentFilename = "..\\core\\dmodel.cpp";
              g_CurrentLineNumber = 0xab6;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel part vertex overlap detected!");
            }
            iVar3 = iVar3 + 1;
          }
          quad = quad + 1;
        } while (quad < this_ptr->poly_vert_list + iVar2);
      }
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
