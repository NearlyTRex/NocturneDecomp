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
  
  memset((void *)0x14df1d0,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x14dee10) = 0x13f;
    *(uint *)(iVar2 + 0x14dea50) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
