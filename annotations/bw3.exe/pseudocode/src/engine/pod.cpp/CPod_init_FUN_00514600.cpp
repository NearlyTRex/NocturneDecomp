// Name: engine_pod.cpp_CPod_init_FUN_00514600
// Address: 00514600
// Address Range: [[00514600, 00514648]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_init_FUN_00514600(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_init_FUN_00514600(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\pod.cpp";
    g_INT_01d71de4 = 0x4a2;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPod::init - No .POD to init!");
    if (iRam00000000 != 0) {
      return;
    }
  }
  else if (this_ptr->pod_file_count != 0) {
    return;
  }
  (*this_ptr->vtable->load)(this_ptr);
  return;
}
