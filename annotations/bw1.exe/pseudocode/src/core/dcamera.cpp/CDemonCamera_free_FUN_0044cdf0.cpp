// Name: core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0
// Address: 0044cdf0
// Address Range: [[0044cdf0, 0044ce54]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044cdf0(CDemonCamera *this_ptr)

{
  if (*(int *)&this_ptr->field_0x160 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x160);
  }
  *(uint *)&this_ptr->field_0x160 = 0;
  *(uint *)&this_ptr->field_0x158 = 0;
  if (*(int *)&this_ptr->field_0x164 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x164);
  }
  *(uint *)&this_ptr->field_0x164 = 0;
  *(uint *)&this_ptr->field_0x1d0 = 0;
  *(uint *)&this_ptr->field_0x15c = 0;
  return;
}
