// Name: FUN_00444140
// Address: 00444140
// Address Range: [[00444140, 00444173]]
// Convention: unknown
// Signature: void FUN_00444140(void)

#include "nocturne.h"

void FUN_00444140(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00563cc0(0x146ba10,0x7f,0x4b000);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x146b650) = 0x13f;
    *(uint *)(iVar2 + 0x146b290) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x3c0);
  return;
}
