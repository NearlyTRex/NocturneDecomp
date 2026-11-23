// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_0045daf0
// Address: 0045daf0
// Address Range: [[0045daf0, 0045db31]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0045daf0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_0045daf0(CDemonLight *this_ptr)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)malloc(0x10000);
  this_ptr->filter_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dlight.cpp";
  g_CurrentLineNumber = 1351;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonLight::allocateFilter - Out of memory");
  return;
}
