// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
// Address: 004502e0
// Address Range: [[004502e0, 00450313]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_004502e0(void)

{
  int iVar1;
  int iVar2;
  
  crt_memory_c_memset_FUN_005fde40(g_CoronaDepthBuffer,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_CoronaRightExtent + iVar2) = 0x13f;
    *(uint *)((int)g_CoronaLeftExtent + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
