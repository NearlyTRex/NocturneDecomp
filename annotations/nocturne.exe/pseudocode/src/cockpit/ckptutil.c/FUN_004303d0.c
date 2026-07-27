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
  int iVar4;
  byte *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  byte auStack_78 [80];
  uint uStack_28;
  uint *puStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar10 = 0;
  uStack_18 = param_2 * param_4;
  iVar4 = param_2 * param_3 * param_4;
  puStack_24 = (uint *)malloc(iVar4);
  if (puStack_24 == (uint *)0x0) {
    _sprintf(auStack_78,"Unable to allocate %u bytes for temporary rotated bitmap.",iVar4);
    INT_01cc4804 = 0x802;
    PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004c8440(auStack_78);
  }
  if (param_4 == 1) {
    uVar7 = 0;
    if (param_3 != 0) {
      uStack_28 = uStack_18;
      iVar4 = 0;
      do {
        puVar2 = (byte *)((int)param_1 + iVar4);
        puVar5 = (byte *)((int)puStack_24 + (param_3 - uVar7) + -1);
        uVar1 = 0;
        if (uStack_18 != 0) {
          do {
            *puVar5 = *puVar2;
            uVar1 = uVar1 + 1;
            puVar5 = puVar5 + param_3;
            puVar2 = puVar2 + 1;
          } while (uVar1 < uStack_18);
        }
        uVar7 = uVar7 + 1;
        iVar4 = iVar4 + uStack_18;
      } while (uVar7 < param_3);
    }
  }
  else {
    uStack_20 = 0;
    if (param_3 != 0) {
      iStack_1c = param_3 * param_4;
      do {
        puVar6 = (uint *)((int)puStack_24 + ((param_3 - uStack_20) + -1) * param_4);
        puVar3 = (uint *)(uStack_20 * uStack_18 + (int)param_1);
        uStack_14 = 0;
        if (uStack_18 != 0) {
          do {
            puVar8 = puVar3;
            puVar9 = puVar6;
            for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
            }
            for (uVar7 = param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(byte *)puVar9 = *(byte *)puVar8;
              puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
              puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
            }
            puVar3 = (uint *)((int)puVar3 + param_4);
            uStack_14 = uStack_14 + 1;
            puVar6 = (uint *)((int)puVar6 + iStack_1c);
          } while (uStack_14 < uStack_18);
        }
        uStack_20 = uStack_20 + 1;
      } while (uStack_20 < param_3);
    }
  }
  param_4 = param_2 * param_3 * param_4;
  puVar3 = puStack_24;
  for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + (uint)bVar10 * -2 + 1;
    param_1 = param_1 + (uint)bVar10 * -2 + 1;
  }
  for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
    *(byte *)param_1 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + (uint)bVar10 * -2 + 1);
    param_1 = (uint *)((int)param_1 + (uint)bVar10 * -2 + 1);
  }
  FUN_005638d0(puStack_24);
  return;
}
