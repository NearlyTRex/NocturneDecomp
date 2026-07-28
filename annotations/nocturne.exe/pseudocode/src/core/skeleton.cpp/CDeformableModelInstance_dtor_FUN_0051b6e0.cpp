// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
// Address: 0051b6e0
// Address Range: [[0051b6e0, 0051b74e]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete
                    (this_ptr,&g_CDeformableModelInstanceTypeInfo_005a1f00);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  (this_ptr->motion_controller).vtable =
       (CMotionController_vtable *)
       &PTR_core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0_005a1ed4;
  core_skeleton_cpp_FUN_0051b7d0(this_ptr);
  pCVar1 = core_curtain_cpp_CVector3f_arrdtor_FUN_0043f9a0(this_ptr->transformed_vertices,0);
  pCVar2 = (CDeformableModelInstance *)
           core_motion_cpp_CMotionController_dtor_FUN_004e1150((CMotionController *)&pCVar1[-8].z,1)
  ;
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
