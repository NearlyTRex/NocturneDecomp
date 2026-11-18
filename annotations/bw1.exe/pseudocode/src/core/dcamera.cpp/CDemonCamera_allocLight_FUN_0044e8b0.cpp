// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044e8b0
// Address: 0044e8b0
// Address Range: [[0044e8b0, 0044e8dc]]
// Convention: __cdecl
// Signature: char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)

#include "nocturne.h"

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044e8b0(CDemonCamera *this_ptr)

{
  char (*pacVar1) [307200];
  
  pacVar1 = g_LightBufferPool + g_LightBufferPoolIndex;
  if (0x18 < g_LightBufferPoolIndex + 1U) {
    pacVar1 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = g_LightBufferPoolIndex + 1U;
  return *pacVar1;
}
