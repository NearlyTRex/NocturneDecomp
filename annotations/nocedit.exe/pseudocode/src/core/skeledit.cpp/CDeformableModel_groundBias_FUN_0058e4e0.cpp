// Name: core_skeledit.cpp_CDeformableModel_groundBias_FUN_0058e4e0
// Address: 0058e4e0
// Address Range: [[0058e4e0, 0058e5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_groundBias_FUN_0058e4e0(CDeformableModel *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_groundBias_FUN_0058e4e0(CDeformableModel *this_ptr,int motion_index,float frame_number)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3i *pCVar1;
  CDeformableModelInstance *this_ptr_01;
  int iVar1;
  int iVar2;
  CVector3f local_20;
  int local_14;
  
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
  iVar2 = 0;
  iVar1 = pCVar1->y;
  if (0 < this_ptr->vertex_count[0]) {
    do {
      if (pCVar1->y < iVar1) {
        iVar1 = pCVar1->y;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < this_ptr->vertex_count[0]);
  }
  local_20.x = g_ZeroVector.f.x;
  local_20.z = g_ZeroVector.f.z;
  local_20.y = (float)-iVar1 * (float)0.00390625;
  core_skeledit_cpp_CDeformableModel_offsetRootVertices_FUN_0058e600(this_ptr,&local_20);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x9d1;
  (*((this_ptr_01->motion_controller).vtable)->dtor)(&this_ptr_01->motion_controller,2);
  return;
}
