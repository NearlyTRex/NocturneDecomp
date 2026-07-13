// Name: FUN_005621f0
// Address: 005621f0
// Address Range: [[005621f0, 005623e6]]
// Convention: unknown
// Signature: int FUN_005621f0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005621f0(int param_1,float *param_2)

{
  int iVar1;
  byte *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  byte local_60 [12];
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  byte local_24 [12];
  int local_18;
  
  FUN_0051d380(param_1 + 0x150,&local_30,*(uint *)(param_1 + 0xbdd8));
  if (&local_30 != param_2) {
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
  }
  iVar5 = 1;
  local_18 = 0;
  iVar1 = param_1 + 0x150;
  do {
    switch((local_18 + *(int *)(param_1 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde0) * 4) != 0) {
        uVar6 = *(uint *)(param_1 + 0xbdc8);
        puVar2 = local_24;
LAB_0056227c:
        pfVar3 = (float *)FUN_0051d380(iVar1,puVar2,uVar6);
        if (&local_48 != pfVar3) {
          local_48 = *pfVar3;
          local_44 = pfVar3[1];
          local_40 = pfVar3[2];
        }
        local_44 = local_2c * (float)_DAT_00598996 + local_44 * (float)_DAT_0059898e;
        local_48 = local_30 * (float)_DAT_00598986 + local_48 * (float)_DAT_00598986;
        pfVar3 = param_2 + iVar5 * 3;
        if (pfVar3 != &local_48) {
          *pfVar3 = local_48;
          pfVar3[1] = local_44;
          pfVar3[2] = local_40;
        }
LAB_005622fe:
        iVar5 = iVar5 + 1;
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde8) * 4) != 0) {
        uVar6 = *(uint *)(param_1 + 0xbdcc);
        puVar2 = local_54;
        goto LAB_0056227c;
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) != 0) {
        pfVar3 = (float *)FUN_0051d380(iVar1,local_3c,*(uint *)(param_1 + 0xbdb4));
        pfVar4 = param_2 + iVar5 * 3;
        if (pfVar4 != pfVar3) {
          *pfVar4 = *pfVar3;
          pfVar4[1] = pfVar3[1];
          pfVar4[2] = pfVar3[2];
        }
        goto LAB_005622fe;
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf4) * 4) != 0) {
        pfVar3 = (float *)FUN_0051d380(iVar1,local_60,*(uint *)(param_1 + 0xbddc));
        pfVar4 = param_2 + iVar5 * 3;
        if (pfVar4 != pfVar3) {
          *pfVar4 = *pfVar3;
          pfVar4[1] = pfVar3[1];
          pfVar4[2] = pfVar3[2];
        }
        goto LAB_005622fe;
      }
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      return iVar5;
    }
  } while( true );
}
