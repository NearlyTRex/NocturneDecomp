// Name: dll_dx7.cpp_enumAdapterCallback_FUN_100017b0
// Address: 100017b0
// Address Range: [[100017b0, 100018f2]]
// Convention: __stdcall
// Signature: int __stdcall dll_dx7_cpp_enumAdapterCallback_FUN_100017b0(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor)

#include "nocturne.h"

int __stdcall dll_dx7_cpp_enumAdapterCallback_FUN_100017b0(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LPCSTR pCVar6;
  char (*pacVar7) [512];
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(lp_guid);
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    pCVar6 = lp_driver_name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x100) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = lp_driver_name;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = lp_driver_name + (uint)bVar8 * -2 + 1;
        cVar1 = *lp_driver_name;
        lp_driver_name = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pacVar7 = g_AdapterDriverName + g_AdapterCount;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)*pacVar7 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        pacVar7 = (char (*) [512])((int)pacVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pacVar7)[0] = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
        pacVar7 = (char (*) [512])((int)pacVar7 + (uint)bVar8 * -2 + 1);
      }
    }
    else {
      pacVar7 = g_AdapterDriverName + g_AdapterCount;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)*pacVar7 = *(uint *)lp_driver_name;
        lp_driver_name = lp_driver_name + (uint)bVar8 * -8 + 4;
        pacVar7 = (char (*) [512])((int)pacVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      *(ushort *)*pacVar7 = *(ushort *)lp_driver_name;
      *(CHAR *)((int)pacVar7 + (uint)bVar8 * -4 + 2) = lp_driver_name[(uint)bVar8 * -4 + 2];
      g_AdapterDriverName[g_AdapterCount][0xff] = '\0';
    }
    uVar3 = 0xffffffff;
    pCVar6 = lp_driver_description;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x100) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = lp_driver_description;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = lp_driver_description + (uint)bVar8 * -2 + 1;
        cVar1 = *lp_driver_description;
        lp_driver_description = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pacVar7 = g_AdapterDescription + g_AdapterCount;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)*pacVar7 = *(uint *)pcVar5;
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        pacVar7 = (char (*) [512])((int)pacVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        (*pacVar7)[0] = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
        pacVar7 = (char (*) [512])((int)pacVar7 + (uint)bVar8 * -2 + 1);
      }
    }
    else {
      pacVar7 = g_AdapterDescription + g_AdapterCount;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)*pacVar7 = *(uint *)lp_driver_description;
        lp_driver_description = lp_driver_description + (uint)bVar8 * -8 + 4;
        pacVar7 = (char (*) [512])((int)pacVar7 + ((uint)bVar8 * -2 + 1) * 4);
      }
      *(ushort *)*pacVar7 = *(ushort *)lp_driver_description;
      *(CHAR *)((int)pacVar7 + (uint)bVar8 * -4 + 2) = lp_driver_description[(uint)bVar8 * -4 + 2];
      g_AdapterDescription[g_AdapterCount][0xff] = '\0';
    }
    if (lp_guid == (GUID *)0x0) {
      g_AdapterGuids[g_AdapterCount] = (GUID *)0x0;
    }
    else {
      *(uint *)(g_AdapterGuidStorage + g_AdapterCount) = *(uint *)lp_guid;
      g_AdapterGuids[g_AdapterCount] = g_AdapterGuidStorage + g_AdapterCount;
      *(uint *)&g_AdapterGuidStorage[g_AdapterCount].field_0x4 =
           *(uint *)&lp_guid->field_0x4;
      *(uint *)&g_AdapterGuidStorage[g_AdapterCount].field_0x8 =
           *(uint *)&lp_guid->field_0x8;
      *(uint *)&g_AdapterGuidStorage[g_AdapterCount].field_0xc =
           *(uint *)&lp_guid->field_0xc;
    }
    g_AdapterCount = g_AdapterCount + 1;
    if (0xf < g_AdapterCount) {
      return 0;
    }
  }
  return 1;
}
