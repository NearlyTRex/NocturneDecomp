// Name: crt_unknown.c_FUN_005afb18
// Address: 005afb18
// Address Range: [[005afb18, 005afbec]]
// Convention: unknown
// Signature: undefined4 * crt_unknown_c_FUN_005afb18(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_005afb18(void)

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
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079cc)();
  DVar2 = GetCurrentThreadId();
  for (puVar1 = _DAT_02d261f0; (puVar1 != (uint *)0x0 && (DVar2 != puVar1[1]));
      puVar1 = (uint *)*puVar1) {
  }
  if (puVar1[3] == 0) {
    lpTlsValue = (uint *)calloc(1,0x000000F4);
    if (lpTlsValue == (uint *)0x0) {
      FUN_005acde0("Unable to resize thread-specific data\r\n",1);
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
      FUN_005acde0("Unable to resize thread-specific data\r\n",1);
    }
  }
  puVar1[2] = lpTlsValue;
  lpTlsValue[0x3c] = 0x000000F4;
  DVar2 = DAT_0060799c;
  *(byte *)((int)lpTlsValue + 0x52) = 1;
  *(byte *)((int)lpTlsValue + 0x53) = 0;
  TlsSetValue(DVar2,lpTlsValue);
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d0)();
  return lpTlsValue;
}
