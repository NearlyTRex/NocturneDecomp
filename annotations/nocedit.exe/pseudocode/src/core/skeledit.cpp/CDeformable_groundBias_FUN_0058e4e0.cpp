// Name: core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0
// Address: 0058e4e0
// Address Range: [[0058e4e0, 0058e5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformable_groundBias_FUN_0058e4e0(CDeformableModel *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformable_groundBias_FUN_0058e4e0(CDeformableModel *this_ptr,int motion_index,float frame_number)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3i *pCVar1;
  CDeformableModelInstance *this_ptr_01;
  int iVar2;
  int iVar3;
  
  __STK();
  this_ptr_00 = (CDeformableModelInstance *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x9bc);
  this_ptr_01 = (CDeformableModelInstance *)0x0;
  if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr_00);
  }
  if (this_ptr_01 == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x9bd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::groundBias - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(this_ptr_01,this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
            (this_ptr_01,motion_index,frame_number);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_01,0);
  pCVar1 = this_ptr_01->skinned_vertices_buffer;
  iVar3 = 0;
  iVar2 = pCVar1->y;
  if (0 < this_ptr->vertex_count[0]) {
    do {
      if (pCVar1->y < iVar2) {
        iVar2 = pCVar1->y;
      }
      iVar3 = iVar3 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar3 < this_ptr->vertex_count[0]);
  }
  core_skeledit_cpp_CDeformableModel_FUN_0058e600(this_ptr);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x9d1;
  (*((this_ptr_01->motion_controller).vtable)->dtor)(&this_ptr_01->motion_controller);
  return;
}
