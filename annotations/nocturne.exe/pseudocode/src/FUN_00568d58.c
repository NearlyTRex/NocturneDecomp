// Name: FUN_00568d58
// Address: 00568d58
// Address Range: [[00568d58, 00568e06]]
// Convention: unknown
// Signature: undefined4 FUN_00568d58(uint param_1)

#include "nocturne.h"

uint FUN_00568d58(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (0x00000001 == 0) {
    return 0;
  }
  if (DAT_005c1cc8 == -2) {
    return 0;
  }
  iVar1 = FUN_00568e1c(&param_1);
  uVar5 = 0;
  if (iVar1 != 0) {
    puVar2 = VirtualAlloc((LPVOID)0x0,param_1,0x1000,0x40);
    uVar5 = 0;
    if (puVar2 != (uint *)0x0) {
      uVar3 = param_1 - 4;
      if (param_1 < uVar3) {
        return 0;
      }
      if (uVar3 < 0x38) {
        return 0;
      }
      *puVar2 = uVar3;
      param_1 = uVar3;
      puVar4 = (uint *)FUN_00568ce0(puVar2);
      param_1 = *puVar4;
      *puVar4 = param_1 | 1;
      puVar2[5] = 0;
      puVar2[6] = puVar2[6] + 1;
      FUN_005638e0(puVar4 + 1);
      uVar5 = 1;
    }
  }
  return uVar5;
}
