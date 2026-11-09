// Name: unkafter_alphabit.cpp_FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00411a3f]]
// Convention: unknown
// Signature: void unkafter_alphabit_cpp_FUN_00411a10(void)

#include "nocturne.h"

void unkafter_alphabit_cpp_FUN_00411a10(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007dff88) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_007dff8c + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
    } while (iVar2 < DAT_007dff88);
  }
  return;
}
