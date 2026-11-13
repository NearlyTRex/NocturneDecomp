// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
// Address: 0054bf80
// Address Range: [[0054bf80, 0054bfdd]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance *this_ptr,uint flags)

{
  CDeformableModelInstance *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDeformableModelInstanceTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CMotionController_vtable *)&g_CDeformableModelInstanceVTable;
  core_skeleton_cpp_CDeformableModelInstance_free_FUN_0054c060(this_ptr);
  pCVar1 = (CDeformableModelInstance *)
           core_motion_cpp_CMotionController_dtor_FUN_004fbb00(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
