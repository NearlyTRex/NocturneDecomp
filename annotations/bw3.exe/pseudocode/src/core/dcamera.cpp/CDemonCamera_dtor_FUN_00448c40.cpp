// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40
// Address: 00448c40
// Address Range: [[00448c40, 00448c9d]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_00448c40(CDemonCamera *this_ptr,uint flags)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_00448c40(CDemonCamera *this_ptr,uint flags)

{
  CDemonCamera *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDemonCameraTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CCameraView_vtable *)&g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_00448f30(this_ptr);
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_004254d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
