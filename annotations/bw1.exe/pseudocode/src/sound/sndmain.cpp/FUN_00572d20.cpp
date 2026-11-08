// Name: FUN_00572d20
// Address: 00572d20
// Address Range: [[00572d20, 0057348d]]
// Convention: unknown
// Signature: uint FUN_00572d20(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00572d20(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  float10 fVar14;
  ulonglong uVar15;
  byte local_388 [256];
  byte local_288 [256];
  char local_188 [256];
  uint local_88 [24];
  uint local_28;
  uint local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  bVar13 = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (iVar2 = FUN_00575550(), iVar2 == 0)) {
    return 0;
  }
  FUN_005726e0(local_88);
  pcVar9 = local_188;
  pcVar8 = param_1;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  puVar4 = (uint *)(_DAT_02c78cec * 0x60 + 0x2c78cf0);
  puVar10 = local_88;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  iVar2 = FUN_00573cd0(local_88[0]);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00575d20();
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x249;
    FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  local_24 = 0;
  iVar6 = 0;
  iVar2 = _DAT_02c74650;
  while (iVar2 != 0) {
    local_24 = local_24 + 1;
    if (0x46ff < iVar6 + 0x11c) {
      local_24 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02c7476c + iVar6);
    iVar6 = iVar6 + 0x11c;
  }
  if ((int)local_24 < 0) goto LAB_00572fa1;
  iVar2 = local_24 * 0x11c;
  puVar7 = (uint *)(iVar2 + 0x2c745ec);
  puVar4 = local_88;
  puVar10 = puVar7;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + (uint)bVar13 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
  }
  local_1c = param_1;
  iVar6 = 0x2c78ff4;
  iVar11 = 0;
  do {
    iVar3 = FUN_005c04e0(iVar6,local_1c);
    if (iVar3 == 0) {
      if (iVar6 != 0) {
        *(int *)(&DAT_02c74654 + iVar2) = iVar6;
        goto LAB_00572e88;
      }
      break;
    }
    iVar11 = iVar11 + 1;
    iVar6 = iVar6 + 0x1b0;
  } while (iVar11 < 0x40);
  iVar6 = FUN_00478fb0("sound",local_188);
  if (iVar6 < 0x200001) {
    FUN_00479580(local_188,0,0,0,local_288);
    iVar6 = FUN_005c04e0(local_288,&DAT_005f30e3);
    if ((iVar6 == 0) || (iVar6 = FUN_005c04e0(local_288,&DAT_005f30e7), iVar6 == 0))
    goto LAB_00573017;
    uVar5 = FUN_0056e830(local_188);
    *(uint *)(&DAT_02c74654 + iVar2) = uVar5;
  }
  else {
LAB_00573017:
    local_28 = local_24;
    pcVar9 = local_188;
    iVar6 = 0;
    do {
      _DAT_02c78ff0 = _DAT_02c78ff0 + 1;
      if (0x3f < _DAT_02c78ff0) {
        _DAT_02c78ff0 = 0;
      }
      iVar11 = _DAT_02c78ff0 * 0x1b0;
      if (((*(int *)(iVar11 + 0x2c79144) == 0) && (*(int *)(&DAT_02c79148 + iVar11) == 0)) &&
         ((*(int *)(iVar11 + 0x2c79150) == 0 && (*(int *)(iVar11 + 0x2c791a0) == 0)))) {
        local_18 = (char *)(iVar11 + 0x2c78ff4);
        goto LAB_0057305f;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40);
    local_18 = (char *)0x0;
LAB_0057305f:
    local_14 = local_18;
    if (local_18 == (char *)0x0) {
      *(uint *)(&DAT_02c74654 + iVar2) = 0;
    }
    else {
      FUN_00479580(pcVar9,0,0,0,local_388);
      iVar6 = FUN_005c04e0(local_388,&DAT_005f30ec);
      if ((iVar6 == 0) || (iVar6 = FUN_005c04e0(local_388,&DAT_005f30f0), iVar6 == 0)) {
        iVar6 = FUN_00478fb0("sound",pcVar9);
        if (0 < iVar6) {
          iVar11 = FUN_005c0f32(0x8630);
          iVar6 = 0;
          if (iVar11 != 0) {
            iVar6 = FUN_0052ae40(iVar11);
          }
          *(int *)(local_14 + 0x174) = iVar6;
          if (iVar6 == 0) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x461;
            FUN_005030e0("Out of memory.");
          }
          FUN_0052aea0(*(uint *)(local_14 + 0x174),pcVar9);
          pcVar8 = local_14;
          pcVar12 = local_14;
          do {
            cVar1 = *pcVar9;
            *pcVar12 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar12[1] = cVar1;
            pcVar12 = pcVar12 + 2;
          } while (cVar1 != '\0');
          pcVar9 = local_14;
          pcVar9[0x100] = '\x01';
          pcVar9[0x101] = '\0';
          pcVar9[0x102] = '\0';
          pcVar9[0x103] = '\0';
          iVar6 = *(int *)(local_14 + 0x174);
          pcVar9[0x104] = '\x10';
          pcVar9[0x105] = '\0';
          pcVar9[0x106] = '\0';
          pcVar9[0x107] = '\0';
          *(uint *)(local_14 + 0x108) = *(uint *)(iVar6 + 0x104);
          uVar5 = *(uint *)(*(int *)(local_14 + 0x174) + 0x100);
          pcVar9[0x110] = -1;
          pcVar9[0x111] = -1;
          pcVar9[0x112] = -1;
          pcVar9[0x113] = -1;
          *(uint *)(local_14 + 0x10c) = uVar5;
          FUN_0056e130(local_14);
          pcVar9[0x150] = '\0';
          pcVar9[0x151] = '\0';
          pcVar9[0x152] = '\0';
          pcVar9[0x153] = '\0';
          pcVar9[0x154] = '\0';
          pcVar9[0x155] = '\0';
          pcVar9[0x156] = '\0';
          pcVar9[0x157] = '\0';
          fVar14 = (float10)*(int *)(pcVar8 + 0x10c) * (float10)0x40000000;
          pcVar9[0x158] = '\0';
          pcVar9[0x159] = '\0';
          pcVar9[0x15a] = '\0';
          pcVar9[0x15b] = '\0';
          pcVar9[0x15c] = '\0';
          pcVar9[0x15d] = '\0';
          pcVar9[0x15e] = '\0';
          pcVar9[0x15f] = '\0';
          FUN_005c03a0();
          *(int *)(pcVar8 + 0x164) = (int)ROUND(fVar14);
          pcVar9[0x16c] = '\0';
          pcVar9[0x16d] = '\0';
          pcVar9[0x16e] = '\0';
          pcVar9[0x16f] = '\0';
          pcVar9[0x170] = '\0';
          pcVar9[0x171] = '\0';
          pcVar9[0x172] = '\0';
          pcVar9[0x173] = '\0';
          *(uint *)(pcVar8 + 0x160) = local_28;
          uVar5 = FUN_00572400(pcVar8,*(uint *)(pcVar8 + 0x164));
          *(uint *)(pcVar8 + 0x168) = uVar5;
          iVar6 = FUN_0056feb0(pcVar8);
joined_r0x00573430:
          if (iVar6 != 0) {
            FUN_005702c0(local_14,0,0);
            *(char **)(&DAT_02c74654 + iVar2) = local_14;
            goto LAB_00572e88;
          }
        }
      }
      else {
        local_20 = local_18 + 0x17c;
        iVar6 = FUN_005a0fd0(local_20,"sound",pcVar9,1);
        pcVar8 = local_18;
        pcVar12 = local_18;
        if (iVar6 != 0) {
          do {
            cVar1 = *pcVar9;
            *pcVar12 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar12[1] = cVar1;
            pcVar12 = pcVar12 + 2;
          } while (cVar1 != '\0');
          uVar5 = FUN_005a0d50(local_20);
          *(uint *)(pcVar8 + 0x178) = uVar5;
          iVar6 = FUN_0056db10(local_20,pcVar8 + 0x178,pcVar8);
          if (iVar6 != 0) {
            FUN_0056e130(local_18);
            local_18[0x150] = '\0';
            local_18[0x151] = '\0';
            local_18[0x152] = '\0';
            local_18[0x153] = '\0';
            iVar6 = *(int *)(local_18 + 0x10c);
            local_18[0x154] = '\0';
            local_18[0x155] = '\0';
            local_18[0x156] = '\0';
            local_18[0x157] = '\0';
            fVar14 = (float10)iVar6 * (float10)0x40000000;
            local_18[0x158] = '\0';
            local_18[0x159] = '\0';
            local_18[0x15a] = '\0';
            local_18[0x15b] = '\0';
            local_18[0x15c] = '\0';
            local_18[0x15d] = '\0';
            local_18[0x15e] = '\0';
            local_18[0x15f] = '\0';
            uVar15 = FUN_005c03a0();
            iVar6 = (int)((ulonglong)uVar15 >> 0x20);
            *(int *)((int)uVar15 + 0x164) = (int)ROUND(fVar14);
            *(uint *)(iVar6 + 0x16c) = 0;
            *(uint *)(iVar6 + 0x170) = 0;
            *(uint *)(iVar6 + 0x160) = local_28;
            uVar5 = FUN_00572400(iVar6,*(uint *)(iVar6 + 0x164));
            *(uint *)(local_18 + 0x168) = uVar5;
            iVar6 = FUN_0056feb0(local_18);
            goto joined_r0x00573430;
          }
        }
      }
      FUN_00570020(local_14);
      *(uint *)(&DAT_02c74654 + iVar2) = 0;
    }
  }
