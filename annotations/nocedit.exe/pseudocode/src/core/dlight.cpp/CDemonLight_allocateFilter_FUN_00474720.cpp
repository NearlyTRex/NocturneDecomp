// Name: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
// Address: 00474720
// Address Range: [[00474720, 0047476b]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(CDemonLight *this_ptr)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x10000,"..\\core\\dlight.cpp",0x53f);
  this_ptr->filter_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dlight.cpp";
  g_CurrentLineNumber = 0x541;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::allocateFilter - Out of memory");
  return;
}
