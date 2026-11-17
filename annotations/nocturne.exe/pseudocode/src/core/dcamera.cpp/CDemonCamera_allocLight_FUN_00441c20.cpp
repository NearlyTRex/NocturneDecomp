// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_00441c20
// Address: 00441c20
// Address Range: [[00441c20, 00441c4c]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_00441c20(CDemonCamera *this_ptr)

#include "nocturne.h"

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_00441c20(CDemonCamera *this_ptr)

{
  char (*pacVar1) [307200];
  
  pacVar1 = g_CHAR_ARRAY_ARRAY_00b0e608 + g_INT_00b0e604;
  if (0x18 < g_INT_00b0e604 + 1U) {
    pacVar1 = (char (*) [307200])0x0;
  }
  g_INT_00b0e604 = g_INT_00b0e604 + 1U;
  return *pacVar1;
}
