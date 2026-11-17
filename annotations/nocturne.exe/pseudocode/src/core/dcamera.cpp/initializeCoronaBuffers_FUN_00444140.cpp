// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140
// Address: 00444140
// Address Range: [[00444140, 00444173]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140(void)

{
  int iVar1;
  int iVar2;
  
  memset(g_CoronaDepthBuffer,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_CoronaRightExtent + iVar2) = 0x13f;
    *(uint *)((int)g_CoronaLeftExtent + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
