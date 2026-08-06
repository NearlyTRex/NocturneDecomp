// Name: engine_pod.cpp_CPod_init_FUN_004f8af0
// Address: 004f8af0
// Address Range: [[004f8af0, 004f8b38]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_init_FUN_004f8af0(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_init_FUN_004f8af0(CPod *this_ptr)

{
  if (this_ptr == (CPod *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 702;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPod::init - No .POD to init!");
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
