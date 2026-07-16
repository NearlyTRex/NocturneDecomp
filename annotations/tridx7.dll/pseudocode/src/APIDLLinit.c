// Name: APIDLLinit
// Address: 10001a80
// Address Range: [[10001a80, 10001d6c]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLinit(HWND windowHandle,CExternalRendererBridge *interface)

#include "nocturne.h"

int __cdecl APIDLLinit(HWND windowHandle,CExternalRendererBridge *interface)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  code **ppcVar8;
  char *pcVar9;
  CExternalRendererBridge *pCVar10;
  byte bVar11;
  int *piStack_464;
  GUID *pGStack_460;
  uint *puStack_45c;
  uint uStack_458;
  uint *puStack_454;
  int *piStack_450;
  code *pcStack_44c;
  uint uStack_448;
  uint uStack_444;
  int iVar12;
  char acStack_234 [520];
  uint uStack_2c;
  uint uStack_28;
  HWND pHStack_8;
  uint *puStack_4;
  
                    /* 0x1a80  19  APIDLLinit */
  bVar11 = 0;
  uStack_444 = 0x10001a8f;
  APIDLLkill();
  g_AdapterCount = 0;
  uStack_444 = 7;
  uStack_448 = 0;
  pcStack_44c = FUN_100017b0;
  piStack_450 = (int *)0x10001aa7;
  DirectDrawEnumerateExA();
  iVar12 = 0;
  if (0 < g_AdapterCount) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      piStack_450 = (int *)0x0;
      uStack_458 = *(uint *)((int)&DAT_10226870 + iVar6);
      puStack_454 = &DAT_10014184;
      puStack_45c = (uint *)0x10001ad3;
      iVar2 = DirectDrawCreate();
      if (iVar2 != 0) {
        return 0;
      }
      puStack_45c = &DAT_10014188;
      pGStack_460 = &g_IID_IDirectDraw4;
      piStack_464 = DAT_10014184;
      iVar2 = (**(code **)*DAT_10014184)();
      if (iVar2 != 0) {
        return 0;
      }
      ppcVar8 = &pcStack_44c;
      for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppcVar8 = (code *)0x0;
        ppcVar8 = ppcVar8 + (uint)bVar11 * -2 + 1;
      }
      iVar2 = (**(code **)(*DAT_10014188 + 0x6c))(DAT_10014188,&pcStack_44c,0);
      if (iVar2 != 0) {
        return 0;
      }
      uVar3 = 0xffffffff;
      pcVar7 = &stack0xfffffbcc;
      do {
        pcVar9 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar7 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar7 = pcVar9 + -uVar3;
      pcVar9 = (char *)((int)&DAT_101398d0 + iVar5);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar7;
        pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar7 = acStack_234;
      do {
        pcVar9 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar7 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar7 = pcVar9 + -uVar3;
      pcVar9 = (char *)((int)&DAT_10236910 + iVar5);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar7;
        pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
      }
      *(uint *)((int)&DAT_10138ef0 + iVar6) = uStack_2c;
      *(uint *)((int)&DAT_101386b0 + iVar6) = uStack_28;
      if (DAT_10014188 != (int *)0x0) {
        piStack_450 = DAT_10014188;
        puStack_454 = (uint *)0x10001b9d;
        (**(code **)(*DAT_10014188 + 8))();
        DAT_10014188 = (int *)0x0;
      }
      if (DAT_10014184 != (int *)0x0) {
        piStack_450 = DAT_10014184;
        puStack_454 = (uint *)0x10001bbb;
        (**(code **)(*DAT_10014184 + 8))();
        DAT_10014184 = (int *)0x0;
      }
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x200;
      iVar12 = iVar12 + 1;
    } while (iVar12 < g_AdapterCount);
  }
  piStack_450 = (int *)0x0;
  g_WindowHandle = pHStack_8;
  pCVar10 = &g_ExternalRendererBridge;
  for (iVar12 = 0x23; iVar12 != 0; iVar12 = iVar12 + -1) {
    pCVar10->red_bit_position = (int *)*puStack_4;
    puStack_4 = puStack_4 + (uint)bVar11 * -2 + 1;
    pCVar10 = (CExternalRendererBridge *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
  }
  puStack_454 = &DAT_10014184;
  uStack_458 = (&DAT_10226870)[g_SelectedCardIndex];
  puStack_45c = (uint *)0x10001c1b;
  iVar12 = DirectDrawCreate();
  if (iVar12 != 0) {
    puStack_45c = (uint *)0x10001c24;
    APIDLLkill();
    return 0;
  }
  puStack_45c = &DAT_10014188;
  pGStack_460 = &g_IID_IDirectDraw4;
  piStack_464 = DAT_10014184;
  iVar12 = (**(code **)*DAT_10014184)();
  FUN_10001d70(iVar12);
  if (iVar12 != 0) {
    APIDLLkill();
    return 0;
  }
  uStack_448 = 0;
  uStack_444 = 0;
  ppcVar8 = &pcStack_44c;
  pcStack_44c = (code *)0x10000000;
  iVar12 = (**(code **)(*DAT_10014188 + 0x5c))(DAT_10014188,ppcVar8,&piStack_450,&puStack_454);
  if (iVar12 != 0) {
    FUN_10002370();
    APIDLLkill();
    return 0;
  }
  g_LocalVideoMem = (uint)pGStack_460;
  uStack_458 = 0;
  puStack_454 = (uint *)0x0;
  piStack_450 = (int *)0x0;
  puStack_45c = (uint *)0x20000000;
  iVar12 = (**(code **)(*DAT_10014188 + 0x5c))(DAT_10014188,&puStack_45c,&pGStack_460,&piStack_464);
  if (iVar12 != 0) {
    FUN_10002370();
    APIDLLkill();
    return 0;
  }
  g_NonLocalVideoMem = (uint)ppcVar8;
  FUN_10002ea0();
  iVar12 = FUN_10002f40();
  if (iVar12 == 0) {
    return 0;
  }
  FUN_10002370();
  return 1;
}
