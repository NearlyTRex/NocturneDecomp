// Name: core_dcamera.cpp_initializeCoronaBuffers_FUN_00450ee0
// Address: 00450ee0
// Address Range: [[00450ee0, 00450f13]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00450ee0(void)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00450ee0(void)

{
  int iVar1;
  int iVar2;
  
  memset(g_INT_ARRAY_ARRAY_014df1d0,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_INT_ARRAY_014dee10 + iVar2) = 0x13f;
    *(uint *)((int)g_INT_ARRAY_014dea50 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
