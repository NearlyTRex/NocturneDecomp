// Name: core_prye.cpp_CPrye_reset_FUN_00526f50
// Address: 00526f50
// Address Range: [[00526f50, 00526fb4]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_reset_FUN_00526f50(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_reset_FUN_00526f50(CPrye *this_ptr)

{
  core_hero_cpp_FUN_004d4410(this_ptr);
  *(uint *)&this_ptr->field_0x20c20 = 0;
  *(uint *)&this_ptr->field_0x20c24 = 0;
  *(uint *)&this_ptr->field_0x20b64 = 0;
  *(uint *)&this_ptr->field_0x2f00 = 0;
  *(uint *)&this_ptr->field_0x2f04 = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
            ((CMotionController *)&this_ptr->field_0x158,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&this_ptr->field_0x158,0,1);
  return;
}
