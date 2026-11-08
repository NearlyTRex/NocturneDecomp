// Name: FUN_005c4a88
// Address: 005c4a88
// Address Range: [[005c4a88, 005c4b5c]]
// Convention: unknown
// Signature: undefined4 * FUN_005c4a88(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_005c4a88(void)

{
  uint *puVar1;
  DWORD DVar2;
  uint *lpTlsValue;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  (*(code *)PTR_FUN_0061f2d0)();
  DVar2 = GetCurrentThreadId();
  for (puVar1 = _DAT_026810b0; (puVar1 != (uint *)0x0 && (DVar2 != puVar1[1]));
      puVar1 = (uint *)*puVar1) {
  }
  if (puVar1[3] == 0) {
    lpTlsValue = (uint *)FUN_005b98d0(1,0x000000F4);
    if (lpTlsValue == (uint *)0x0) {
      FUN_005c1c20("Unable to resize thread-specific data\r\n",1);
    }
    uVar4 = ((uint *)puVar1[2])[0x3c];
    puVar5 = (uint *)puVar1[2];
    puVar6 = lpTlsValue;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
    puVar1[3] = 1;
  }
  else {
    lpTlsValue = (uint *)FUN_005b8ce0(puVar1[2],0x000000F4);
    if (lpTlsValue == (uint *)0x0) {
      FUN_005c1c20("Unable to resize thread-specific data\r\n",1);
    }
  }
  puVar1[2] = lpTlsValue;
  lpTlsValue[0x3c] = 0x000000F4;
  DVar2 = DAT_0061f2a0;
  *(byte *)((int)lpTlsValue + 0x52) = 1;
  *(byte *)((int)lpTlsValue + 0x53) = 0;
  TlsSetValue(DVar2,lpTlsValue);
  (*(code *)PTR_FUN_0061f2d4)();
  return lpTlsValue;
}
