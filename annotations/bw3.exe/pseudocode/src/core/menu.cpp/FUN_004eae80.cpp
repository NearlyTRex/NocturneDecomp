// Name: FUN_004eae80
// Address: 004eae80
// Address Range: [[004eae80, 004ec6ef]]
// Convention: unknown
// Signature: void FUN_004eae80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eae80(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  int iVar28;
  int iVar29;
  uint uVar30;
  char *pcVar31;
  int iVar32;
  char *pcVar33;
  bool bVar34;
  byte bVar35;
  byte *puVar36;
  byte local_c94 [960];
  char local_8d4 [512];
  char acStack_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  byte local_d4 [200];
  int local_c;
  
  bVar35 = 0;
  if (((*(int *)(0x01D2130C + 0xd4) != 2) || (*(int *)(0x01D2130C + 0xbc) != 0)) ||
     (iVar28 = FUN_004e7dc0(), iVar28 != 0)) {
    local_c = 0;
LAB_004eaeae:
    _DAT_01d75c98 = 0;
    if (*(int *)(0x01D2130C + 0xd4) != 3) {
      pcVar2 = (char *)FUN_00508960(&DAT_005c7a4b);
      iVar28 = 0x01D2130C + 0x48;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Action");
      iVar28 = 0x01D2130C + 0x4c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Forward");
      iVar28 = 0x01D2130C + 0x28;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960(&DAT_005c7a5f);
      iVar28 = 0x01D2130C + 0x2c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Strafe on");
      iVar28 = 0x01D2130C + 0x34;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Strafe left");
      iVar28 = 0x01D2130C + 0x38;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Strafe right");
      iVar28 = 0x01D2130C + 0x3c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Turn left");
      iVar28 = 0x01D2130C + 0x44;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Turn right");
      iVar28 = 0x01D2130C + 0x40;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Point up");
      iVar28 = 0x01D2130C + 0x78;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Point down");
      iVar28 = 0x01D2130C + 0x7c;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
      pcVar2 = (char *)FUN_00508960("Quick turn");
      iVar28 = 0x01D2130C + 0x74;
      if (0x1f < _DAT_01d75c98) {
        _DAT_01d71de0 = "..\\core\\menu.cpp";
        _DAT_01d71de4 = 0x8f5;
        FUN_004e4330("Too many custom keys!");
      }
      pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
      *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
      do {
        cVar1 = *pcVar2;
        *pcVar31 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar31[1] = cVar1;
        pcVar31 = pcVar31 + 2;
      } while (cVar1 != '\0');
      _DAT_01d75c98 = _DAT_01d75c98 + 1;
    }
    if (*(int *)(0x01D2130C + 0xb0) == 0) {
      puVar36 = &DAT_005c7ac0;
    }
    else {
      puVar36 = &DAT_005c7abb;
    }
    pcVar2 = (char *)FUN_00508960(puVar36);
    iVar28 = 0x01D2130C + 0x30;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Use item");
    iVar28 = 0x01D2130C + 0x50;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Lantern");
    iVar28 = 0x01D2130C + 0x54;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Journal");
    iVar28 = 0x01D2130C + 0x5c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960(&DAT_005c7add);
    iVar28 = 0x01D2130C + 0x60;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Voodoo Doll");
    iVar28 = 0x01D2130C + 0x68;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960(&DAT_005c7aed);
    iVar28 = 0x01D2130C + 0x6c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Select conventional weapons");
    iVar28 = 0x01D2130C + 0x80;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Select staves");
    iVar28 = 0x01D2130C + 0x84;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Select Christian weapons");
    iVar28 = 0x01D2130C + 0x88;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Select Shaman weapons");
    iVar28 = 0x01D2130C + 0x8c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Select Pagan weapons");
    iVar28 = 0x01D2130C + 0x90;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Next weapon");
    iVar28 = 0x01D2130C + 0x94;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Previous weapon");
    iVar28 = 0x01D2130C + 0x98;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Next item");
    iVar28 = 0x01D2130C + 0x9c;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    pcVar2 = (char *)FUN_00508960("Previous item");
    iVar28 = 0x01D2130C + 0xa0;
    if (0x1f < _DAT_01d75c98) {
      _DAT_01d71de0 = "..\\core\\menu.cpp";
      _DAT_01d71de4 = 0x8f5;
      FUN_004e4330("Too many custom keys!");
    }
    pcVar31 = (char *)(_DAT_01d75c98 * 0x28 + 0x1d75d20);
    *(int *)(&DAT_01d75c9c + _DAT_01d75c98 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar31 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar31[1] = cVar1;
      pcVar31 = pcVar31 + 2;
    } while (cVar1 != '\0');
    _DAT_01d75c98 = _DAT_01d75c98 + 1;
    FUN_00560d70();
    FUN_0057a8a0();
    FUN_004831c0(local_c94);
    uVar3 = FUN_00508960("Restore defaults");
    iVar28 = 0;
    FUN_00482070(local_c94,uVar3);
    if (0 < _DAT_01d75c98) {
      iVar32 = 0x1d75d20;
      iVar29 = 0;
      do {
        uVar3 = FUN_004eaa60(**(uint **)(&DAT_01d75c9c + iVar29));
        FUN_005a28c0(local_d4,"%s\t%s",iVar32,uVar3);
        iVar29 = iVar29 + 4;
        iVar28 = iVar28 + 1;
        iVar32 = iVar32 + 0x28;
        FUN_00482070(local_c94,local_d4);
      } while (iVar28 < _DAT_01d75c98);
    }
    FUN_00483350(local_c94,"Select");
    FUN_004833c0(local_c94,"Close");
    FUN_00483440(local_c94,1);
    uVar3 = FUN_00508960("Edit key settings",local_c,0);
    iVar28 = FUN_00483450(local_c94,uVar3);
    if (-1 < iVar28) {
      if (iVar28 != 0) {
        iVar29 = iVar28 + -1;
        local_c = iVar28;
        switch(**(uint **)(&DAT_01d75c9c + iVar29 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_2d4;
          pcVar31 = (char *)(iVar29 * 0x28 + 0x1d75d20);
          do {
            cVar1 = *pcVar31;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar31[1];
            pcVar31 = pcVar31 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar31 = (char *)FUN_00508960(" is assigned to the gamepad.  Can't assign a key.");
          iVar28 = -1;
          pcVar2 = local_2d4;
          do {
            pcVar33 = pcVar2;
            if (iVar28 == 0) break;
            iVar28 = iVar28 + -1;
            pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar33;
          } while (cVar1 != '\0');
          pcVar33 = pcVar33 + -1;
          do {
            cVar1 = *pcVar31;
            *pcVar33 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar31[1];
            pcVar31 = pcVar31 + 2;
            pcVar33[1] = cVar1;
            pcVar33 = pcVar33 + 2;
          } while (cVar1 != '\0');
          FUN_0047cfa0(0x01C5B0E4,local_2d4);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_8d4;
          pcVar31 = (char *)(iVar29 * 0x28 + 0x1d75d20);
          do {
            cVar1 = *pcVar31;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar31[1];
            pcVar31 = pcVar31 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar31 = (char *)FUN_00508960(" is assigned to the mouse.  Can't assign a key.");
          iVar28 = -1;
          pcVar2 = local_8d4;
          do {
            pcVar33 = pcVar2;
            if (iVar28 == 0) break;
            iVar28 = iVar28 + -1;
            pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar33;
          } while (cVar1 != '\0');
          pcVar33 = pcVar33 + -1;
          do {
            cVar1 = *pcVar31;
            *pcVar33 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar31[1];
            pcVar31 = pcVar31 + 2;
            pcVar33[1] = cVar1;
            pcVar33 = pcVar33 + 2;
          } while (cVar1 != '\0');
          FUN_0047cf40(0x01C5B0E4,local_8d4);
          break;
        default:
          while( true ) {
            if (*(int *)(0x01D2130C + 0xd4) == 2) {
              FUN_004b93e0(0x01D2130C);
            }
            iVar28 = -1;
            iVar32 = 0;
            do {
              iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,iVar32);
              if ((iVar4 != 0) && (bVar34 = -1 < iVar28, iVar28 = iVar32, bVar34))
              goto LAB_004ebf70;
              iVar32 = iVar32 + 1;
            } while (iVar32 < 600);
            if (((*(int *)(0x01D2130C + 0xd4) != 3) || ((iVar28 != 0x200 && (iVar28 != 0x201))))
               && (iVar28 == -1)) break;
LAB_004ebf70:
            uVar3 = FUN_00508960("OK - you can release the key now...");
            FUN_0047cfa0(0x01C5B0E4,uVar3);
            iVar28 = (**(code **)*0x01D70A78)(0x01D70A78,1);
            if (iVar28 != 0) break;
            FUN_0057a8a0();
          }
          iVar28 = (**(code **)*0x01D70A78)(0x01D70A78,1);
          if (iVar28 != 0) goto LAB_004ec1b2;
          pcVar31 = (char *)FUN_00508960("Press new key or button for ");
          pcVar2 = acStack_6d4;
          do {
            cVar1 = *pcVar31;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar31[1];
            pcVar31 = pcVar31 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar31 = (char *)(iVar29 * 0x28 + 0x1d75d20);
          iVar28 = -1;
          pcVar2 = acStack_6d4;
          do {
            pcVar33 = pcVar2;
            if (iVar28 == 0) break;
            iVar28 = iVar28 + -1;
            pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar33;
          } while (cVar1 != '\0');
          pcVar33 = pcVar33 + -1;
          do {
            cVar1 = *pcVar31;
            *pcVar33 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar31[1];
            pcVar31 = pcVar31 + 2;
            pcVar33[1] = cVar1;
            pcVar33 = pcVar33 + 2;
          } while (cVar1 != '\0');
          FUN_0047cfa0(0x01C5B0E4,acStack_6d4);
          FUN_004df5d0(0x01D70A78,1);
LAB_004ec07e:
          do {
            FUN_0057a8a0();
            if (*(int *)(0x01D2130C + 0xd4) == 2) {
              FUN_004b93e0(0x01D2130C);
            }
            iVar28 = -1;
            iVar32 = 0;
            do {
              iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,iVar32);
              if ((iVar4 != 0) && (bVar34 = -1 < iVar28, iVar28 = iVar32, bVar34))
              goto LAB_004ec07e;
              iVar32 = iVar32 + 1;
            } while (iVar32 < 600);
            if (((*(int *)(0x01D2130C + 0xd4) == 3) && ((iVar28 == 0x200 || (iVar28 == 0x201))))
               || (iVar28 == -3)) {
              pcVar31 = (char *)FUN_00508960("Mouse buttons cannot be redefined");
              pcVar2 = acStack_4d4;
              goto LAB_004ec0f2;
            }
          } while (iVar28 < 0);
          **(int **)(&DAT_01d75c9c + iVar29 * 4) = iVar28;
          goto LAB_004ec154;
        }
        goto LAB_004ebeaf;
      }
      FUN_004b8e60(0x01D2130C);
      FUN_004832b0(local_c94,0);
      goto LAB_004eaeae;
    }
    FUN_004832b0(local_c94,0);
    uVar30 = 0;
    if (*(int *)(0x01D2130C + 0xd4) != 3) {
      uVar3 = FUN_00508960("Forward");
      uVar5 = FUN_004eacb0(0x01D2130C + 0x28,uVar3);
      uVar3 = FUN_00508960(&DAT_005c7cbb);
      uVar6 = FUN_004eacb0(0x01D2130C + 0x2c,uVar3);
      uVar3 = FUN_00508960("Strafe on");
      uVar7 = FUN_004eacb0(0x01D2130C + 0x34,uVar3);
      uVar3 = FUN_00508960("Strafe left");
      uVar8 = FUN_004eacb0(0x01D2130C + 0x38,uVar3);
      uVar3 = FUN_00508960("Strafe right");
      uVar9 = FUN_004eacb0(0x01D2130C + 0x3c,uVar3);
      uVar3 = FUN_00508960("Turn left");
      uVar10 = FUN_004eacb0(0x01D2130C + 0x44,uVar3);
      uVar3 = FUN_00508960("Turn right");
      uVar11 = FUN_004eacb0(0x01D2130C + 0x40,uVar3);
      uVar3 = FUN_00508960(&DAT_005c7cf8);
      uVar12 = FUN_004eacb0(0x01D2130C + 0x48,uVar3);
      uVar3 = FUN_00508960("Point up");
      uVar13 = FUN_004eacb0(0x01D2130C + 0x78,uVar3);
      uVar3 = FUN_00508960("Point down");
      uVar14 = FUN_004eacb0(0x01D2130C + 0x7c,uVar3);
      uVar3 = FUN_00508960("Quick turn");
      uVar30 = FUN_004eacb0(0x01D2130C + 0x74,uVar3);
      uVar30 = uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 | uVar14 |
               uVar30;
    }
    if (*(int *)(0x01D2130C + 0xb0) == 0) {
      puVar36 = &DAT_005c7d21;
    }
    else {
      puVar36 = &DAT_005c7d1c;
    }
    uVar3 = FUN_00508960(puVar36);
    iVar28 = FUN_004eacb0(0x01D2130C + 0x30,uVar3);
    uVar3 = FUN_00508960("Action");
    iVar29 = FUN_004eacb0(0x01D2130C + 0x4c,uVar3);
    uVar3 = FUN_00508960("Use item");
    iVar32 = FUN_004eacb0(0x01D2130C + 0x50,uVar3);
    uVar3 = FUN_00508960("Lantern");
    iVar4 = FUN_004eacb0(0x01D2130C + 0x54,uVar3);
    uVar3 = FUN_00508960("Journal");
    iVar15 = FUN_004eacb0(0x01D2130C + 0x5c,uVar3);
    uVar3 = FUN_00508960(&DAT_005c7d45);
    iVar16 = FUN_004eacb0(0x01D2130C + 0x60,uVar3);
    uVar3 = FUN_00508960("Voodoo Doll");
    iVar17 = FUN_004eacb0(0x01D2130C + 0x68,uVar3);
    uVar3 = FUN_00508960(&DAT_005c7d55);
    iVar18 = FUN_004eacb0(0x01D2130C + 0x6c,uVar3);
    uVar3 = FUN_00508960("Select conventional weapons");
    iVar19 = FUN_004eacb0(0x01D2130C + 0x80,uVar3);
    uVar3 = FUN_00508960("Select staves");
    iVar20 = FUN_004eacb0(0x01D2130C + 0x84,uVar3);
    uVar3 = FUN_00508960("Select Christian weapons");
    iVar21 = FUN_004eacb0(0x01D2130C + 0x88,uVar3);
    uVar3 = FUN_00508960("Select Shaman weapons");
    iVar22 = FUN_004eacb0(0x01D2130C + 0x8c,uVar3);
    uVar3 = FUN_00508960("Select Pagan weapons");
    iVar23 = FUN_004eacb0(0x01D2130C + 0x90,uVar3);
    uVar3 = FUN_00508960("Next weapon");
    iVar24 = FUN_004eacb0(0x01D2130C + 0x94,uVar3);
    uVar3 = FUN_00508960("Previous weapon");
    iVar25 = FUN_004eacb0(0x01D2130C + 0x98,uVar3);
    uVar3 = FUN_00508960("Next item");
    iVar26 = FUN_004eacb0(0x01D2130C + 0x9c,uVar3);
    uVar3 = FUN_00508960("Previous item");
    iVar27 = FUN_004eacb0(0x01D2130C + 0xa0,uVar3);
    if (((((((((((((((((uVar30 != 0 || iVar28 != 0) || iVar29 != 0) || iVar32 != 0) || iVar4 != 0)
                   || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) || iVar19 != 0)
              || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) || iVar24 != 0) ||
         iVar25 != 0) || iVar26 != 0) || iVar27 != 0) {
      FUN_004b8e60(0x01D2130C);
      FUN_0047cf40(0x01C5B0E4,"One or more keys not valid.  Restoring default controls.");
      return;
    }
  }
  return;
LAB_004ec1b2:
  FUN_004032b0();
  FUN_004832b0(local_c94,0);
  goto LAB_004eaeae;
  while( true ) {
    cVar1 = pcVar31[1];
    pcVar31 = pcVar31 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
    if (cVar1 == '\0') break;
LAB_004ec0f2:
    cVar1 = *pcVar31;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar31 = (char *)(iVar29 * 0x28 + 0x1d75d20);
  iVar28 = -1;
  pcVar2 = acStack_4d4;
  do {
    pcVar33 = pcVar2;
    if (iVar28 == 0) break;
    iVar28 = iVar28 + -1;
    pcVar33 = pcVar2 + (uint)bVar35 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar33;
  } while (cVar1 != '\0');
  pcVar33 = pcVar33 + -1;
  do {
    cVar1 = *pcVar31;
    *pcVar33 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar31[1];
    pcVar31 = pcVar31 + 2;
    pcVar33[1] = cVar1;
    pcVar33 = pcVar33 + 2;
  } while (cVar1 != '\0');
  FUN_0047cfa0(0x01C5B0E4,acStack_4d4);
LAB_004ec154:
  uVar3 = FUN_00508960("OK - you can release the key now...");
  FUN_0047cfa0(0x01C5B0E4,uVar3);
  while( true ) {
    if (*(int *)(0x01D2130C + 0xd4) == 2) {
      FUN_004b93e0(0x01D2130C);
    }
    iVar28 = -1;
    iVar32 = 0;
    do {
      iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,iVar32);
      if ((iVar4 != 0) && (bVar34 = -1 < iVar28, iVar28 = iVar32, bVar34)) goto LAB_004ec1a4;
      iVar32 = iVar32 + 1;
    } while (iVar32 < 600);
    if (((*(int *)(0x01D2130C + 0xd4) != 3) || ((iVar28 != 0x200 && (iVar28 != 0x201)))) &&
       (iVar28 == -1)) break;
LAB_004ec1a4:
    FUN_0057a8a0();
  }
  iVar28 = 0;
  if (0 < _DAT_01d75c98) {
    iVar32 = 0;
    do {
      if ((iVar28 != iVar29) &&
         (**(int **)(&DAT_01d75c9c + iVar32) == **(int **)(&DAT_01d75c9c + iVar29 * 4))) {
        **(int **)(&DAT_01d75c9c + iVar32) = 599;
      }
      iVar28 = iVar28 + 1;
      iVar32 = iVar32 + 4;
    } while (iVar28 < _DAT_01d75c98);
  }
  FUN_004df5d0(0x01D70A78,0);
LAB_004ebeaf:
  FUN_004832b0(local_c94,0);
  goto LAB_004eaeae;
}
