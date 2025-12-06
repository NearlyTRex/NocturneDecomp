// Name: engine_pod.cpp_CPod_init_FUN_00550c30
// Address: 00550c30
// Address Range: [[00550c30, 00550c78]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_init_FUN_00550c30(CPod * this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_init_FUN_00550c30(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x3e1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPod::init - No .POD to init!");
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
