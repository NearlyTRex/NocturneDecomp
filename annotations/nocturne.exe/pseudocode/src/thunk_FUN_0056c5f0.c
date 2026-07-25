// Name: thunk_FUN_0056c5f0
// Address: 00566440
// Address Range: [[00566440, 00566444]]
// Convention: unknown
// Signature: undefined4 * thunk_FUN_0056c5f0(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * thunk_FUN_0056c5f0(uint *param_1,uint param_2)

{
  DWORD DVar1;
  uint uVar2;
  CHAR *pCVar3;
  uint *puVar4;
  byte bVar5;
  CHAR aCStack_110 [260];
  
  bVar5 = 0;
  DVar1 = GetCurrentDirectoryA(0x104,aCStack_110);
  if (DVar1 == 0) {
    __set_errno();
    param_1 = (uint *)0x0;
  }
  else {
    if (param_1 == (uint *)0x0) {
      uVar2 = DVar1 + 1;
      if (DVar1 + 1 < param_2) {
        uVar2 = param_2;
      }
      param_1 = (uint *)malloc(uVar2);
      if (param_1 == (uint *)0x0) {
        FUN_00568e80(5);
        return (uint *)0x0;
      }
    }
    else if (param_2 < DVar1) {
      FUN_00568e80(0xe);
      return (uint *)0x0;
    }
    pCVar3 = aCStack_110;
    puVar4 = param_1;
    for (uVar2 = DVar1 + 1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *(uint *)pCVar3;
      pCVar3 = (CHAR *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (uVar2 = DVar1 + 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(CHAR *)puVar4 = *pCVar3;
      pCVar3 = (CHAR *)((int)pCVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
  }
  return param_1;
}
