// Name: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00
// Address: 0044cb00
// Address Range: [[0044cb00, 0044cb5d]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00(CDemonCamera *this_ptr,uint flags)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00(CDemonCamera *this_ptr,uint flags)

{
  CDemonCamera *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonCameraTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = (CCameraView_vtable *)&g_CDemonCameraVTable;
  core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(this_ptr);
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_dtor_FUN_00428240(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
