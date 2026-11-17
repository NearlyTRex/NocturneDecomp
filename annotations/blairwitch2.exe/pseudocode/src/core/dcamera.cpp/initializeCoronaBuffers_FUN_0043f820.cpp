// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_0043f820
// Address: 0043f820
// Address Range: [[0043f820, 0043f853]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_0043f820(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_0043f820(void)

{
  int iVar1;
  int iVar2;
  
  memset(g_INT_ARRAY_ARRAY_014c3cd0,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_INT_ARRAY_014c3910 + iVar2) = 0x13f;
    *(uint *)((int)g_INT_ARRAY_014c3550 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
