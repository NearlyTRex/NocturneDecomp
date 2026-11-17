// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0043d1f0
// Address: 0043d1f0
// Address Range: [[0043d1f0, 0043d21c]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0043d1f0(CDemonCamera *this_ptr)

#include "nocturne.h"

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0043d1f0(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = g_CHAR_ARRAY_00b667a8 + g_INT_00b667a4 * 0x4b000;
  if (0x18 < g_INT_00b667a4 + 1U) {
    pcVar1 = (char *)0x0;
  }
  g_INT_00b667a4 = g_INT_00b667a4 + 1U;
  return pcVar1;
}
