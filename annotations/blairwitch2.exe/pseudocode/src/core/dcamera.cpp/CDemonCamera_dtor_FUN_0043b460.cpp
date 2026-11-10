// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460
// Address: 0043b460
// Address Range: [[0043b460, 0043b4bd]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460(CDemonCamera *this_ptr,uint flags)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460(CDemonCamera *this_ptr,uint flags)

{
  CDemonCamera *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDemonCameraTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CCameraView_vtable *)&g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_0043b730(this_ptr);
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_00422220(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
