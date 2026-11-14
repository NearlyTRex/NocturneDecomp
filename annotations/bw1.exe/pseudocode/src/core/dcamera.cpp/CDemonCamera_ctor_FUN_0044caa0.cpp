// Name: core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0
// Address: 0044caa0
// Address Range: [[0044caa0, 0044cafa]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044caa0(CDemonCamera *this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044caa0(CDemonCamera *this_ptr)

{
  CDemonCamera *pCVar1;
  
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_ctor_FUN_00428220(&this_ptr->base);
  (pCVar1->base).vtable = (CCameraView_vtable *)&g_CDemonCameraVTable;
  pCVar1->framebuffer_aligned = (void *)0x0;
  pCVar1->framebuffer_raw = (void *)0x0;
  pCVar1->zbuffer_aligned = (void *)0x0;
  pCVar1->zbuffer_raw = (void *)0x0;
  pCVar1->corona_blend_factor = 0;
  pCVar1->scene_open_flag = 0;
  pCVar1->max_distance = 999.9;
  return pCVar1;
}
