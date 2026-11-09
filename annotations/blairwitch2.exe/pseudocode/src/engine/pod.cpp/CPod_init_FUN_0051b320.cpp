// Name: engine_pod.cpp_CPod_init_FUN_0051b320
// Address: 0051b320
// Address Range: [[0051b320, 0051b368]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_init_FUN_0051b320(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_init_FUN_0051b320(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x432;
    core_main_c_FUN_004e4500("CPod::init - No .POD to init!");
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
