// Name: core_dcamera.cpp_CDemonCamera_free_FUN_0043b730
// Address: 0043b730
// Address Range: [[0043b730, 0043b794]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0043b730(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0043b730(CDemonCamera *this_ptr)

{
  if (*(int *)&this_ptr->field_0x160 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x160);
  }
  *(uint *)&this_ptr->field_0x160 = 0;
  *(uint *)&this_ptr->field_0x158 = 0;
  if (*(int *)&this_ptr->field_0x164 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x164);
  }
  *(uint *)&this_ptr->field_0x164 = 0;
  *(uint *)&this_ptr->field_0x1d0 = 0;
  *(uint *)&this_ptr->field_0x15c = 0;
  return;
}
