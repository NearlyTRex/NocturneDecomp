// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
// Address: 0059de40
// Address Range: [[0059de40, 0059deae]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40 (CDeformableModelInstance *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModelInstance * __cdecl
core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
          (CDeformableModelInstance *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDeformableModelInstanceTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->motion_controller).vtable = &g_CDeformableModelInstanceVTable;
  core_skeleton_cpp_CDeformableModelInstance_free_FUN_0059df40(this_ptr);
  pCVar1 = core_curtain_cpp_freeVectors_FUN_0044baf0(this_ptr->transformed_vertices);
  ptr = (CDeformableModelInstance *)
        core_motion_cpp_CMotionController_dtor_FUN_0052d5a0((CMotionController *)&pCVar1[-8].z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
