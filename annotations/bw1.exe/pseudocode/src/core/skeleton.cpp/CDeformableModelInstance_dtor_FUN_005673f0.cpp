// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
// Address: 005673f0
// Address Range: [[005673f0, 0056744d]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance *this_ptr,uint flags)

{
  CDeformableModelInstance *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDeformableModelInstanceTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CMotionController_vtable *)&g_CDeformableModelInstanceVTable;
  core_skeleton_cpp_CDeformableModelInstance_free_FUN_005674d0(this_ptr);
  pCVar1 = (CDeformableModelInstance *)
           core_motion_cpp_CMotionController_dtor_FUN_00524200(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
