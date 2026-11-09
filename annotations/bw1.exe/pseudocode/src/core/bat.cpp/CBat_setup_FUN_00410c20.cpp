// Name: core_bat.cpp_CBat_setup_FUN_00410c20
// Address: 00410c20
// Address Range: [[00410c20, 00410c8f]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_setup_FUN_00410c20(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_setup_FUN_00410c20(CBat *this_ptr)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x188);
  core_course_cpp_CCourse_load_FUN_00447db0
            ((CCourse *)&this_ptr->field_0x178,&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411060(this_ptr);
  *(uint *)&this_ptr->field_0x380 = 0;
  uVar1 = core_actor_cpp_FUN_0040cc00
                    (*(uint *)&this_ptr->field_0x378,*(uint *)&this_ptr->field_0x37c);
  *(uint *)&this_ptr->field_0x384 = uVar1;
  return;
}
