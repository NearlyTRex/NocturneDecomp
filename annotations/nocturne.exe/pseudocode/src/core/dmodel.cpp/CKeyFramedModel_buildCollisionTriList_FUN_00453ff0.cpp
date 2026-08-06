// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
// Address: 00453ff0
// Address Range: [[00453ff0, 004540f2]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  int *piVar2;
  CDemonTriangle *pCVar3;
  int iVar4;
  
  if (this_ptr->collision_triangle_list != (CDemonTriangle *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->collision_triangle_list[-1].dominant_axis);
  }
  this_ptr->collision_triangle_count = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    iVar1 = 0;
    if (0 < this_ptr->poly_count) {
      iVar4 = 0;
      do {
        iVar1 = iVar1 + 1;
        this_ptr->collision_triangle_count =
             this_ptr->collision_triangle_count +
             *(int *)((int)this_ptr->poly_vert_list->vertices + iVar4 + -0x14) + -2;
        iVar4 = iVar4 + 0x48;
      } while (iVar1 < this_ptr->poly_count);
    }
    iVar1 = this_ptr->frame_count * this_ptr->collision_triangle_count;
    piVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar1 * 0x38 + 4);
    pCVar3 = (CDemonTriangle *)0x0;
    if (piVar2 != (int *)0x0) {
      pCVar3 = (CDemonTriangle *)(piVar2 + 1);
      *piVar2 = iVar1;
    }
    this_ptr->collision_triangle_list = pCVar3;
    if (pCVar3 == (CDemonTriangle *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 1136;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
              (this_ptr,(CVector3f *)&DAT_02dd1184);
  }
  return;
}
