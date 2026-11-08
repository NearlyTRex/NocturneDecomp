// Name: FUN_00533810
// Address: 00533810
// Address Range: [[00533810, 00533a7b]]
// Convention: unknown
// Signature: void FUN_00533810(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533810(uint param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  uint uStack_f4;
  int local_f0;
  int aiStack_dc [12];
  uint local_ac;
  uint uStack_a8;
  uint local_6c;
  uint uStack_68;
  int local_2c;
  int local_28;
  int local_24;
  int local_14;
  
  bVar10 = 0;
  FUN_0046ca00(DAT_0060b280,&DAT_0061b8c4);
  if (*(int *)(0x01CB6900 + 0x210) == 2) {
    param_4 = DAT_006141d8 << 8;
  }
  else {
    lVar3 = (longlong)(0xffff - _DAT_01c38aec) * (longlong)param_4;
    FUN_0046b8e0(DAT_0060b280,(uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    FUN_0046b8d0(DAT_0060b280,0);
  }
  FUN_0046b5c0(DAT_0060b280);
  local_14 = 0;
  if (0 < param_3) {
    do {
      puVar7 = param_2;
      puVar9 = &uStack_f4;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      iVar5 = 0;
      if (0 < local_f0) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar4 = *(int *)((int)aiStack_dc + iVar8) * 0xc;
          iVar8 = iVar8 + 0xc;
          iVar5 = iVar5 + 1;
          local_2c = (int)ROUND(*(float *)(&DAT_02054df4 + iVar4));
          fVar2 = *(float *)(&DAT_02054df8 + iVar4);
          local_28 = (int)ROUND(fVar2);
          local_24 = (int)ROUND(*(float *)(&DAT_02054dfc + iVar4));
          *(int *)((int)&local_6c + iVar6) = (int)ROUND(*(float *)(&DAT_02054df4 + iVar4)) + 0x8000;
          *(int *)((int)&local_ac + iVar6) = 0x8000 - (int)ROUND(fVar2);
          iVar6 = iVar6 + 4;
        } while (iVar5 < local_f0);
      }
      if (1 < local_f0) {
        iVar5 = 4;
        do {
          if ((0x8000 < local_6c) && (*(int *)((int)&local_6c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&local_6c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_6c < -0x8000) && (0x8000 < *(int *)((int)&local_6c + iVar5))) {
            *(int *)((int)&local_6c + iVar5) = *(int *)((int)&local_6c + iVar5) + -0x10000;
          }
          if ((0x8000 < local_ac) && (*(int *)((int)&local_ac + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&local_ac + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_ac < -0x8000) && (0x8000 < *(int *)((int)&local_ac + iVar5))) {
            *(int *)((int)&local_ac + iVar5) = *(int *)((int)&local_ac + iVar5) + -0x10000;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < local_f0 * 4);
      }
      iVar5 = 0;
      if (0 < local_f0) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)aiStack_dc + iVar6 + 4) = *(int *)((int)&local_6c + iVar8) << 8;
          *(int *)((int)aiStack_dc + iVar6 + 8) = *(int *)((int)&local_ac + iVar8) << 8;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < local_f0);
      }
      if (param_4 < 0xfde9) {
        FUN_0046a7d0(DAT_0060b280,&uStack_f4);
      }
      else {
        FUN_0046a030(DAT_0060b280,&uStack_f4);
      }
      local_14 = local_14 + 1;
      param_2 = (uint *)((int)param_2 + param_5);
    } while (local_14 < param_3);
  }
  return;
}