LAB_00572e88:
  iVar6 = *(int *)(&DAT_02c74654 + iVar2);
  if (iVar6 == 0) {
    FUN_005773f0("startSfx - can't get sample %s\n",local_188);
  }
  else {
    *(int *)(iVar6 + 0x154) = *(int *)(iVar6 + 0x154) + 1;
    FUN_00572250(puVar7);
    *(uint *)(iVar2 + 0x2c746f4) = 0;
    *(uint *)(iVar2 + 0x2c746ec) = 0xbf800000;
    *(uint *)(iVar2 + 0x2c746f0) = 0;
    *(uint *)(iVar2 + 0x2c746e8) = *(uint *)(iVar2 + 0x2c74624);
    puVar4 = puVar7;
    do {
      puVar10 = puVar4 + 1;
      puVar4[0x34] = 0xffffffff;
      puVar4 = puVar10;
    } while (puVar10 != (uint *)(iVar2 + 0x2c7460c));
    iVar6 = *(int *)(&DAT_02c74654 + iVar2);
    *(uint *)(iVar2 + 0x2c746dc) = *(uint *)(*(int *)(&DAT_02c74654 + iVar2) + 0x114);
    iVar11 = *(int *)(&DAT_02c74654 + iVar2);
    *(uint *)(iVar2 + 0x2c746e0) = *(uint *)(iVar6 + 0x118);
    *(uint *)(iVar2 + 0x2c746e4) = *(uint *)(iVar11 + 0x11c);
    DAT_006232d0 = DAT_006232d0 + 1;
    *(uint *)(iVar2 + 0x2c74704) = 0xffffffff;
    if (0xfffffe < DAT_006232d0) {
      DAT_006232d0 = 1;
    }
    iVar6 = DAT_006232d0;
    *(int *)(&DAT_02c74650 + iVar2) = DAT_006232d0;
    iVar11 = FUN_00570460(*(uint *)(&DAT_02c74654 + iVar2),0x4479c000,0x4479c000);
    if (iVar11 != 0) {
      FUN_00570f30(puVar7,0);
      iVar11 = FUN_00575560();
      if (iVar11 < 1) {
LAB_0057346a:
        FUN_00573e70();
        return iVar6 << 6 | local_24;
      }
      iVar11 = (**(code **)(*_DAT_02c80650 + 0x40))
                         (_DAT_02c80650,*(uint *)(*(int *)(&DAT_02c74654 + iVar2) + 0x158));
      *(int *)(&DAT_02c7464c + iVar2) = iVar11;
      if (iVar11 != 0) goto LAB_0057346a;
    }
  }
  FUN_00571d70(puVar7);
LAB_00572fa1:
  FUN_00573e70();
  return 0;
}
