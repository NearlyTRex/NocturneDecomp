// Name: crt_unknown.c_FUN_005c26ae
// Address: 005c26ae
// Address Range: [[005c26ae, 005c26b2]]
// Convention: unknown
// Signature: undefined4 * crt_unknown_c_FUN_005c26ae(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * FUN_005c26ae(uint *param_1,uint param_2)

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
    FUN_005c862c();
    param_1 = (uint *)0x0;
  }
  else {
    if (param_1 == (uint *)0x0) {
      uVar2 = DVar1 + 1;
      if (DVar1 + 1 < param_2) {
        uVar2 = param_2;
      }
      param_1 = FUN_005c08d0(uVar2);
      if (param_1 == (uint *)0x0) {
        setErrno(5);
        return (uint *)0x0;
      }
    }
    else if (param_2 < DVar1) {
      setErrno(0xe);
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
