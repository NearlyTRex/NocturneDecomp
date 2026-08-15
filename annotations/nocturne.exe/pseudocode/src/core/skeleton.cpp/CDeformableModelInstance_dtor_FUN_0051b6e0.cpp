// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
// Address: 0051b6e0
// Address Range: [[0051b6e0, 0051b74e]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete
                       (this_ptr,&g_CDeformableModelInstanceTypeInfo_005a1f00);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  (this_ptr->motion_controller).vtable = &g_CDeformableModelInstanceVTable;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0051b7d0(this_ptr);
  pCVar1 = core_curtain_cpp_CVector3f_arrdtor100_FUN_0043f9a0(this_ptr->transformed_vertices,0);
  ptr = (CDeformableModelInstance *)
        core_motion_cpp_CMotionController_dtor_FUN_004e1150((CMotionController *)&pCVar1[-8].z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
