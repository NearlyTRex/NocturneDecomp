// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
// Address: 00478830
// Address Range: [[00478830, 00478946]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(CKeyFramedModel *this_ptr)

{
  int iVar1;
  int *piVar2;
  CDemonTriangle *pCVar3;
  int iVar4;
  
  g_CurrentDebugLine = 0x45e;
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  if (this_ptr->collision_triangle_list != (CDemonTriangle *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&this_ptr->collision_triangle_list[-1].dominant_axis);
  }
  this_ptr->collision_triangle_count = 0;
  this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      iVar1 = 0;
      do {
        iVar4 = iVar4 + 1;
        this_ptr->collision_triangle_count =
             this_ptr->collision_triangle_count +
             *(int *)((int)this_ptr->poly_vert_list->vertices + iVar1 + -0x14) + -2;
        iVar1 = iVar1 + 0x48;
      } while (iVar4 < this_ptr->poly_count);
    }
    iVar4 = this_ptr->frame_count * this_ptr->collision_triangle_count;
    piVar2 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                       (iVar4 * 0x38 + 4,"..\\core\\dmodel.cpp",0x46f);
    pCVar3 = (CDemonTriangle *)0x0;
    if (piVar2 != (int *)0x0) {
      pCVar3 = (CDemonTriangle *)(piVar2 + 1);
      *piVar2 = iVar4;
    }
    this_ptr->collision_triangle_list = pCVar3;
    if (pCVar3 == (CDemonTriangle *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x470;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00478950(this_ptr,&g_ZeroVector.f);
  }
  return;
}
