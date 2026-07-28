// Name: FUN_005711a8
// Address: 005711a8
// Address Range: [[005711a8, 0057127c]]
// Convention: unknown
// Signature: undefined4 * FUN_005711a8(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_005711a8(void)

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
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae8)();
  DVar2 = GetCurrentThreadId();
  for (puVar1 = _DAT_02de5d70; (puVar1 != (uint *)0x0 && (DVar2 != puVar1[1]));
      puVar1 = (uint *)*puVar1) {
  }
  if (puVar1[3] == 0) {
    lpTlsValue = (uint *)FUN_00565c50(1,0x000000F4);
    if (lpTlsValue == (uint *)0x0) {
      HandleRuntimeError("Unable to resize thread-specific data\r\n",1);
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
    lpTlsValue = (uint *)realloc((void *)puVar1[2],0x000000F4);
    if (lpTlsValue == (uint *)0x0) {
      HandleRuntimeError("Unable to resize thread-specific data\r\n",1);
    }
  }
  puVar1[2] = lpTlsValue;
  lpTlsValue[0x3c] = 0x000000F4;
  DVar2 = DAT_005c1ab8;
  *(byte *)((int)lpTlsValue + 0x52) = 1;
  *(byte *)((int)lpTlsValue + 0x53) = 0;
  TlsSetValue(DVar2,lpTlsValue);
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1aec)();
  return lpTlsValue;
}
