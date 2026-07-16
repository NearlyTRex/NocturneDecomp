// Name: FUN_100017b0
// Address: 100017b0
// Address Range: [[100017b0, 100018f2]]
// Convention: unknown
// Signature: undefined4 FUN_100017b0(undefined4 *param_1,char *param_2,char *param_3)

#include "nocturne.h"

uint FUN_100017b0(uint *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = FUN_10001900(param_1);
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    pcVar5 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x100) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_3;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_3 + (uint)bVar8 * -2 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = (char *)(&DAT_101398d0 + g_AdapterCount * 0x80);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar6 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
      }
    }
    else {
      puVar7 = &DAT_101398d0 + g_AdapterCount * 0x80;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *(uint *)param_3;
        param_3 = param_3 + (uint)bVar8 * -8 + 4;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      *(ushort *)puVar7 = *(ushort *)param_3;
      *(char *)((int)puVar7 + (uint)bVar8 * -4 + 2) = param_3[(uint)bVar8 * -4 + 2];
      (&DAT_101399cf)[g_AdapterCount * 0x200] = 0;
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x100) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_2 + (uint)bVar8 * -2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = (char *)(&DAT_10236910 + g_AdapterCount * 0x80);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar6 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
      }
    }
    else {
      puVar7 = &DAT_10236910 + g_AdapterCount * 0x80;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *(uint *)param_2;
        param_2 = param_2 + (uint)bVar8 * -8 + 4;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      *(ushort *)puVar7 = *(ushort *)param_2;
      *(char *)((int)puVar7 + (uint)bVar8 * -4 + 2) = param_2[(uint)bVar8 * -4 + 2];
      (&DAT_10236a0f)[g_AdapterCount * 0x200] = 0;
    }
    if (param_1 == (uint *)0x0) {
      (&DAT_10226870)[g_AdapterCount] = 0;
    }
    else {
      iVar2 = g_AdapterCount * 0x10;
      *(uint *)(&DAT_10226948 + iVar2) = *param_1;
      (&DAT_10226870)[g_AdapterCount] = &DAT_10226948 + iVar2;
      *(uint *)(&DAT_1022694c + iVar2) = param_1[1];
      *(uint *)(&DAT_10226950 + iVar2) = param_1[2];
      *(uint *)(&DAT_10226954 + iVar2) = param_1[3];
    }
    g_AdapterCount = g_AdapterCount + 1;
    if (0xf < g_AdapterCount) {
      return 0;
    }
  }
  return 1;
}
