// Name: core_drip.cpp_CDrip_setup_FUN_00485450
// Address: 00485450
// Address Range: [[00485450, 004854d9]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_setup_FUN_00485450(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_setup_FUN_00485450(CDrip *this_ptr)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x2ec = 0;
  *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x2f8;
  *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2fc;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&this_ptr->field_0x300;
  uVar1 = core_actor_cpp_FUN_0040cc00
                    (*(uint *)&this_ptr->field_0x2e0,*(uint *)&this_ptr->field_0x2e4);
  *(uint *)&this_ptr->field_0x2dc = uVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)0x1beee04,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)0x1beee04);
  *(uint *)&this_ptr->field_0x338 = 0;
  return;
}
