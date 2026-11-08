// Name: FUN_0047fa80
// Address: 0047fa80
// Address Range: [[0047fa80, 004801f6]]
// Convention: unknown
// Signature: void FUN_0047fa80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047fa80(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x94c;
    FUN_004e4330("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = _DAT_01c6b5c0;
  iVar5 = (_DAT_01c5b104 + -1) * 0x1f8;
  FUN_0047cd80();
  piVar6 = (int *)(iVar5 + 0x1c5b108);
  if (_DAT_01c5baec == 0) {
    FUN_004e6af0(*piVar6,*(int *)(iVar5 + 0x1c5b10c),(*(int *)(iVar5 + 0x1c5b110) - *piVar6) + 1,
                 (*(int *)(iVar5 + 0x1c5b114) - *(int *)(iVar5 + 0x1c5b10c)) + 1);
    uVar8 = _DAT_01c5baf0;
    iVar4 = *(int *)(iVar5 + 0x1c5b114);
    iVar7 = iVar4 + -2;
    local_18 = *(int *)(iVar5 + 0x1c5b110) + -2;
    local_20 = *(int *)(iVar5 + 0x1c5b10c) + 1;
    local_1c = *piVar6 + 1;
    if (_DAT_01c5baec == 0) {
      FUN_00403250(local_1c,local_20,local_18,iVar7,_DAT_01c5baf0,_DAT_01c5baf4);
    }
    else {
      uVar2 = _DAT_01c5baf4;
      if (_DAT_01c5baec != 0) {
        iVar1 = (_DAT_01c5baf4 & 0xff) * 3;
        FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar1] |
                     (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 |
                     (uint)(byte)(&DAT_01c6af99)[iVar1] << 8);
        uVar2 = _DAT_01c6b5c0;
      }
      _DAT_01c6b5c0 = uVar2;
      FUN_004f3a60(local_1c + -1,local_20 + -1,local_18 + 1,iVar4 + -1);
      if (_DAT_01c5baec != 0) {
        iVar4 = (uVar8 & 0xff) * 3;
        FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                     (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                     (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
        uVar8 = _DAT_01c6b5c0;
      }
      _DAT_01c6b5c0 = uVar8;
      FUN_004f37e0(local_1c,local_20,local_18,iVar7);
    }
    uVar8 = _DAT_01c5baf8;
    if (_DAT_01c5baec != 0) {
      iVar4 = (_DAT_01c5baf8 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                   (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
      uVar8 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar8;
    iVar7 = *(int *)(iVar5 + 0x1c5b114) + -1;
    iVar4 = *(int *)(iVar5 + 0x1c5b110) + -1;
    if (_DAT_01c5baec == 0) {
      FUN_00402f30(*piVar6,iVar7,iVar4);
    }
    else {
      FUN_004f3ab0(*piVar6,iVar7,iVar4);
    }
    iVar4 = *(int *)(iVar5 + 0x1c5b110) + -1;
    iVar7 = *(int *)(iVar5 + 0x1c5b114) + -1;
    if (_DAT_01c5baec == 0) {
      FUN_00403040(iVar4,*(uint *)(iVar5 + 0x1c5b10c),iVar7);
      FUN_004e6c50();
    }
    else {
      FUN_004f3ad0(iVar4,*(uint *)(iVar5 + 0x1c5b10c),iVar7);
      FUN_004e6c50();
    }
  }
  else {
    FUN_004ed150(&local_44,&local_40,&local_3c,&local_38);
    local_14 = *(int *)(iVar5 + 0x1c5b110) + 1;
    FUN_004ed020((float)*piVar6,(float)*(int *)(iVar5 + 0x1c5b10c),(float)local_14,
                 (float)(*(int *)(iVar5 + 0x1c5b114) + 1));
    uVar8 = _DAT_01c5baf4;
    if (_DAT_01c5baec != 0) {
      iVar4 = (_DAT_01c5baf4 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                   (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
      uVar8 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar8;
    FUN_004f3a60(*piVar6,*(uint *)(iVar5 + 0x1c5b10c),*(int *)(iVar5 + 0x1c5b110) + -1,
                 *(int *)(iVar5 + 0x1c5b114) + -1);
    uVar8 = _DAT_01c5baf0;
    if (_DAT_01c5baec != 0) {
      iVar4 = (_DAT_01c5baf0 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                   (uint)(byte)(&DAT_01c6af99)[iVar4] << 8 |
                   (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10);
      uVar8 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar8;
    FUN_004f37e0(*piVar6 + 1,*(int *)(iVar5 + 0x1c5b10c) + 1,*(int *)(iVar5 + 0x1c5b110) + -2,
                 *(int *)(iVar5 + 0x1c5b114) + -2);
    uVar8 = _DAT_01c5baf8;
    if (_DAT_01c5baec != 0) {
      iVar4 = (_DAT_01c5baf8 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                   (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
      uVar8 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar8;
    FUN_004f3ab0(*piVar6,*(int *)(iVar5 + 0x1c5b114) + -1,*(int *)(iVar5 + 0x1c5b110) + -1);
    FUN_004f3ad0(*(int *)(iVar5 + 0x1c5b110) + -1,*(uint *)(iVar5 + 0x1c5b10c),
                 *(int *)(iVar5 + 0x1c5b114) + -1);
    FUN_004ed020(local_44,local_40,local_3c,local_38);
  }
  if (*(char *)(iVar5 + 0x1c5b150) != '\0') {
    local_30 = _DAT_01c6b5ac;
    _DAT_01c6b5ac = *(uint *)(iVar5 + 0x1c5b10c);
    local_34 = _DAT_01c5bae4 / 2 + *(int *)(iVar5 + 0x1c5b10c) + -1;
    iVar4 = _DAT_01c5bae4 * 5 >> 0x1f;
    iVar7 = *(int *)(iVar5 + 0x1c5b110) + -2;
    local_24 = ((int)((_DAT_01c5bae4 * 5 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar6 + 1;
    if (_DAT_01c5baec == 0) {
      FUN_004031c0(local_2c,local_34,iVar7,local_24,_DAT_01c5bb00);
    }
    else {
      uVar8 = _DAT_01c5bb00;
      if (_DAT_01c5baec != 0) {
        iVar4 = (_DAT_01c5bb00 & 0xff) * 3;
        FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                     (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                     (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
        uVar8 = _DAT_01c6b5c0;
      }
      _DAT_01c6b5c0 = uVar8;
      FUN_004f37e0(local_2c,local_34,iVar7,local_24);
    }
    FUN_00406bf0(0xffff);
    FUN_004edaf0(0x3f800000);
    iVar4 = iVar5 + 0x1c5b150;
    iVar7 = *piVar6;
    iVar1 = *(int *)(iVar5 + 0x1c5b110);
    iVar3 = FUN_004b2a80(_DAT_01c5b0e0,iVar4,_DAT_01c5bae4 / 2 + *(int *)(iVar5 + 0x1c5b10c),
                         _DAT_01c5bafc,0xffffffff);
    FUN_004b0a20(_DAT_01c5b0e0,iVar4,((iVar7 + iVar1) - iVar3) / 2);
    iVar4 = FUN_004b2b30(_DAT_01c5b0e0,iVar4);
    iVar4 = _DAT_01c5bae4 + iVar4;
    iVar7 = FUN_004b2b30(_DAT_01c5b0e0,&DAT_005bd288);
    if (iVar4 < iVar7 + _DAT_01c5bae4) {
      iVar4 = iVar7 + _DAT_01c5bae4;
    }
    iVar4 = iVar4 + *(int *)(iVar5 + 0x1c5b10c);
    uVar8 = _DAT_01c5baf4;
    if (_DAT_01c5baec != 0) {
      iVar7 = (_DAT_01c5baf4 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar7] |
                   (uint)(byte)(&DAT_01c6af99)[iVar7] << 8 |
                   (uint)(byte)(&DAT_01c6af98)[iVar7] << 0x10);
      uVar8 = _DAT_01c6b5c0;
    }
    _DAT_01c6b5c0 = uVar8;
    iVar7 = *(int *)(iVar5 + 0x1c5b110) + -2;
    if (_DAT_01c5baec == 0) {
      FUN_00402f30(*piVar6 + 1,iVar4,iVar7);
    }
    else {
      FUN_004f3ab0(*piVar6 + 1,iVar4,iVar7);
    }
    if (_DAT_01c5baf8 != _DAT_01c5baf4) {
      uVar8 = _DAT_01c5baf8;
      if (_DAT_01c5baec != 0) {
        iVar7 = (_DAT_01c5baf8 & 0xff) * 3;
        FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar7] |
                     (uint)(byte)(&DAT_01c6af98)[iVar7] << 0x10 |
                     (uint)(byte)(&DAT_01c6af99)[iVar7] << 8);
        uVar8 = _DAT_01c6b5c0;
      }
      _DAT_01c6b5c0 = uVar8;
      iVar5 = *(int *)(iVar5 + 0x1c5b110) + -2;
      if (_DAT_01c5baec == 0) {
        FUN_00402f30(*piVar6 + 1,iVar4 + -1,iVar5);
      }
      else {
        FUN_004f3ab0(*piVar6 + 1,iVar4 + -1,iVar5);
      }
    }
    _DAT_01c6b5ac = local_30;
  }
  _DAT_01c6b5c0 = local_28;
  return;
}
