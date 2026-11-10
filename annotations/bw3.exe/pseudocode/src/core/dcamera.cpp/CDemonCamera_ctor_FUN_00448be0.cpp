// Name: core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0
// Address: 00448be0
// Address Range: [[00448be0, 00448c3a]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_00448be0(CDemonCamera *this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_00448be0(CDemonCamera *this_ptr)

{
  CDemonCamera *pCVar1;
  
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_ctor_FUN_004254b0(&this_ptr->base);
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
