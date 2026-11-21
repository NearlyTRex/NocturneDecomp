// Name: engine_pod.cpp_CPod_init_FUN_0051b320
// Address: 0051b320
// Address Range: [[0051b320, 0051b368]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_init_FUN_0051b320(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_init_FUN_0051b320(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 1074;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CPod::init - No .POD to init!");
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
