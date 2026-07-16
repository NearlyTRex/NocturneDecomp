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
  char (*pacVar6) [512];
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = FUN_10001900(param_1);
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    pcVar5 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x100) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_3;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_3 + (uint)bVar7 * -2 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pacVar6 = g_AdapterDriverName + g_AdapterCount;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)*pacVar6 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
        pacVar6 = (char (*) [512])((int)pacVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pacVar6)[0] = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
        pacVar6 = (char (*) [512])((int)pacVar6 + (uint)bVar7 * -2 + 1);
      }
    }
    else {
      pacVar6 = g_AdapterDriverName + g_AdapterCount;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)*pacVar6 = *(uint *)param_3;
        param_3 = param_3 + (uint)bVar7 * -8 + 4;
        pacVar6 = (char (*) [512])((int)pacVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      *(ushort *)*pacVar6 = *(ushort *)param_3;
      *(char *)((int)pacVar6 + (uint)bVar7 * -4 + 2) = param_3[(uint)bVar7 * -4 + 2];
      g_AdapterDriverName[g_AdapterCount][0xff] = '\0';
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x100) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_2 + (uint)bVar7 * -2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pacVar6 = g_AdapterDescription + g_AdapterCount;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)*pacVar6 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
        pacVar6 = (char (*) [512])((int)pacVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pacVar6)[0] = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
        pacVar6 = (char (*) [512])((int)pacVar6 + (uint)bVar7 * -2 + 1);
      }
    }
    else {
      pacVar6 = g_AdapterDescription + g_AdapterCount;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)*pacVar6 = *(uint *)param_2;
        param_2 = param_2 + (uint)bVar7 * -8 + 4;
        pacVar6 = (char (*) [512])((int)pacVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      *(ushort *)*pacVar6 = *(ushort *)param_2;
      *(char *)((int)pacVar6 + (uint)bVar7 * -4 + 2) = param_2[(uint)bVar7 * -4 + 2];
      g_AdapterDescription[g_AdapterCount][0xff] = '\0';
    }
    if (param_1 == (uint *)0x0) {
      g_AdapterGuids[g_AdapterCount] = (GUID *)0x0;
    }
    else {
      *(uint *)(g_AdapterGuidStorage + g_AdapterCount) = *param_1;
      g_AdapterGuids[g_AdapterCount] = g_AdapterGuidStorage + g_AdapterCount;
      *(uint *)&g_AdapterGuidStorage[g_AdapterCount].field_0x4 = param_1[1];
      *(uint *)&g_AdapterGuidStorage[g_AdapterCount].field_0x8 = param_1[2];
      *(uint *)&g_AdapterGuidStorage[g_AdapterCount].field_0xc = param_1[3];
    }
    g_AdapterCount = g_AdapterCount + 1;
    if (0xf < g_AdapterCount) {
      return 0;
    }
  }
  return 1;
}
