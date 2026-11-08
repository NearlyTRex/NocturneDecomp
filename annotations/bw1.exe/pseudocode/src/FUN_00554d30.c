// Name: FUN_00554d30
// Address: 00554d30
// Address Range: [[00554d30, 00555174]]
// Convention: unknown
// Signature: void FUN_00554d30(int param_1,ushort *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554d30(int param_1,ushort *param_2,int param_3,int param_4)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_1020 [960];
  byte auStack_118 [4];
  int local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100 [6];
  uint local_e8;
  int local_e4;
  int local_e0;
  uint local_d0;
  uint uStack_cc;
  uint local_90;
  uint uStack_8c;
  int local_50;
  int local_4c;
  int local_48;
  int local_38;
  int aiStack_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  FUN_00484f00(DAT_00612560,&DAT_00622f34);
  if (*(int *)(0x01CCF390 + 0x210) == 2) {
    param_4 = DAT_0061b4b8 << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - _DAT_01c51cac) * (longlong)param_4;
    FUN_00483de0(DAT_00612560,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    FUN_00483dd0(DAT_00612560,0);
  }
  FUN_00483ac0(DAT_00612560);
  local_20 = 0;
  if (0 < param_3) {
    do {
      local_104 = 0;
      local_108 = 0;
      local_10c = 0;
      local_110 = 0;
      local_114 = 3;
      local_100[0] = (uint)*param_2;
      local_100[3] = (uint)param_2[1];
      local_e8 = (uint)param_2[2];
      local_100[1] = (uint)param_2[3] << 8;
      local_100[4] = (uint)param_2[4] << 8;
      local_e4 = (uint)param_2[5] << 8;
      local_100[2] = (uint)param_2[6] << 8;
      local_100[5] = (uint)param_2[7] << 8;
      local_e0 = (uint)param_2[8] << 8;
      if (*(int *)(param_1 + 0x15ae98) != 0) {
        FUN_004fc9c0(0x2036428,auStack_118);
      }
      local_18 = 0;
      if (0 < local_114) {
        local_1c = 0;
        local_14 = 0;
        do {
          iVar4 = *(int *)((int)local_100 + local_1c) * 0xc;
          if ((((*(int *)(param_1 + 0x15ae98) == 0) ||
               (1.0 <= ABS(*(float *)(&DAT_02070da8 + iVar4)))) ||
              (1.0 <= ABS(*(float *)(&DAT_02070dac + iVar4)))) ||
             (1.0 <= ABS(*(float *)(&DAT_02070db0 + iVar4)))) {
            aiStack_34[2] = (int)ROUND(*(float *)(&DAT_02070da8 + iVar4));
            aiStack_34[3] = (int)ROUND(*(float *)(&DAT_02070dac + iVar4));
            local_24 = (int)ROUND(*(float *)(&DAT_02070db0 + iVar4));
          }
          else {
            local_50 = (int)ROUND(_DAT_0202a844 * _DAT_00605000) - *(int *)(iVar4 + 0x2036428);
            local_4c = (int)ROUND(_DAT_0202a848 * _DAT_00605000) - *(int *)(iVar4 + 0x203642c);
            local_48 = (int)ROUND(_DAT_0202a84c * _DAT_00605000) - *(int *)(iVar4 + 0x2036430);
            FUN_00508780(&local_50);
            aiStack_34[2] = local_38;
            aiStack_34[(uint)bVar6 * -2 + 3] = aiStack_34[(uint)bVar6 * -2];
            aiStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 aiStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          }
          iVar5 = local_18 + 1;
          iVar4 = 0x8000 - aiStack_34[3];
          *(int *)((int)&local_d0 + local_14) = aiStack_34[2] + 0x8000;
          *(int *)((int)&local_90 + local_14) = iVar4;
          local_18 = iVar5;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0xc;
        } while (iVar5 < local_114);
      }
      if (1 < local_114) {
        iVar4 = 4;
        do {
          if ((0x8000 < local_d0) && (*(int *)((int)&local_d0 + iVar4) < -0x8000)) {
            psVar1 = (short *)((int)&local_d0 + iVar4 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_d0 < -0x8000) && (0x8000 < *(int *)((int)&local_d0 + iVar4))) {
            *(int *)((int)&local_d0 + iVar4) = *(int *)((int)&local_d0 + iVar4) + -0x10000;
          }
          if ((0x8000 < local_90) && (*(int *)((int)&local_90 + iVar4) < -0x8000)) {
            psVar1 = (short *)((int)&local_90 + iVar4 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_90 < -0x8000) && (0x8000 < *(int *)((int)&local_90 + iVar4))) {
            *(int *)((int)&local_90 + iVar4) = *(int *)((int)&local_90 + iVar4) + -0x10000;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 < local_114 * 4);
      }
      iVar4 = 0;
      if (0 < local_114) {
        iVar3 = 0;
        iVar5 = 0;
        do {
          *(int *)((int)local_100 + iVar5 + 4) = *(int *)((int)&local_d0 + iVar3) << 8;
          *(int *)((int)local_100 + iVar5 + 8) = *(int *)((int)&local_90 + iVar3) << 8;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + 0xc;
        } while (iVar4 < local_114);
      }
      if (*(int *)(param_1 + 0x15ae98) != 0) {
        local_108 = 0;
        local_10c = 0;
        local_110 = 0;
        local_104 = 0;
      }
      if (param_4 < 0xfde9) {
        FUN_00482cd0(DAT_00612560,auStack_118);
      }
      else {
        FUN_00482540(DAT_00612560,auStack_118);
      }
      param_2 = param_2 + 9;
      local_20 = local_20 + 1;
    } while (local_20 < param_3);
  }
  return;
}
