// Name: FUN_00492f30
// Address: 00492f30
// Address Range: [[00492f30, 004930ac]]
// Convention: unknown
// Signature: int FUN_00492f30(undefined4 param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

int FUN_00492f30(uint param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int local_24;
  char *local_18;
  uint local_14;
  
  bVar8 = 0;
  FUN_00563cc0(param_3,0,param_4 * param_5);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_24 = 0;
  if (0 < param_4) {
    local_18 = param_3;
    do {
      for (; (((&DAT_005c168c)[(byte)(*param_2 + 1)] & 2) != 0 && (*param_2 != '\n'));
          param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return local_24;
      }
      uVar5 = 0;
      local_14 = 0xffffffff;
      local_24 = local_24 + 1;
      pcVar6 = param_2;
      while( true ) {
        cVar1 = *pcVar6;
        if ((cVar1 == '\n') || (cVar1 == '\0')) goto LAB_00492fe4;
        if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 2) != 0) {
          local_14 = uVar5;
        }
        if (param_5 + -1 <= (int)uVar5) break;
        *pcVar6 = '\0';
        iVar2 = FUN_00492da0(param_1,param_2);
        *pcVar6 = cVar1;
        if (param_6 < iVar2) break;
        uVar5 = uVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      if (-1 < (int)local_14) {
        uVar5 = local_14;
      }
LAB_00492fe4:
      uVar4 = uVar5;
      if (0 < (int)uVar5) {
        pcVar6 = param_2 + uVar5;
        do {
          if (((&DAT_005c168c)[(byte)(pcVar6[-1] + 1)] & 2) == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = pcVar6 + -1;
        } while (0 < (int)uVar4);
      }
      pcVar6 = param_2;
      pcVar7 = local_18;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar7 = *(uint *)pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
        pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      }
      local_18[uVar4] = '\0';
      if (param_2[uVar5] == '\n') {
        uVar5 = uVar5 + 1;
      }
      param_2 = param_2 + uVar5;
      local_18 = local_18 + param_5;
    } while (local_24 < param_4);
  }
  return local_24;
}
