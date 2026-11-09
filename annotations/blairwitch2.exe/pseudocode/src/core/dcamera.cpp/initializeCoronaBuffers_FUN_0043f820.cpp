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
  
  memset((void *)0x14c3cd0,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x14c3910) = 0x13f;
    *(uint *)(iVar2 + 0x14c3550) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
