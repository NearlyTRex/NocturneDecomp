// Name: FUN_004c2470
// Address: 004c2470
// Address Range: [[004c2470, 004c31a9]]
// Convention: unknown
// Signature: void FUN_004c2470(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c2470(float *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  byte *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  float local_680;
  float local_67c;
  byte local_678 [256];
  byte local_578 [256];
  byte local_478 [256];
  byte local_378 [256];
  byte local_278 [256];
  char local_178 [256];
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  if (*(int *)(0x01C775EC + 0x228) != 0) {
    return;
  }
  if (param_1[1] != *(float *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  if (DAT_005b7620 != _DAT_01cc30a0) {
    FUN_004befa0();
  }
  local_6c = _DAT_01c02594;
  _DAT_01c02594 = 0;
  local_44 = _DAT_014b9904;
  if ((DAT_005b7620 < 0x180) && (param_1[0x113] == 0.0)) {
    local_44 = _DAT_014b990c;
  }
  if ((param_1[0xcc] == 0.0) || (param_1[0xce] <= 0.0)) goto LAB_004c27a0;
  local_50 = 0x000000D0;
  local_48 = 0x10;
  local_58 = 0x70;
  iVar9 = 0x24;
  local_54 = 0x00000060;
  if ((DAT_005b7620 < 0x180) && (param_1[0x113] == 0.0)) {
    local_50 = 0x000000D0 / 2;
    local_54 = 0x00000060 / 2;
    iVar9 = 0x12;
    local_58 = 0x28;
    local_48 = 8;
  }
  local_68 = 0xffff;
  if (param_1[0xce] < 1.0) {
    fVar12 = (float10)param_1[0xce] * (float10)_DAT_005874dd;
    FUN_00563a30();
    local_68 = (int)ROUND(fVar12);
  }
  iVar3 = FUN_0040d890(param_1[0xcc],_DAT_01cc36c0);
  if (iVar3 == 0) {
    iVar3 = FUN_004c1bf0(param_1,param_1[0xcc],3);
    if (iVar3 == 0) {
      iVar7 = DAT_005b761c - iVar9;
      iVar9 = DAT_005b7620 - iVar9;
      iVar3 = FUN_0040d7e0(param_1[0xcc],"CTommyGun");
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = 0x1cc3014;
      }
      iVar3 = FUN_0040d7e0(param_1[0xcc],"CShotgun");
      if (iVar3 != 0) {
        iVar4 = 0x1cc3064;
      }
      iVar3 = FUN_0040d7e0(param_1[0xcc],"CElephantGun");
      if (iVar3 != 0) {
        iVar4 = 0x1cc3064;
      }
      iVar3 = FUN_0040d7e0(param_1[0xcc],&DAT_00587492);
      if (iVar3 != 0) {
        if (*(int *)((int)param_1[0xcc] + 0x564) == 0) {
          iVar4 = 0x1cc3028;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 3) {
          iVar4 = 0x1cc303c;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 7) {
          iVar4 = 0x1cc3050;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 8) {
          iVar4 = 0x1cc3078;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 1) {
          iVar4 = 0x1cc308c;
        }
      }
      if (iVar4 != 0) {
        FUN_0040e710(iVar4,iVar7,iVar9,local_68);
      }
      if ((param_1[0xd2] <= 0.0) || (param_1[0x113] != 0.0)) {
        FUN_00563c90(local_678,&DAT_00587497,*(uint *)((int)param_1[0xcc] + 0x560));
      }
      else {
        uVar5 = FUN_004beca0(param_1[0x116],*(uint *)((int)param_1[0xcc] + 0x560));
        FUN_00563c90(local_678,"%s %d",uVar5);
      }
      iVar3 = FUN_004930e0(local_44,0x58);
      iVar9 = local_44;
      iVar4 = FUN_00492da0(local_44,local_678);
      iVar3 = (DAT_005b7620 - local_48) - iVar3;
      iVar4 = (DAT_005b761c - local_48) - iVar4;
      puVar13 = local_678;
      goto LAB_004c2650;
    }
  }
  else {
    fVar12 = (float10)*(float *)(iVar3 + 0x57c) * (float10)_DAT_005874e1;
    FUN_00563a30();
    local_14 = (int)ROUND(fVar12);
    FUN_00563c90(local_478,&DAT_0058746d,local_14);
    iVar9 = local_44;
    iVar3 = FUN_004930e0(local_44,0x58);
    iVar4 = FUN_00492da0(iVar9,local_478);
    iVar3 = (DAT_005b7620 - local_48) - iVar3;
    iVar4 = (DAT_005b761c - local_48) - iVar4;
    puVar13 = local_478;
LAB_004c2650:
    FUN_00490980(iVar9,puVar13,iVar4,iVar3,0xf8);
  }
  if (param_1[0x113] == 0.0) goto LAB_004c27a0;
  iVar9 = FUN_004c1bf0(param_1,param_1[0xcc],3);
  if (iVar9 == 0) {
    iVar9 = FUN_004c1bf0(param_1,param_1[0xcc],0);
    if ((iVar9 == 0) && (iVar9 = FUN_004c1bf0(param_1,param_1[0xcc],1), iVar9 == 0)) {
      uVar5 = FUN_004bed10();
      uVar6 = FUN_004beca0(param_1[0xcc],uVar5);
      uVar15 = CONCAT44(uVar5,uVar6);
      pcVar14 = "%s\n\n%s";
      goto LAB_004c26ad;
    }
    uVar5 = FUN_004beca0();
    uVar5 = FUN_004bed10(param_1[0xcc],uVar5);
    uVar5 = FUN_004beca0(param_1[0xcc],uVar5);
    FUN_00563c90(local_178,"%s\n\n%s %s",uVar5);
    pcVar8 = (char *)FUN_004ee370();
    iVar9 = -1;
    pcVar14 = local_178;
    do {
      pcVar10 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = pcVar14 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
  }
  else {
    uVar5 = FUN_004bed10();
    uVar6 = FUN_004beca0(param_1[0xcc],uVar5);
    uVar15 = CONCAT44(uVar5,uVar6);
    pcVar14 = "%s\n\n%s";
LAB_004c26ad:
    FUN_00563c90(local_178,pcVar14,uVar15);
  }
  local_28 = local_44;
  iVar9 = FUN_00492f30(local_44,local_178,0x1cae580,10,0x100,local_50 - local_58);
  local_30 = iVar9;
  local_34 = FUN_004930e0(local_44,0x58);
  iVar3 = (DAT_005b7620 - local_54) + local_48;
  local_2c = local_48 + (DAT_005b761c - local_50);
  iVar4 = 0;
  if (0 < iVar9) {
    iVar9 = 0x1cae580;
    do {
      iVar4 = iVar4 + 1;
      FUN_00490980(local_28,iVar9,local_2c,iVar3,0xf8,0);
      iVar9 = iVar9 + 0x100;
      iVar3 = iVar3 + local_34;
    } while (iVar4 < local_30);
  }
LAB_004c27a0:
  if ((param_1[0xcd] != 0.0) && (0.0 < param_1[0xcf])) {
    local_5c = 0x70;
    local_4c = 0x10;
    iVar9 = 0x000000D0;
    iVar3 = 0x00000060;
    if ((DAT_005b7620 < 0x180) && (param_1[0x113] == 0.0)) {
      iVar9 = 0x000000D0 / 2;
      iVar3 = 0x00000060 / 2;
      local_5c = 0x28;
      local_4c = 8;
    }
    iVar4 = FUN_0040d890(param_1[0xcd],_DAT_01cae0d0);
    if (iVar4 != 0) {
      FUN_00563c90(local_378,"%d x%3.0f%%",*(uint *)(iVar4 + 0x2cc),
                   (double)*(float *)(iVar4 + 0x2d0));
      iVar4 = FUN_004930e0(local_44,0x58);
      iVar7 = FUN_00492da0(local_44,local_378);
      FUN_00490980(local_44,local_378,(DAT_005b761c - local_4c) - iVar7,
                   (DAT_005b7620 - local_4c) - iVar4,0xf8,0);
    }
    iVar4 = FUN_0040d890(param_1[0xcd],_DAT_01c08cc4);
    if (iVar4 != 0) {
      uVar5 = FUN_004beca0();
      FUN_00563c90(local_278,&DAT_005874d1,uVar5);
      iVar4 = FUN_004930e0(local_44,0x58);
      iVar7 = FUN_00492da0(local_44,local_278);
      FUN_00490980(local_44,local_278,(DAT_005b761c - local_4c) - iVar7,
                   (DAT_005b7620 - local_4c) - iVar4,0xf8,0);
    }
    if (param_1[0x113] != 0.0) {
      uVar5 = FUN_004bed10();
      uVar5 = FUN_004beca0(param_1[0xcd],uVar5);
      FUN_00563c90(local_578,"%s\n\n%s",uVar5);
      local_24 = local_44;
      local_40 = FUN_00492f30(local_44,local_578,0x1caef80,10,0x100,iVar9 - local_5c);
      local_14 = local_40;
      local_3c = FUN_004930e0(local_44,0x58);
      iVar3 = (DAT_005b7620 - iVar3) + local_4c;
      local_38 = local_4c + (DAT_005b761c - iVar9);
      iVar9 = 0;
      if (0 < local_14) {
        iVar4 = 0x1caef80;
        do {
          iVar9 = iVar9 + 1;
          FUN_00490980(local_24,iVar4,local_38,iVar3,0xf8,0);
          iVar4 = iVar4 + 0x100;
          iVar3 = iVar3 + local_3c;
        } while (iVar9 < local_40);
      }
    }
  }
  if ((*(int *)(0x01C775EC + 0x244) != 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
    local_78 = DAT_005b7620 + -0x21;
    local_14 = DAT_005b7620 + -6;
    fVar12 = (float10)local_14 +
             (float10)(local_78 - local_14) * (float10)*param_1 * (float10)_DAT_005874e9;
    FUN_00563a30(0x10,local_14,2);
    iVar9 = DAT_005b7620;
    local_78 = (int)ROUND(fVar12);
    FUN_00403e60(6,local_78);
    FUN_0040e710(0x1cc2fd8,4,iVar9 + -0x24,0xffff);
  }
  if ((0.0 < param_1[0xcf]) || (0.0 < param_1[0xd0])) {
    local_67c = param_1[0xd0];
    if (local_67c < param_1[0xcf]) {
      local_67c = param_1[0xcf];
    }
    local_64 = 0xffff;
    if (local_67c < 1.0) {
      fVar12 = (float10)local_67c * (float10)_DAT_005874dd;
      FUN_00563a30();
      local_64 = (int)ROUND(fVar12);
    }
    local_680 = *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) * (float)_DAT_005874e9;
    if (local_680 < 0.0) {
      local_680 = 0.0;
    }
    if (1.0 < local_680) {
      local_680 = 1.0;
    }
    local_14 = 0x3f;
    iVar9 = 0x1b;
    if (DAT_005b7620 < 0x180) {
      local_14 = 0x1f;
      iVar9 = 0xd;
    }
    local_74 = (DAT_005b761c + -4) - iVar9;
    fVar12 = (float10)local_14 - (float10)local_14 * (float10)local_680;
    uVar5 = FUN_00563a30(local_14,local_64 / 2);
    local_70 = (int)ROUND(fVar12);
    FUN_0040e8c0(0x1cc2fec,local_74,local_70 + 4,0,local_70,iVar9 + -1);
    FUN_0040e710(0x1cc3000,local_74,4,uVar5);
  }
  fVar1 = param_1[0xd1];
  if (0.0 < fVar1) {
    local_60 = 0xffff;
    if (fVar1 < 1.0) {
      fVar12 = (float10)fVar1 * (float10)_DAT_005874f1;
      FUN_00563a30();
      local_60 = (int)ROUND(fVar12);
    }
    FUN_00408370();
    local_18 = _DAT_014b9904;
    iVar9 = 0x00000060;
    if (DAT_005b7620 < 0x180) {
      iVar9 = 0x00000060 / 2;
      local_18 = _DAT_014b990c;
    }
    iVar3 = local_18;
    iVar9 = FUN_00492f30(local_18,param_1 + 0xd3,0x1caf980,10,0x100,(DAT_005b761c - iVar9) + -4);
    local_1c = iVar9;
    local_20 = FUN_004930e0(iVar3,0x58);
    iVar9 = (DAT_005b7620 + -4) - local_20 * iVar9;
    if (((_DAT_014b990c != local_18) || (_DAT_01d16810 == 0)) && (iVar3 = 0, 0 < local_1c)) {
      iVar4 = 0x1caf980;
      do {
        iVar3 = iVar3 + 1;
        FUN_00490980(local_18,iVar4,4,iVar9,0xf8,0);
        iVar4 = iVar4 + 0x100;
        iVar9 = iVar9 + local_20;
      } while (iVar3 < local_1c);
    }
  }
  _DAT_01c02594 = local_6c;
  return;
}
