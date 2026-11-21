// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0
// Address: 00461fe0
// Address Range: [[00461fe0, 004620bc]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  CDemonTriangle *pCVar2;
  int iVar3;
  
  free(this_ptr->collision_triangle_list);
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  this_ptr->collision_triangle_count = 0;
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    iVar1 = 0;
    if (0 < this_ptr->poly_count) {
      iVar3 = 0;
      do {
        iVar1 = iVar1 + 1;
        this_ptr->collision_triangle_count =
             this_ptr->collision_triangle_count +
             *(int *)((int)this_ptr->poly_vert_list->vertices + iVar3 + -0x14) + -2;
        iVar3 = iVar3 + 0x48;
      } while (iVar1 < this_ptr->poly_count);
    }
    pCVar2 = operator_new_array
                       (this_ptr->frame_count * this_ptr->collision_triangle_count * 0x38);
    this_ptr->collision_triangle_list = pCVar2;
    if (pCVar2 == (CDemonTriangle *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 1136;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0(this_ptr,&g_ZeroVector);
  }
  return;
}
