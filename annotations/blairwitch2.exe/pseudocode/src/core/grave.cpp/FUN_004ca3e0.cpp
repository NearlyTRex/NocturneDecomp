// Name: core_grave.cpp_FUN_004ca3e0
// Address: 004ca3e0
// Address Range: [[004ca3e0, 004ca437]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_FUN_004ca3e0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_FUN_004ca3e0(CGrave *this_ptr)

{
  if ((*(int *)&this_ptr->field_0x438 == 0) && (*(int *)&this_ptr->field_0x43c == 0)) {
    *(uint *)&this_ptr->field_0x43c = 1;
    *(uint *)&this_ptr->field_0x430 = 0;
    if (this_ptr->field_0x4a8 != '\0') {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0x4a8);
    }
    core_set_cpp_FUN_0052dd80(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  }
  return;
}
