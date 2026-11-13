// Name: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
// Address: 00544d50
// Address Range: [[00544d50, 00544dad]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance *this_ptr,uint flags)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance *this_ptr,uint flags)

{
  CDeformableModelInstance *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDeformableModelInstanceTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CMotionController_vtable *)&g_CDeformableModelInstanceVTable;
  core_skeleton_cpp_CDeformableModelInstance_free_FUN_00544e30(this_ptr);
  pCVar1 = (CDeformableModelInstance *)
           core_motion_cpp_CMotionController_dtor_FUN_00503050(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
