// Name: core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0
// Address: 004e6bf0
// Address Range: [[004e6bf0, 004e6c47]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0(CGrave *this_ptr)

{
  if ((*(int *)&this_ptr->field_0x2dc == 0) && (*(int *)&this_ptr->field_0x2e0 == 0)) {
    *(uint *)&this_ptr->field_0x2e0 = 1;
    *(uint *)&this_ptr->field_0x2d4 = 0;
    if (this_ptr->field_0x34c != '\0') {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&this_ptr->field_0x34c);
    }
    core_set_cpp_FUN_0054f060(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  }
  return;
}
