// Name: FUN_005265a0
// Address: 005265a0
// Address Range: [[005265a0, 00526c4e]]
// Convention: unknown
// Signature: uint FUN_005265a0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005265a0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  byte bVar13;
  float10 fVar14;
  ulonglong uVar15;
  char local_38c [256];
  byte local_28c [256];
  byte local_18c [256];
  uint local_8c [27];
  uint local_20;
  uint local_1c;
  char *local_18;
  char *local_14;
  
  bVar13 = 0;
  pcVar11 = local_38c;
  pcVar9 = local_38c;
  pcVar10 = local_38c;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (iVar2 = FUN_00528490(), iVar2 == 0)) {
    return 0;
  }
  FUN_00525eb0(local_8c);
  do {
    cVar1 = *param_1;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  puVar4 = (uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1b78);
  puVar12 = local_8c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar12 = *puVar4;
    puVar4 = puVar4 + (uint)bVar13 * -2 + 1;
    puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
  }
  iVar2 = FUN_00527490(local_8c[0]);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00528800();
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x1f6;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  local_1c = 0;
  iVar6 = 0;
  iVar2 = _DAT_02dbd3e4;
  while (iVar2 != 0) {
    local_1c = local_1c + 1;
    if (0x47ff < iVar6 + 0x120) {
      local_1c = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02dbd504 + iVar6);
    iVar6 = iVar6 + 0x120;
  }
  if ((int)local_1c < 0) {
    FUN_00528890();
    return 0;
  }
  iVar2 = local_1c * 0x120;
  puVar7 = (uint *)(iVar2 + 0x2dbd374);
  puVar4 = local_8c;
  puVar12 = puVar7;
  for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *puVar4;
    puVar4 = puVar4 + (uint)bVar13 * -2 + 1;
    puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
  }
  iVar6 = FUN_004568c0("sound",local_38c);
  if (iVar6 < 0x200001) {
    FUN_00566498(local_38c,0,0,0,local_18c);
    iVar6 = FUN_00564520(local_18c,&DAT_0059277e);
    if ((iVar6 == 0) || (iVar6 = FUN_00564520(local_18c,&DAT_00592782), iVar6 == 0))
    goto LAB_005266dc;
    pcVar11 = (char *)FUN_00522480(local_38c);
  }
  else {
LAB_005266dc:
    iVar6 = 0;
    local_20 = local_1c;
    do {
      _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
      if (0x3f < _DAT_02dc1ed8) {
        _DAT_02dc1ed8 = 0;
      }
      iVar3 = _DAT_02dc1ed8 * 0x168;
      if ((*(int *)(iVar3 + 0x2dc2004) == 0) && (*(int *)(iVar3 + 0x2dc2008) == 0)) {
        local_18 = (char *)(iVar3 + 0x2dc1edc);
        goto LAB_0052671f;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40);
    local_18 = (char *)0x0;
LAB_0052671f:
    local_14 = local_18;
    pcVar11 = local_18;
    if (local_18 != (char *)0x0) {
      FUN_00566498(local_38c,0,0,0,local_28c);
      iVar6 = FUN_00564520(local_28c,&DAT_00592787);
      if ((iVar6 == 0) || (iVar6 = FUN_00564520(local_28c,&DAT_0059278b), iVar6 == 0)) {
        iVar6 = FUN_004568c0("sound",local_38c);
        if (0 < iVar6) {
          iVar3 = FUN_0056497c(0x8630);
          iVar6 = 0;
          if (iVar3 != 0) {
            iVar6 = FUN_004e7d90(iVar3);
          }
          *(int *)(local_14 + 0x144) = iVar6;
          if (iVar6 == 0) {
            _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
            _DAT_01cc4804 = 0x3c8;
            FUN_004c8440("Out of memory.");
          }
          FUN_004e7df0(*(uint *)(local_14 + 0x144),local_38c);
          pcVar10 = local_14;
          pcVar11 = local_14;
          do {
            cVar1 = *pcVar9;
            *pcVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
          pcVar9 = local_14;
          pcVar9[0x100] = '\x01';
          pcVar9[0x101] = '\0';
          pcVar9[0x102] = '\0';
          pcVar9[0x103] = '\0';
          iVar6 = *(int *)(local_14 + 0x144);
          pcVar9[0x104] = '\x10';
          pcVar9[0x105] = '\0';
          pcVar9[0x106] = '\0';
          pcVar9[0x107] = '\0';
          *(uint *)(local_14 + 0x108) = *(uint *)(iVar6 + 0x104);
          uVar5 = *(uint *)(*(int *)(local_14 + 0x144) + 0x100);
          pcVar9[0x110] = -1;
          pcVar9[0x111] = -1;
          pcVar9[0x112] = -1;
          pcVar9[0x113] = -1;
          *(uint *)(local_14 + 0x10c) = uVar5;
          FUN_00521e10(local_14);
          pcVar9[0x128] = '\0';
          pcVar9[0x129] = '\0';
          pcVar9[0x12a] = '\0';
          pcVar9[299] = '\0';
          pcVar9[300] = '\0';
          pcVar9[0x12d] = '\0';
          pcVar9[0x12e] = '\0';
          pcVar9[0x12f] = '\0';
          pcVar9[0x130] = '\0';
          pcVar9[0x131] = '\0';
          pcVar9[0x132] = '\0';
          pcVar9[0x133] = '\0';
          fVar14 = (float10)*(int *)(pcVar10 + 0x10c) * (float10)0x40000000;
          pcVar9[0x13c] = '\0';
          pcVar9[0x13d] = '\0';
          pcVar9[0x13e] = '\0';
          pcVar9[0x13f] = '\0';
          pcVar9[0x140] = '\0';
          pcVar9[0x141] = '\0';
          pcVar9[0x142] = '\0';
          pcVar9[0x143] = '\0';
          uVar5 = FUN_00563a30(pcVar10);
          *(int *)(pcVar10 + 0x138) = (int)ROUND(fVar14);
          *(uint *)(pcVar10 + 0x134) = uVar5;
          iVar6 = FUN_00523910();
          pcVar11 = local_14;
joined_r0x00526c01:
          local_14 = pcVar11;
          if (iVar6 != 0) {
            FUN_00523d10(pcVar11,0,0);
            goto LAB_0052673b;
          }
        }
      }
      else {
        iVar6 = FUN_00456a60("sound",local_38c,&DAT_005927ba);
        pcVar9 = local_18;
        *(int *)(local_18 + 0x14c) = iVar6;
        pcVar11 = local_18;
        if (iVar6 != 0) {
          do {
            cVar1 = *pcVar10;
            *pcVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
          uVar5 = FUN_00566e70(*(uint *)(local_18 + 0x14c));
          *(uint *)(pcVar9 + 0x148) = uVar5;
          iVar6 = FUN_00521830(*(uint *)(pcVar9 + 0x14c),pcVar9 + 0x148,pcVar9);
          if (iVar6 != 0) {
            FUN_00521e10(local_18);
            iVar6 = *(int *)(local_18 + 0x10c);
            local_18[0x128] = '\0';
            local_18[0x129] = '\0';
            local_18[0x12a] = '\0';
            local_18[299] = '\0';
            fVar14 = (float10)iVar6 * (float10)0x40000000;
            local_18[300] = '\0';
            local_18[0x12d] = '\0';
            local_18[0x12e] = '\0';
            local_18[0x12f] = '\0';
            local_18[0x130] = '\0';
            local_18[0x131] = '\0';
            local_18[0x132] = '\0';
            local_18[0x133] = '\0';
            uVar15 = FUN_00563a30();
            iVar6 = (int)((ulonglong)uVar15 >> 0x20);
            *(int *)((int)uVar15 + 0x138) = (int)ROUND(fVar14);
            *(uint *)(iVar6 + 0x13c) = 0;
            *(uint *)(iVar6 + 0x140) = 0;
            *(uint *)(iVar6 + 0x134) = local_20;
            iVar6 = FUN_00523910(iVar6);
            pcVar11 = local_14;
            goto joined_r0x00526c01;
          }
        }
      }
      FUN_00523a60(local_14);
      pcVar11 = (char *)0x0;
    }
  }
LAB_0052673b:
  *(char **)(&DAT_02dbd3e8 + iVar2) = pcVar11;
  iVar6 = *(int *)(&DAT_02dbd3e8 + iVar2);
  if (iVar6 == 0) {
    FUN_00529980("startSfx - can't get sample %s\n",local_38c);
  }
  else {
    *(int *)(iVar6 + 300) = *(int *)(iVar6 + 300) + 1;
    FUN_00525a80(puVar7);
    *(uint *)(iVar2 + 0x2dbd488) = 0;
    *(uint *)(iVar2 + 0x2dbd480) = 0xbf800000;
    *(uint *)(iVar2 + 0x2dbd484) = 0;
    *(uint *)(iVar2 + 0x2dbd47c) = *(uint *)(iVar2 + 0x2dbd3b8);
    puVar4 = puVar7;
    do {
      puVar12 = puVar4 + 1;
      puVar4[0x37] = 0xffffffff;
      puVar4 = puVar12;
    } while (puVar12 != (uint *)(iVar2 + 0x2dbd394));
    iVar8 = DAT_005bea40 + 1;
    iVar6 = *(int *)(&DAT_02dbd3e8 + iVar2);
    *(uint *)(iVar2 + 0x2dbd470) = *(uint *)(*(int *)(&DAT_02dbd3e8 + iVar2) + 0x114);
    iVar3 = *(int *)(&DAT_02dbd3e8 + iVar2);
    DAT_005bea40 = iVar8;
    *(uint *)(iVar2 + 0x2dbd474) = *(uint *)(iVar6 + 0x118);
    *(uint *)(iVar2 + 0x2dbd478) = *(uint *)(iVar3 + 0x11c);
    if (0xfffffe < iVar8) {
      DAT_005bea40 = 1;
    }
    iVar6 = DAT_005bea40;
    *(int *)(&DAT_02dbd3e4 + iVar2) = DAT_005bea40;
    iVar3 = FUN_00523ea0(*(uint *)(&DAT_02dbd3e8 + iVar2),0x4479c000,0x4479c000);
    if (iVar3 != 0) {
      FUN_00524830(puVar7,0);
      iVar3 = FUN_005284f0();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*_DAT_02dc8318 + 0x3c))
                          (_DAT_02dc8318,*(uint *)(*(int *)(&DAT_02dbd3e8 + iVar2) + 0x130));
        *(int *)(iVar2 + 0x2dbd3e0) = iVar3;
        if ((iVar3 == 0) ||
           (iVar2 = (**(code **)(*_DAT_02dc8318 + 0x48))(_DAT_02dc8318,puVar7), iVar2 == 0))
        goto LAB_00526c2e;
      }
      FUN_00528890();
      return iVar6 << 6 | local_1c;
    }
  }
LAB_00526c2e:
  FUN_00525570(puVar7);
  FUN_00528890();
  return 0;
}
