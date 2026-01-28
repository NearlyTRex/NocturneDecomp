// Name: core_stranger.cpp_CStranger_FUN_005c5170
// Address: 005c5170
// Address Range: [[005c5170, 005c51b0]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5170(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c5170(CStranger *this_ptr)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_38 [12];
  
  bVar3 = 0;
  core_stranger_cpp_CStranger_FUN_005c07b0();
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
