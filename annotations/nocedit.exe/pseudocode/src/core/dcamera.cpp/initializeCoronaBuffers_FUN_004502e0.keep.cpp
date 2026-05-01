// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
// Address: 004502e0
// MANUAL RECONSTRUCTION
// Address Range: [[004502e0, 00450313]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void)

{
  int iVar2;

  memset(g_CoronaDepthBuffer,0x7f,0x4b000);
  for (iVar2 = 0; iVar2 < 240; iVar2 = iVar2 + 1) {
    g_CoronaRightExtent[iVar2] = 0x13f;
    g_CoronaLeftExtent[iVar2] = 0;
  }
  return;
}
