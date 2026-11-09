// Name: engine_winfont.cpp_FUN_0057fed0
// Address: 0057fed0
// Address Range: [[0057fed0, 0058010c]]
// Convention: unknown
// Signature: void engine_winfont_cpp_FUN_0057fed0(int param_1,undefined4 param_2,LPCSTR param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

void engine_winfont_cpp_FUN_0057fed0(int param_1,uint param_2,LPCSTR param_3,int param_4,int param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint *puVar8;
  LPCSTR pCVar9;
  char *pcVar10;
  byte bVar11;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  pCVar9 = param_3;
  pcVar10 = (char *)(param_1 + 0x6a5c);
  do {
    cVar1 = *pCVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar9[1];
    pCVar9 = pCVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar2 = (**(code **)(*(int *)(param_1 + 0x6a44) + 8))(param_1,param_3);
  *(uint *)(param_1 + 0x6b5c) = uVar2;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x6a44) + 0xc))(param_1,param_3);
  *(uint *)(param_1 + 0x6b60) = uVar2;
  uVar5 = 0xffffffff;
  pcVar10 = (char *)(param_1 + 0x6a5c);
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  SetTextColor(*(HDC *)(param_1 + 0x6a48),0);
  TextOutA(*(HDC *)(param_1 + 0x6a48),0,0,param_3,~uVar5 - 1);
  if (*(int *)(param_1 + 0x6b64) + param_4 < DAT_005fba18) {
    iVar6 = *(int *)(param_1 + 0x6b64);
  }
  else {
    iVar6 = DAT_005fba18 - param_4;
  }
  if (*(int *)(param_1 + 0x6b68) + param_5 < DAT_005fba1c) {
    iStack_2c = *(int *)(param_1 + 0x6b68);
  }
  else {
    iStack_2c = DAT_005fba1c - param_5;
  }
  if (*(int *)(param_1 + 0x6b5c) < iVar6) {
    iVar6 = *(int *)(param_1 + 0x6b5c);
  }
  if (*(int *)(param_1 + 0x6b60) < iStack_2c) {
    iStack_2c = *(int *)(param_1 + 0x6b60);
  }
  if (DAT_005fba20 == 0x10) {
    iStack_18 = 0;
    if (0 < iStack_2c) {
      iStack_24 = param_5;
      do {
        iVar3 = iStack_24 + *(int *)(param_1 + 0x6b78);
        if ((-1 < iVar3) && (iVar3 < DAT_005fba1c)) {
          iVar4 = 0;
          if (0 < iVar6) {
            puVar7 = (ushort *)(param_4 * 2 + *(int *)(&DAT_01c5faec + iVar3 * 4));
            do {
              if (*(short *)(*(int *)(param_1 + 0x6a58) +
                            (iStack_18 * *(int *)(param_1 + 0x6b64) + iVar4) * 2) != 0x7c1f) {
                *puVar7 = (short)param_6;
              }
              iVar4 = iVar4 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar4 < iVar6);
          }
        }
        iStack_24 = iStack_24 + 1;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_2c);
    }
  }
  else {
    iStack_1c = 0;
    if (0 < iStack_2c) {
      iStack_28 = param_5;
      do {
        iVar3 = iStack_28 + *(int *)(param_1 + 0x6b78);
        if ((-1 < iVar3) && (iVar3 < DAT_005fba1c)) {
          iVar4 = 0;
          if (0 < iVar6) {
            puVar8 = (uint *)(*(int *)(&DAT_01c5faec + iVar3 * 4) + param_4 * 4);
            do {
              if (*(int *)(*(int *)(param_1 + 0x6a58) +
                          (iStack_1c * *(int *)(param_1 + 0x6b64) + iVar4) * 4) != 0xff00ff) {
                *puVar8 = param_6;
              }
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 < iVar6);
          }
        }
        iStack_28 = iStack_28 + 1;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < iStack_2c);
    }
  }
  return;
}
