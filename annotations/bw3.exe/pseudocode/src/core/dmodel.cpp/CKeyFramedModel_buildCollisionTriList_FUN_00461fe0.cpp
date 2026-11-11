// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0
// Address: 00461fe0
// Address Range: [[00461fe0, 004620bc]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  CDemonTriangle *pCVar2;
  int iVar3;
  
  FUN_005a30b6(this_ptr->collision_triangle_list);
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
    pCVar2 = (CDemonTriangle *)
             operator_new_array
                       (this_ptr->frame_count * this_ptr->collision_triangle_count * 0x38);
    this_ptr->collision_triangle_list = pCVar2;
    if (pCVar2 == (CDemonTriangle *)0x0) {
      _DAT_01d71de0 = "..\\core\\dmodel.cpp";
      _DAT_01d71de4 = 0x470;
      core_main_c_FUN_004e4330("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0
              (this_ptr,(CVector3f *)&DAT_02cfd900);
  }
  return;
}
