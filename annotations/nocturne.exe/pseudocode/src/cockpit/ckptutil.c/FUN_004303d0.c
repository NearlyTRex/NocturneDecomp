// Name: cockpit_ckptutil.c_FUN_004303d0
// Address: 004303d0
// Address Range: [[004303d0, 0043058d]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_004303d0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_004303d0(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte *puVar2;
  uint *puVar3;
  ulong size;
  byte *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  char acStack_78 [80];
  uint uStack_28;
  uint *puStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar10 = 0;
  uStack_18 = param_2 * param_4;
  size = param_2 * param_3 * param_4;
  puStack_24 = (uint *)malloc(size);
  if (puStack_24 == (uint *)0x0) {
    _sprintf(acStack_78,"Unable to allocate %u bytes for temporary rotated bitmap.",size);
    g_CurrentLineNumber = 2050;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_004c8440(acStack_78);
  }
  if (param_4 == 1) {
    uVar6 = 0;
    if (param_3 != 0) {
      uStack_28 = uStack_18;
      iVar8 = 0;
      do {
        puVar2 = (byte *)((int)param_1 + iVar8);
        puVar4 = (byte *)((int)puStack_24 + (param_3 - uVar6) + -1);
        uVar1 = 0;
        if (uStack_18 != 0) {
          do {
            *puVar4 = *puVar2;
            uVar1 = uVar1 + 1;
            puVar4 = puVar4 + param_3;
            puVar2 = puVar2 + 1;
          } while (uVar1 < uStack_18);
        }
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + uStack_18;
      } while (uVar6 < param_3);
    }
  }
  else {
    uStack_20 = 0;
    if (param_3 != 0) {
      iStack_1c = param_3 * param_4;
      do {
        puVar5 = (uint *)((int)puStack_24 + ((param_3 - uStack_20) + -1) * param_4);
        puVar3 = (uint *)(uStack_20 * uStack_18 + (int)param_1);
        uStack_14 = 0;
        if (uStack_18 != 0) {
          do {
            puVar7 = puVar3;
            puVar9 = puVar5;
            for (uVar6 = param_4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
              puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
            }
            for (uVar6 = param_4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(byte *)puVar9 = *(byte *)puVar7;
              puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
              puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
            }
            puVar3 = (uint *)((int)puVar3 + param_4);
            uStack_14 = uStack_14 + 1;
            puVar5 = (uint *)((int)puVar5 + iStack_1c);
          } while (uStack_14 < uStack_18);
        }
        uStack_20 = uStack_20 + 1;
      } while (uStack_20 < param_3);
    }
  }
  param_4 = param_2 * param_3 * param_4;
  puVar3 = puStack_24;
  for (uVar6 = param_4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + (uint)bVar10 * -2 + 1;
    param_1 = param_1 + (uint)bVar10 * -2 + 1;
  }
  for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
    *(byte *)param_1 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + (uint)bVar10 * -2 + 1);
    param_1 = (uint *)((int)param_1 + (uint)bVar10 * -2 + 1);
  }
  free(puStack_24);
  return;
}
