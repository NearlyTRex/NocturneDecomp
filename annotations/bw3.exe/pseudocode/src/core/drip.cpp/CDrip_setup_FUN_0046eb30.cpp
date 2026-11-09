// Name: core_drip.cpp_CDrip_setup_FUN_0046eb30
// Address: 0046eb30
// Address Range: [[0046eb30, 0046ebb9]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_setup_FUN_0046eb30(CDrip *this_ptr)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_setup_FUN_0046eb30(CDrip *this_ptr)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x2ec = 0;
  *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x2f8;
  *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2fc;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&this_ptr->field_0x300;
  uVar1 = core_actor_cpp_FUN_0040ce40
                    (*(uint *)&this_ptr->field_0x2e0,*(uint *)&this_ptr->field_0x2e4);
  *(uint *)&this_ptr->field_0x2dc = uVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)0x1c0b3dc,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)0x1c0b3dc);
  *(uint *)&this_ptr->field_0x338 = 0;
  return;
}
