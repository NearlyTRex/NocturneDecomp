// Name: unkafter_prye.cpp_FUN_005247b0
// Address: 005247b0
// Address Range: [[005247b0, 005247f3]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_005247b0(int param_1,int param_2)

#include "nocturne.h"

void unkafter_prye_cpp_FUN_005247b0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_38 [12];
  
  bVar3 = 0;
  core_prye_cpp_FUN_0051f490(param_1,*(uint *)(param_1 + 0x25b0 + param_2 * 0x78),param_2);
  puVar2 = auStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
