// Name: core_bat.cpp_CBat_setup_FUN_0040eeb0
// Address: 0040eeb0
// Address Range: [[0040eeb0, 0040ef1f]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_setup_FUN_0040eeb0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_setup_FUN_0040eeb0(CBat *this_ptr)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x188);
  core_course_cpp_FUN_00444970((CCourse *)&this_ptr->field_0x178,&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_bat_cpp_CBat_updateCoursePosition_FUN_0040f2f0(this_ptr);
  *(uint *)&this_ptr->field_0x380 = 0;
  uVar1 = core_actor_cpp_FUN_0040ce40(*(uint *)&this_ptr->field_0x378);
  *(uint *)&this_ptr->field_0x384 = uVar1;
  return;
}
