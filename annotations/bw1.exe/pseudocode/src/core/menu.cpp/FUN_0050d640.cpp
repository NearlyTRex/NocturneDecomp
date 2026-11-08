// Name: FUN_0050d640
// Address: 0050d640
// Address Range: [[0050d640, 0050eff3]]
// Convention: unknown
// Signature: void FUN_0050d640(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050d640(void)

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
  int iVar30;
  int iVar31;
  uint uVar32;
  char *pcVar33;
  int iVar34;
  char *pcVar35;
  bool bVar36;
  byte bVar37;
  byte local_c94 [960];
  char local_8d4 [512];
  char acStack_6d4 [512];
  char acStack_4d4 [512];
  char local_2d4 [512];
  byte local_d4 [200];
  int local_c;
  
  bVar37 = 0;
  if (((*(int *)(0x01CCF390 + 0xd0) != 2) || (*(int *)(0x01CCF390 + 0xb8) != 0)) ||
     (iVar30 = FUN_0050a2b0(), iVar30 != 0)) {
    local_c = 0;
LAB_0050d66e:
    _DAT_01d21458 = 0;
    if (*(int *)(0x01CCF390 + 0xd0) != 3) {
      pcVar2 = (char *)FUN_00531090("Fire / Action");
      iVar30 = 0x01CCF390 + 0x48;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Forward");
      iVar30 = 0x01CCF390 + 0x28;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090(&DAT_005e8389);
      iVar30 = 0x01CCF390 + 0x2c;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Strafe on");
      iVar30 = 0x01CCF390 + 0x34;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Strafe left");
      iVar30 = 0x01CCF390 + 0x38;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Strafe right");
      iVar30 = 0x01CCF390 + 0x3c;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Turn left");
      iVar30 = 0x01CCF390 + 0x44;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Turn right");
      iVar30 = 0x01CCF390 + 0x40;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Point up");
      iVar30 = 0x01CCF390 + 0x74;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Point down");
      iVar30 = 0x01CCF390 + 0x78;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
      pcVar2 = (char *)FUN_00531090("Quick turn");
      iVar30 = 0x01CCF390 + 0x70;
      if (0x1f < _DAT_01d21458) {
        _DAT_01d1d400 = "..\\core\\menu.cpp";
        _DAT_01d1d404 = 0x8af;
        FUN_005030e0("Too many custom keys!");
      }
      pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
      *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
      do {
        cVar1 = *pcVar2;
        *pcVar33 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar33[1] = cVar1;
        pcVar33 = pcVar33 + 2;
      } while (cVar1 != '\0');
      _DAT_01d21458 = _DAT_01d21458 + 1;
    }
    if (*(int *)(0x01CCF390 + 0xac) == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    pcVar2 = (char *)FUN_00531090(pcVar2);
    iVar30 = 0x01CCF390 + 0x30;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Use item");
    iVar30 = 0x01CCF390 + 0x4c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Flashlight");
    iVar30 = 0x01CCF390 + 0x50;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Night Vision");
    iVar30 = 0x01CCF390 + 0x54;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Journal");
    iVar30 = 0x01CCF390 + 0x58;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Map");
    iVar30 = 0x01CCF390 + 0x5c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Compass");
    iVar30 = 0x01CCF390 + 0x60;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("SPS");
    iVar30 = 0x01CCF390 + 100;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Draw");
    iVar30 = 0x01CCF390 + 0x68;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Select pistol weapons");
    iVar30 = 0x01CCF390 + 0x7c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Select assault weapons");
    iVar30 = 0x01CCF390 + 0x80;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Select energy weapons");
    iVar30 = 0x01CCF390 + 0x84;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Select melee weapons");
    iVar30 = 0x01CCF390 + 0x8c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Next weapon");
    iVar30 = 0x01CCF390 + 0x90;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Previous weapon");
    iVar30 = 0x01CCF390 + 0x94;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Next item");
    iVar30 = 0x01CCF390 + 0x98;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Previous item");
    iVar30 = 0x01CCF390 + 0x9c;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Item description");
    iVar30 = 0x01CCF390 + 0xa0;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    pcVar2 = (char *)FUN_00531090("Next ammo");
    iVar30 = 0x01CCF390 + 0xa4;
    if (0x1f < _DAT_01d21458) {
      _DAT_01d1d400 = "..\\core\\menu.cpp";
      _DAT_01d1d404 = 0x8af;
      FUN_005030e0("Too many custom keys!");
    }
    pcVar33 = (char *)(_DAT_01d21458 * 0x28 + 0x1d214e0);
    *(int *)(&DAT_01d2145c + _DAT_01d21458 * 4) = iVar30;
    do {
      cVar1 = *pcVar2;
      *pcVar33 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar33[1] = cVar1;
      pcVar33 = pcVar33 + 2;
    } while (cVar1 != '\0');
    _DAT_01d21458 = _DAT_01d21458 + 1;
    FUN_0057dc40();
    FUN_005acff0();
    FUN_0049a620(local_c94);
    uVar3 = FUN_00531090("Restore defaults");
    iVar30 = 0;
    FUN_004994d0(local_c94,uVar3);
    if (0 < _DAT_01d21458) {
      iVar31 = 0x1d214e0;
      iVar34 = 0;
      do {
        uVar3 = FUN_0050d220(**(uint **)(&DAT_01d2145c + iVar34));
        FUN_005bfb40(local_d4,"%s\t%s",iVar31,uVar3);
        iVar34 = iVar34 + 4;
        iVar30 = iVar30 + 1;
        iVar31 = iVar31 + 0x28;
        FUN_004994d0(local_c94,local_d4);
      } while (iVar30 < _DAT_01d21458);
    }
    FUN_0049a7b0(local_c94,"Select");
    FUN_0049a820(local_c94,"Close");
    FUN_0049a8a0(local_c94,1);
    uVar3 = FUN_00531090("Edit key settings",local_c,0);
    iVar30 = FUN_0049a8b0(local_c94,uVar3);
    if (-1 < iVar30) {
      if (iVar30 != 0) {
        iVar31 = iVar30 + -1;
        local_c = iVar30;
        switch(**(uint **)(&DAT_01d2145c + iVar31 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_8d4;
          pcVar33 = (char *)(iVar31 * 0x28 + 0x1d214e0);
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = (char *)FUN_00531090(" is assigned to the gamepad.  Can't assign a key.");
          iVar30 = -1;
          pcVar2 = local_8d4;
          do {
            pcVar35 = pcVar2;
            if (iVar30 == 0) break;
            iVar30 = iVar30 + -1;
            pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar35;
          } while (cVar1 != '\0');
          pcVar35 = pcVar35 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar35 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar35[1] = cVar1;
            pcVar35 = pcVar35 + 2;
          } while (cVar1 != '\0');
          FUN_00494400(0x01C3EB54,local_8d4);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_2d4;
          pcVar33 = (char *)(iVar31 * 0x28 + 0x1d214e0);
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = (char *)FUN_00531090(" is assigned to the mouse.  Can't assign a key.");
          iVar30 = -1;
          pcVar2 = local_2d4;
          do {
            pcVar35 = pcVar2;
            if (iVar30 == 0) break;
            iVar30 = iVar30 + -1;
            pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar35;
          } while (cVar1 != '\0');
          pcVar35 = pcVar35 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar35 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar35[1] = cVar1;
            pcVar35 = pcVar35 + 2;
          } while (cVar1 != '\0');
          FUN_004943a0(0x01C3EB54,local_2d4);
          break;
        default:
          while( true ) {
            if (*(int *)(0x01CCF390 + 0xd0) == 2) {
              FUN_004d0960(0x01CCF390);
            }
            iVar30 = -1;
            iVar34 = 0;
            do {
              iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,iVar34);
              if ((iVar4 != 0) && (bVar36 = -1 < iVar30, iVar30 = iVar34, bVar36))
              goto LAB_0050e832;
              iVar34 = iVar34 + 1;
            } while (iVar34 < 600);
            if (((*(int *)(0x01CCF390 + 0xd0) != 3) || ((iVar30 != 0x200 && (iVar30 != 0x201))))
               && (iVar30 == -1)) break;
LAB_0050e832:
            uVar3 = FUN_00531090("OK - you can release the key now...");
            FUN_00494400(0x01C3EB54,uVar3);
            iVar30 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,1);
            if (iVar30 != 0) break;
            FUN_005acff0();
          }
          iVar30 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,1);
          if (iVar30 != 0) goto LAB_0050ea74;
          pcVar33 = (char *)FUN_00531090("Press new key or button for ");
          pcVar2 = acStack_4d4;
          do {
            cVar1 = *pcVar33;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar33 = (char *)(iVar31 * 0x28 + 0x1d214e0);
          iVar30 = -1;
          pcVar2 = acStack_4d4;
          do {
            pcVar35 = pcVar2;
            if (iVar30 == 0) break;
            iVar30 = iVar30 + -1;
            pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar35;
          } while (cVar1 != '\0');
          pcVar35 = pcVar35 + -1;
          do {
            cVar1 = *pcVar33;
            *pcVar35 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar33[1];
            pcVar33 = pcVar33 + 2;
            pcVar35[1] = cVar1;
            pcVar35 = pcVar35 + 2;
          } while (cVar1 != '\0');
          FUN_00494400(0x01C3EB54,acStack_4d4);
          FUN_004fd2b0(0x01D1BCA0,1);
LAB_0050e940:
          do {
            FUN_005acff0();
            if (*(int *)(0x01CCF390 + 0xd0) == 2) {
              FUN_004d0960(0x01CCF390);
            }
            iVar30 = -1;
            iVar34 = 0;
            do {
              iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,iVar34);
              if ((iVar4 != 0) && (bVar36 = -1 < iVar30, iVar30 = iVar34, bVar36))
              goto LAB_0050e940;
              iVar34 = iVar34 + 1;
            } while (iVar34 < 600);
            if (((*(int *)(0x01CCF390 + 0xd0) == 3) && ((iVar30 == 0x200 || (iVar30 == 0x201))))
               || (iVar30 == -3)) {
              pcVar33 = (char *)FUN_00531090("Mouse buttons cannot be redefined");
              pcVar2 = acStack_6d4;
              goto LAB_0050e9b4;
            }
          } while (iVar30 < 0);
          **(int **)(&DAT_01d2145c + iVar31 * 4) = iVar30;
          goto LAB_0050ea16;
        }
        goto LAB_0050e771;
      }
      FUN_004d0400(0x01CCF390);
      FUN_0049a710(local_c94,0);
      goto LAB_0050d66e;
    }
    FUN_0049a710(local_c94,0);
    uVar32 = 0;
    if (*(int *)(0x01CCF390 + 0xd0) != 3) {
      uVar3 = FUN_00531090("Forward");
      uVar5 = FUN_0050d470(0x01CCF390 + 0x28,uVar3);
      uVar3 = FUN_00531090("Back");
      uVar6 = FUN_0050d470(0x01CCF390 + 0x2c,uVar3);
      uVar3 = FUN_00531090("Strafe on");
      uVar7 = FUN_0050d470(0x01CCF390 + 0x34,uVar3);
      uVar3 = FUN_00531090("Strafe left");
      uVar8 = FUN_0050d470(0x01CCF390 + 0x38,uVar3);
      uVar3 = FUN_00531090("Strafe right");
      uVar9 = FUN_0050d470(0x01CCF390 + 0x3c,uVar3);
      uVar3 = FUN_00531090("Turn left");
      uVar10 = FUN_0050d470(0x01CCF390 + 0x44,uVar3);
      uVar3 = FUN_00531090("Turn right");
      uVar11 = FUN_0050d470(0x01CCF390 + 0x40,uVar3);
      uVar3 = FUN_00531090("Fire / Action");
      uVar12 = FUN_0050d470(0x01CCF390 + 0x48,uVar3);
      uVar3 = FUN_00531090("Point up");
      uVar13 = FUN_0050d470(0x01CCF390 + 0x74,uVar3);
      uVar3 = FUN_00531090("Point down");
      uVar14 = FUN_0050d470(0x01CCF390 + 0x78,uVar3);
      uVar3 = FUN_00531090("Quick turn");
      uVar32 = FUN_0050d470(0x01CCF390 + 0x70,uVar3);
      uVar32 = uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 | uVar14 |
               uVar32;
    }
    if (*(int *)(0x01CCF390 + 0xac) == 0) {
      pcVar2 = "Run";
    }
    else {
      pcVar2 = "Walk";
    }
    uVar3 = FUN_00531090(pcVar2);
    iVar30 = FUN_0050d470(0x01CCF390 + 0x30,uVar3);
    uVar3 = FUN_00531090("Use item");
    iVar31 = FUN_0050d470(0x01CCF390 + 0x4c,uVar3);
    uVar3 = FUN_00531090("Flashlight");
    iVar34 = FUN_0050d470(0x01CCF390 + 0x50,uVar3);
    uVar3 = FUN_00531090("Night Vision");
    iVar4 = FUN_0050d470(0x01CCF390 + 0x54,uVar3);
    uVar3 = FUN_00531090("Journal");
    iVar15 = FUN_0050d470(0x01CCF390 + 0x58,uVar3);
    uVar3 = FUN_00531090("Map");
    iVar16 = FUN_0050d470(0x01CCF390 + 0x5c,uVar3);
    uVar3 = FUN_00531090("Compass");
    iVar17 = FUN_0050d470(0x01CCF390 + 0x60,uVar3);
    uVar3 = FUN_00531090("SPS");
    iVar18 = FUN_0050d470(0x01CCF390 + 100,uVar3);
    uVar3 = FUN_00531090("Draw");
    iVar19 = FUN_0050d470(0x01CCF390 + 0x68,uVar3);
    uVar3 = FUN_00531090("Select pistol weapons");
    iVar20 = FUN_0050d470(0x01CCF390 + 0x7c,uVar3);
    uVar3 = FUN_00531090("Select assault weapons");
    iVar21 = FUN_0050d470(0x01CCF390 + 0x80,uVar3);
    uVar3 = FUN_00531090("Select energy weapons");
    iVar22 = FUN_0050d470(0x01CCF390 + 0x84,uVar3);
    uVar3 = FUN_00531090("Select grenade weapons");
    iVar23 = FUN_0050d470(0x01CCF390 + 0x88,uVar3);
    uVar3 = FUN_00531090("Select melee weapons");
    iVar24 = FUN_0050d470(0x01CCF390 + 0x8c,uVar3);
    uVar3 = FUN_00531090("Next weapon");
    iVar25 = FUN_0050d470(0x01CCF390 + 0x90,uVar3);
    uVar3 = FUN_00531090("Previous weapon");
    iVar26 = FUN_0050d470(0x01CCF390 + 0x94,uVar3);
    uVar3 = FUN_00531090("Next item");
    iVar27 = FUN_0050d470(0x01CCF390 + 0x98,uVar3);
    uVar3 = FUN_00531090("Previous item");
    iVar28 = FUN_0050d470(0x01CCF390 + 0x9c,uVar3);
    uVar3 = FUN_00531090("Item description");
    iVar29 = FUN_0050d470(0x01CCF390 + 0xa0,uVar3);
    if (((((((((((((((((((uVar32 != 0 || iVar30 != 0) || iVar31 != 0) || iVar34 != 0) || iVar4 != 0)
                     || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) || iVar19 != 0)
                || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) || iVar24 != 0) ||
           iVar25 != 0) || iVar26 != 0) || iVar27 != 0) || iVar28 != 0) || iVar29 != 0) {
      FUN_004d0400(0x01CCF390);
      FUN_004943a0(0x01C3EB54,"One or more keys not valid.  Restoring default controls.");
      return;
    }
  }
  return;
LAB_0050ea74:
  FUN_004032b0();
  FUN_0049a710(local_c94,0);
  goto LAB_0050d66e;
  while( true ) {
    cVar1 = pcVar33[1];
    pcVar33 = pcVar33 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
    if (cVar1 == '\0') break;
LAB_0050e9b4:
    cVar1 = *pcVar33;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar33 = (char *)(iVar31 * 0x28 + 0x1d214e0);
  iVar30 = -1;
  pcVar2 = acStack_6d4;
  do {
    pcVar35 = pcVar2;
    if (iVar30 == 0) break;
    iVar30 = iVar30 + -1;
    pcVar35 = pcVar2 + (uint)bVar37 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar35;
  } while (cVar1 != '\0');
  pcVar35 = pcVar35 + -1;
  do {
    cVar1 = *pcVar33;
    *pcVar35 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar33[1];
    pcVar33 = pcVar33 + 2;
    pcVar35[1] = cVar1;
    pcVar35 = pcVar35 + 2;
  } while (cVar1 != '\0');
  FUN_00494400(0x01C3EB54,acStack_6d4);
LAB_0050ea16:
  uVar3 = FUN_00531090("OK - you can release the key now...");
  FUN_00494400(0x01C3EB54,uVar3);
  while( true ) {
    if (*(int *)(0x01CCF390 + 0xd0) == 2) {
      FUN_004d0960(0x01CCF390);
    }
    iVar30 = -1;
    iVar34 = 0;
    do {
      iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,iVar34);
      if ((iVar4 != 0) && (bVar36 = -1 < iVar30, iVar30 = iVar34, bVar36)) goto LAB_0050ea66;
      iVar34 = iVar34 + 1;
    } while (iVar34 < 600);
    if (((*(int *)(0x01CCF390 + 0xd0) != 3) || ((iVar30 != 0x200 && (iVar30 != 0x201)))) &&
       (iVar30 == -1)) break;
LAB_0050ea66:
    FUN_005acff0();
  }
  iVar30 = 0;
  if (0 < _DAT_01d21458) {
    iVar34 = 0;
    do {
      if ((iVar30 != iVar31) &&
         (**(int **)(&DAT_01d2145c + iVar34) == **(int **)(&DAT_01d2145c + iVar31 * 4))) {
        **(int **)(&DAT_01d2145c + iVar34) = 599;
      }
      iVar30 = iVar30 + 1;
      iVar34 = iVar34 + 4;
    } while (iVar30 < _DAT_01d21458);
  }
  FUN_004fd2b0(0x01D1BCA0,0);
LAB_0050e771:
  FUN_0049a710(local_c94,0);
  goto LAB_0050d66e;
}
