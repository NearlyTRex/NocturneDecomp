// Name: FUN_004eed60
// Address: 004eed60
// Address Range: [[004eed60, 004f0221]]
// Convention: unknown
// Signature: void FUN_004eed60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eed60(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  char *pcVar29;
  bool bVar30;
  byte bVar31;
  byte *puVar32;
  byte local_a94 [960];
  char local_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  byte local_d4 [200];
  int local_c;
  
  bVar31 = 0;
  if (((*(int *)(0x01CB6900 + 0xd0) == 2) && (*(int *)(0x01CB6900 + 0xb8) == 0)) &&
     (iVar25 = FUN_004eb490(), iVar25 == 0)) {
    return;
  }
  local_c = 0;
LAB_004eed8e:
  do {
    _DAT_01d086f0 = 0;
    pcVar2 = (char *)FUN_0050fe80("Forward");
    iVar25 = 0x01CB6900 + 0x28;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80(&DAT_005dd3aa);
    iVar25 = 0x01CB6900 + 0x2c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    if (*(int *)(0x01CB6900 + 0xac) == 0) {
      puVar32 = &DAT_005dd3b4;
    }
    else {
      puVar32 = &DAT_005dd3af;
    }
    pcVar2 = (char *)FUN_0050fe80(puVar32);
    iVar25 = 0x01CB6900 + 0x30;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Strafe on");
    iVar25 = 0x01CB6900 + 0x34;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Strafe left");
    iVar25 = 0x01CB6900 + 0x38;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Strafe right");
    iVar25 = 0x01CB6900 + 0x3c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Turn left");
    iVar25 = 0x01CB6900 + 0x44;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Turn right");
    iVar25 = 0x01CB6900 + 0x40;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Fire Gun/ Action");
    iVar25 = 0x01CB6900 + 0x48;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Use item");
    iVar25 = 0x01CB6900 + 0x4c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Lantern");
    iVar25 = 0x01CB6900 + 0x50;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Draw Gun");
    iVar25 = 0x01CB6900 + 0x68;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Point up");
    iVar25 = 0x01CB6900 + 0x74;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Point down");
    iVar25 = 0x01CB6900 + 0x78;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Select Revolver");
    iVar25 = 0x01CB6900 + 0x7c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Select Sword / Axe");
    iVar25 = 0x01CB6900 + 0x80;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Select Cross");
    iVar25 = 0x01CB6900 + 0x84;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Next weapon");
    iVar25 = 0x01CB6900 + 0x90;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Previous weapon");
    iVar25 = 0x01CB6900 + 0x94;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Next item");
    iVar25 = 0x01CB6900 + 0x98;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Previous item");
    iVar25 = 0x01CB6900 + 0x9c;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Item description");
    iVar25 = 0x01CB6900 + 0xa0;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Next ammo");
    iVar25 = 0x01CB6900 + 0xa4;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    pcVar2 = (char *)FUN_0050fe80("Drop item or weapon");
    iVar25 = 0x01CB6900 + 0xaf0;
    if (0x25 < _DAT_01d086f0) {
      _DAT_01d046a0 = "..\\core\\menu.cpp";
      _DAT_01d046a4 = 0x907;
      FUN_004e4500("Too many custom keys!");
    }
    pcVar28 = (char *)(_DAT_01d086f0 * 0x28 + 0x1d08790);
    *(int *)(&DAT_01d086f4 + _DAT_01d086f0 * 4) = iVar25;
    do {
      cVar1 = *pcVar2;
      *pcVar28 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar28[1] = cVar1;
      pcVar28 = pcVar28 + 2;
    } while (cVar1 != '\0');
    _DAT_01d086f0 = _DAT_01d086f0 + 1;
    FUN_0055b1f0();
    FUN_00589560();
    FUN_00481fc0(local_a94);
    uVar3 = FUN_0050fe80("Restore defaults");
    iVar25 = 0;
    FUN_00480e70(local_a94,uVar3);
    if (0 < _DAT_01d086f0) {
      iVar26 = 0x1d08790;
      iVar27 = 0;
      do {
        uVar3 = FUN_004ee960(**(uint **)(&DAT_01d086f4 + iVar27));
        FUN_005b7790(local_d4,"%s\t%s",iVar26,uVar3);
        iVar27 = iVar27 + 4;
        iVar25 = iVar25 + 1;
        iVar26 = iVar26 + 0x28;
        FUN_00480e70(local_a94,local_d4);
      } while (iVar25 < _DAT_01d086f0);
    }
    FUN_00482150(local_a94,"Select");
    FUN_004821c0(local_a94,"Close");
    FUN_00482240(local_a94,1);
    uVar3 = FUN_0050fe80("Edit key settings",local_c,0);
    iVar25 = FUN_00482250(local_a94,uVar3);
    if (iVar25 < 0) {
      FUN_004820b0(local_a94,0);
      uVar3 = FUN_0050fe80("Forward");
      iVar25 = FUN_004eeba0(0x01CB6900 + 0x28,uVar3);
      uVar3 = FUN_0050fe80(&DAT_005dd5c7);
      iVar26 = FUN_004eeba0(0x01CB6900 + 0x2c,uVar3);
      if (*(int *)(0x01CB6900 + 0xac) == 0) {
        puVar32 = &DAT_005dd5d1;
      }
      else {
        puVar32 = &DAT_005dd5cc;
      }
      uVar3 = FUN_0050fe80(puVar32);
      iVar27 = FUN_004eeba0(0x01CB6900 + 0x30,uVar3);
      uVar3 = FUN_0050fe80("Strafe on");
      iVar4 = FUN_004eeba0(0x01CB6900 + 0x34,uVar3);
      uVar3 = FUN_0050fe80("Strafe left");
      iVar5 = FUN_004eeba0(0x01CB6900 + 0x38,uVar3);
      uVar3 = FUN_0050fe80("Strafe right");
      iVar6 = FUN_004eeba0(0x01CB6900 + 0x3c,uVar3);
      uVar3 = FUN_0050fe80("Turn left");
      iVar7 = FUN_004eeba0(0x01CB6900 + 0x44,uVar3);
      uVar3 = FUN_0050fe80("Turn right");
      iVar8 = FUN_004eeba0(0x01CB6900 + 0x40,uVar3);
      uVar3 = FUN_0050fe80("Fire / Action");
      iVar9 = FUN_004eeba0(0x01CB6900 + 0x48,uVar3);
      uVar3 = FUN_0050fe80("Use item");
      iVar10 = FUN_004eeba0(0x01CB6900 + 0x4c,uVar3);
      uVar3 = FUN_0050fe80("Lantern");
      iVar11 = FUN_004eeba0(0x01CB6900 + 0x50,uVar3);
      uVar3 = FUN_0050fe80(&DAT_005dd62c);
      iVar12 = FUN_004eeba0(0x01CB6900 + 0x68,uVar3);
      uVar3 = FUN_0050fe80("Point up");
      iVar13 = FUN_004eeba0(0x01CB6900 + 0x74,uVar3);
      uVar3 = FUN_0050fe80("Point down");
      iVar14 = FUN_004eeba0(0x01CB6900 + 0x78,uVar3);
      uVar3 = FUN_0050fe80("Select Revolver");
      iVar15 = FUN_004eeba0(0x01CB6900 + 0x7c,uVar3);
      uVar3 = FUN_0050fe80("Select Sword / Axe");
      iVar16 = FUN_004eeba0(0x01CB6900 + 0x80,uVar3);
      uVar3 = FUN_0050fe80("Select Cross");
      iVar17 = FUN_004eeba0(0x01CB6900 + 0x84,uVar3);
      uVar3 = FUN_0050fe80("Next weapon");
      iVar18 = FUN_004eeba0(0x01CB6900 + 0x90,uVar3);
      uVar3 = FUN_0050fe80("Previous weapon");
      iVar19 = FUN_004eeba0(0x01CB6900 + 0x94,uVar3);
      uVar3 = FUN_0050fe80("Next item");
      iVar20 = FUN_004eeba0(0x01CB6900 + 0x98,uVar3);
      uVar3 = FUN_0050fe80("Previous item");
      iVar21 = FUN_004eeba0(0x01CB6900 + 0x9c,uVar3);
      uVar3 = FUN_0050fe80("Item description");
      iVar22 = FUN_004eeba0(0x01CB6900 + 0xa0,uVar3);
      uVar3 = FUN_0050fe80("Next ammo");
      iVar23 = FUN_004eeba0(0x01CB6900 + 0xa4,uVar3);
      uVar3 = FUN_0050fe80("Drop item or weapon");
      iVar24 = FUN_004eeba0(0x01CB6900 + 0xaf0,uVar3);
      if (((((((((((((((((((((((iVar25 == 0 && iVar26 == 0) && iVar27 == 0) && iVar4 == 0) &&
                            iVar5 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0)
                       && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
                   iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0) &&
              iVar19 == 0) && iVar20 == 0) && iVar21 == 0) && iVar22 == 0) && iVar23 == 0) &&
          iVar24 == 0) {
        return;
      }
      FUN_004b6e10(0x01CB6900);
      FUN_0047be40(0x01C25594,"One or more keys not valid.  Restoring default controls.");
      return;
    }
    if (iVar25 != 0) {
      iVar26 = iVar25 + -1;
      local_c = iVar25;
      switch(**(uint **)(&DAT_01d086f4 + iVar26 * 4)) {
      case 0x251:
      case 0x252:
      case 0x253:
      case 0x254:
        pcVar2 = local_2d4;
        pcVar28 = (char *)(iVar26 * 0x28 + 0x1d08790);
        do {
          cVar1 = *pcVar28;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar28 = (char *)FUN_0050fe80(" is assigned to the gamepad.  Can't assign a key.");
        iVar25 = -1;
        pcVar2 = local_2d4;
        do {
          pcVar29 = pcVar2;
          if (iVar25 == 0) break;
          iVar25 = iVar25 + -1;
          pcVar29 = pcVar2 + (uint)bVar31 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar29;
        } while (cVar1 != '\0');
        pcVar29 = pcVar29 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar29 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar29[1] = cVar1;
          pcVar29 = pcVar29 + 2;
        } while (cVar1 != '\0');
        FUN_0047be90(0x01C25594,local_2d4);
        break;
      case 0x255:
      case 0x256:
        pcVar2 = local_6d4;
        pcVar28 = (char *)(iVar26 * 0x28 + 0x1d08790);
        do {
          cVar1 = *pcVar28;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar28 = (char *)FUN_0050fe80(" is assigned to the mouse.  Can't assign a key.");
        iVar25 = -1;
        pcVar2 = local_6d4;
        do {
          pcVar29 = pcVar2;
          if (iVar25 == 0) break;
          iVar25 = iVar25 + -1;
          pcVar29 = pcVar2 + (uint)bVar31 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar29;
        } while (cVar1 != '\0');
        pcVar29 = pcVar29 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar29 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar29[1] = cVar1;
          pcVar29 = pcVar29 + 2;
        } while (cVar1 != '\0');
        FUN_0047be40(0x01C25594,local_6d4);
        break;
      default:
        while( true ) {
          if (*(int *)(0x01CB6900 + 0xd0) == 2) {
            FUN_004b7140(0x01CB6900);
          }
          iVar25 = -1;
          iVar27 = 0;
          do {
            iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,iVar27);
            if ((iVar4 != 0) && (bVar30 = -1 < iVar25, iVar25 = iVar27, bVar30)) goto LAB_004efc41;
            iVar27 = iVar27 + 1;
          } while (iVar27 < 600);
          if (iVar25 == -1) break;
LAB_004efc41:
          uVar3 = FUN_0050fe80("OK - you can release the key now...");
          FUN_0047be90(0x01C25594,uVar3);
          iVar25 = (**(code **)*0x01D02F84)(0x01D02F84,1);
          if (iVar25 != 0) break;
          FUN_00589560();
        }
        iVar25 = (**(code **)*0x01D02F84)(0x01D02F84,1);
        if (iVar25 != 0) {
          FUN_004032b0();
          FUN_004820b0(local_a94,0);
          goto LAB_004eed8e;
        }
        pcVar28 = (char *)FUN_0050fe80("Press new key or button for ");
        pcVar2 = acStack_4d4;
        do {
          cVar1 = *pcVar28;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
        pcVar28 = (char *)(iVar26 * 0x28 + 0x1d08790);
        iVar25 = -1;
        pcVar2 = acStack_4d4;
        do {
          pcVar29 = pcVar2;
          if (iVar25 == 0) break;
          iVar25 = iVar25 + -1;
          pcVar29 = pcVar2 + (uint)bVar31 * -2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar29;
        } while (cVar1 != '\0');
        pcVar29 = pcVar29 + -1;
        do {
          cVar1 = *pcVar28;
          *pcVar29 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar28[1];
          pcVar28 = pcVar28 + 2;
          pcVar29[1] = cVar1;
          pcVar29 = pcVar29 + 2;
        } while (cVar1 != '\0');
        FUN_0047be90(0x01C25594,acStack_4d4);
        FUN_004dfee0(0x01D02F84,1);
LAB_004efd32:
        do {
          FUN_00589560();
          if (*(int *)(0x01CB6900 + 0xd0) == 2) {
            FUN_004b7140(0x01CB6900);
          }
          iVar25 = -1;
          iVar27 = 0;
          do {
            iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,iVar27);
            if ((iVar4 != 0) && (bVar30 = -1 < iVar25, iVar25 = iVar27, bVar30)) goto LAB_004efd32;
            iVar27 = iVar27 + 1;
          } while (iVar27 < 600);
        } while (iVar25 < 0);
        **(int **)(&DAT_01d086f4 + iVar26 * 4) = iVar25;
        uVar3 = FUN_0050fe80("OK - you can release the key now...");
        FUN_0047be90(0x01C25594,uVar3);
        while( true ) {
          if (*(int *)(0x01CB6900 + 0xd0) == 2) {
            FUN_004b7140(0x01CB6900);
          }
          iVar25 = -1;
          iVar27 = 0;
          do {
            iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,iVar27);
            if ((iVar4 != 0) && (bVar30 = -1 < iVar25, iVar25 = iVar27, bVar30)) goto LAB_004efdcb;
            iVar27 = iVar27 + 1;
          } while (iVar27 < 600);
          if (iVar25 == -1) break;
LAB_004efdcb:
          FUN_00589560();
        }
        iVar25 = 0;
        if (0 < _DAT_01d086f0) {
          iVar27 = 0;
          do {
            if ((iVar25 != iVar26) &&
               (**(int **)(&DAT_01d086f4 + iVar27) == **(int **)(&DAT_01d086f4 + iVar26 * 4))) {
              **(int **)(&DAT_01d086f4 + iVar27) = 599;
            }
            iVar25 = iVar25 + 1;
            iVar27 = iVar27 + 4;
          } while (iVar25 < _DAT_01d086f0);
        }
        FUN_004dfee0(0x01D02F84,0);
      }
      FUN_004820b0(local_a94,0);
      goto LAB_004eed8e;
    }
    FUN_004b6e10(0x01CB6900);
    FUN_004820b0(local_a94,0);
  } while( true );
}
