// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044a9f0
// Address: 0044a9f0
// Address Range: [[0044a9f0, 0044aa1c]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044a9f0(CDemonCamera *this_ptr)

#include "nocturne.h"

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044a9f0(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = g_CHAR_ARRAY_00b9e558 + g_INT_00b9e554 * 0x4b000;
  if (0x18 < g_INT_00b9e554 + 1U) {
    pcVar1 = (char *)0x0;
  }
  g_INT_00b9e554 = g_INT_00b9e554 + 1U;
  return pcVar1;
}
