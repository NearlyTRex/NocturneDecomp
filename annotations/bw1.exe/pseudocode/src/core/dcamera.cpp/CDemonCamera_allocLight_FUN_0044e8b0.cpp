// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044e8b0
// Address: 0044e8b0
// Address Range: [[0044e8b0, 0044e8dc]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)

#include "nocturne.h"

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = g_CHAR_ARRAY_00b81ca8 + g_INT_00b81ca4 * 0x4b000;
  if (0x18 < g_INT_00b81ca4 + 1U) {
    pcVar1 = (char *)0x0;
  }
  g_INT_00b81ca4 = g_INT_00b81ca4 + 1U;
  return pcVar1;
}
