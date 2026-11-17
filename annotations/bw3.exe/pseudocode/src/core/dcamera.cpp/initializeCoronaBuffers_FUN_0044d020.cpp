// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_0044d020
// Address: 0044d020
// Address Range: [[0044d020, 0044d053]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_0044d020(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_0044d020(void)

{
  int iVar1;
  int iVar2;
  
  memset(g_INT_ARRAY_ARRAY_014fba80,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_INT_ARRAY_014fb6c0 + iVar2) = 0x13f;
    *(uint *)((int)g_INT_ARRAY_014fb300 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
