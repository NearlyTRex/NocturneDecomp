// Name: core_dlight.cpp_CDemonLight_ctor_FUN_0045c180
// Address: 0045c180
// Address Range: [[0045c180, 0045c234]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_0045c180(CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_0045c180(CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height)

{
  CDemonLight *pCVar1;
  
  pCVar1 = (CDemonLight *)core_dcamera_cpp_CDemonCamera_ctor_FUN_00448be0((CDemonCamera *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &PTR_core_dlight_cpp_CDemonLight_dtor_FUN_0045c240_005de514;
  *(uint *)&pCVar1->field_0x1cb4 = 1;
  *(uint *)&pCVar1->field_0x1cb8 = 1;
  *(uint *)&pCVar1->field_0x2f94 = 0;
  *(uint *)&pCVar1->field_0x2f98 = 0;
  *(uint *)&pCVar1->field_0x2f9c = 0;
  *(uint *)&pCVar1->field_0x164 = 0;
  *(uint *)&pCVar1->field_0x140 = 0x437f0000;
  *(uint *)&pCVar1->field_0x2fa0 = 0;
  *(uint *)&pCVar1->field_0x1c6c = 0;
  *(uint *)&pCVar1->field_0x1c54 = 0;
  *(uint *)&pCVar1->field_0x2fa4 = 0x10000;
  *(uint *)&pCVar1->field_0x2fa8 = 0x3f800000;
  *(uint *)&pCVar1->field_0x1cbc = 0;
  *(uint *)&pCVar1->field_0x1cd0 = 1;
  *(int *)&pCVar1->field_0x1cc0 = shadow_map_width;
  *(int *)&pCVar1->field_0x1cc4 = shadow_map_height;
  return pCVar1;
}
