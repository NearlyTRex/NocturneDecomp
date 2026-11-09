// Name: engine_pod.cpp_CPod_init_FUN_00514600
// Address: 00514600
// Address Range: [[00514600, 00514648]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_init_FUN_00514600(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_init_FUN_00514600(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x4a2;
    core_main_c_FUN_004e4330("CPod::init - No .POD to init!");
    if (iRam00000000 != 0) {
      return;
    }
  }
  else if (*(int *)this_ptr != 0) {
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x194 + 4))(this_ptr);
  return;
}
