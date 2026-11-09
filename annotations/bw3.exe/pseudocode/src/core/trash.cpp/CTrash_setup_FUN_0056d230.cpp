// Name: core_trash.cpp_CTrash_setup_FUN_0056d230
// Address: 0056d230
// Address Range: [[0056d230, 0056d2ee]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_setup_FUN_0056d230(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_setup_FUN_0056d230(CTrash *this_ptr)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x308 = 0;
  *(uint *)&this_ptr->field_0x304 = *(uint *)&this_ptr->field_0x308;
  *(uint *)&this_ptr->field_0x300 = *(uint *)&this_ptr->field_0x304;
  *(uint *)&this_ptr->field_0x2f0 = 0;
  *(uint *)&this_ptr->field_0x2ec = *(uint *)&this_ptr->field_0x2f0;
  *(uint *)&this_ptr->field_0x2e8 = *(uint *)&this_ptr->field_0x2ec;
  *(uint *)&this_ptr->field_0x2e0 = 0x3f000000;
  *(uint *)&this_ptr->field_0x2e4 = 0x40000000;
  *(uint *)&this_ptr->field_0x30c = 0x3f800000;
  *(uint *)&this_ptr->field_0x310 = 0x3f800000;
  uVar1 = core_actor_cpp_FUN_0040ce40(0x40c00000,0x41a00000);
  *(uint *)&this_ptr->field_0x314 = uVar1;
  *(uint *)&this_ptr->field_0x320 = 0;
  *(uint *)&this_ptr->field_0x31c = *(uint *)&this_ptr->field_0x320;
  *(uint *)&this_ptr->field_0x318 = *(uint *)&this_ptr->field_0x31c;
  *(uint *)&this_ptr->field_0x324 = 0x41000000;
  return;
}
