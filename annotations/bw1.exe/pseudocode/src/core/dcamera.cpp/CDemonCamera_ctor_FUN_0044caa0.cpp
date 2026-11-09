// Name: core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0
// Address: 0044caa0
// Address Range: [[0044caa0, 0044cafa]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044caa0(CDemonCamera *this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044caa0(CDemonCamera *this_ptr)

{
  CDemonCamera *pCVar1;
  
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_ctor_FUN_00428220((CCameraView *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CDemonCameraVTable;
  *(uint *)&pCVar1->field_0x158 = 0;
  *(uint *)&pCVar1->field_0x160 = 0;
  *(uint *)&pCVar1->field_0x15c = 0;
  *(uint *)&pCVar1->field_0x164 = 0;
  *(uint *)&pCVar1->field_0x11e8 = 0;
  *(uint *)&pCVar1->field_0x11e4 = 0;
  *(uint *)&pCVar1->field_0x140 = 0x4479f99a;
  return pCVar1;
}
