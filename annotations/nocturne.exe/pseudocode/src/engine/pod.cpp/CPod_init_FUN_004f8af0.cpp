// Name: engine_pod.cpp_CPod_init_FUN_004f8af0
// Address: 004f8af0
// Address Range: [[004f8af0, 004f8b38]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_init_FUN_004f8af0(int *param_1)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_init_FUN_004f8af0(int *param_1)

{
  if (param_1 == (int *)0x0) {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x2be;
    core_main_c_FUN_004c8440("CPod::init - No .POD to init!");
    if (iRam00000000 != 0) {
      return;
    }
  }
  else if (*param_1 != 0) {
    return;
  }
  (**(code **)(param_1[0x65] + 4))(param_1);
  return;
}
