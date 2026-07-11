// Name: FUN_004d2d00
// Address: 004d2d00
// Address Range: [[004d2d00, 004d4365]]
// Convention: unknown
// Signature: void FUN_004d2d00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d2d00(void)

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
  int iVar28;
  int iVar29;
  char *pcVar30;
  int iVar31;
  char *pcVar32;
  bool bVar33;
  byte bVar34;
  byte *puVar35;
  char local_844 [512];
  char local_644 [512];
  char acStack_444 [512];
  byte local_244 [16];
  uint local_234;
  byte local_d4 [200];
  int local_c;
  
  bVar34 = 0;
  if (((*(int *)(0x01C775EC + 0xbc) != 2) || (*(int *)(0x01C775EC + 0xa4) != 0)) ||
     (iVar28 = FUN_004cf8d0(), iVar28 != 0)) {
    local_c = 0;
LAB_004d2d2e:
    _DAT_01cc8120 = 0;
    pcVar2 = (char *)FUN_004ee370("Forward");
    iVar28 = 0x01C775EC + 0x28;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370(&DAT_00588e40);
    iVar28 = 0x01C775EC + 0x2c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    if (*(int *)(0x01C775EC + 0x98) == 0) {
      puVar35 = &DAT_00588e4a;
    }
    else {
      puVar35 = &DAT_00588e45;
    }
    pcVar2 = (char *)FUN_004ee370(puVar35);
    iVar28 = 0x01C775EC + 0x30;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Strafe on");
    iVar28 = 0x01C775EC + 0x34;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Strafe left");
    iVar28 = 0x01C775EC + 0x38;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Strafe right");
    iVar28 = 0x01C775EC + 0x3c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Turn left");
    iVar28 = 0x01C775EC + 0x44;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Turn right");
    iVar28 = 0x01C775EC + 0x40;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Fire / Action");
    iVar28 = 0x01C775EC + 0x48;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Use item");
    iVar28 = 0x01C775EC + 0x4c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Light");
    iVar28 = 0x01C775EC + 0x50;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Night Vision");
    iVar28 = 0x01C775EC + 0x54;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370(&DAT_00588eb0);
    iVar28 = 0x01C775EC + 0x58;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Point up");
    iVar28 = 0x01C775EC + 0x60;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Point down");
    iVar28 = 0x01C775EC + 100;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370(&DAT_00588ec9);
    iVar28 = 0x01C775EC + 0x5c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Select pistol weapons");
    iVar28 = 0x01C775EC + 0x68;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Select assault weapons");
    iVar28 = 0x01C775EC + 0x6c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Select flame weapons");
    iVar28 = 0x01C775EC + 0x70;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Select grenade weapons");
    iVar28 = 0x01C775EC + 0x74;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Select melee weapons");
    iVar28 = 0x01C775EC + 0x78;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Next weapon");
    iVar28 = 0x01C775EC + 0x7c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Previous weapon");
    iVar28 = 0x01C775EC + 0x80;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Next item");
    iVar28 = 0x01C775EC + 0x84;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Previous item");
    iVar28 = 0x01C775EC + 0x88;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Item description");
    iVar28 = 0x01C775EC + 0x8c;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    pcVar2 = (char *)FUN_004ee370("Next ammo");
    iVar28 = 0x01C775EC + 0x90;
    if (0x1d < _DAT_01cc8120) {
      _DAT_01cc4800 = "..\\core\\menu.cpp";
      _DAT_01cc4804 = 0x827;
      FUN_004c8440("Too many custom keys!");
    }
    pcVar30 = (char *)(_DAT_01cc8120 * 0x28 + 0x1cc81a0);
    *(int *)(&DAT_01cc8124 + _DAT_01cc8120 * 4) = iVar28;
    do {
      cVar1 = *pcVar2;
      *pcVar30 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar30[1] = cVar1;
      pcVar30 = pcVar30 + 2;
    } while (cVar1 != '\0');
    _DAT_01cc8120 = _DAT_01cc8120 + 1;
    FUN_0052ee70();
    FUN_00553910();
    FUN_00474c90(local_244);
    uVar3 = FUN_004ee370("Restore defaults");
    iVar28 = 0;
    FUN_00473cb0(local_244,uVar3);
    if (0 < _DAT_01cc8120) {
      iVar29 = 0x1cc81a0;
      iVar31 = 0;
      do {
        uVar3 = FUN_004d2900(**(uint **)(&DAT_01cc8124 + iVar31));
        FUN_00563c90(local_d4,"%s\t%s",iVar29,uVar3);
        iVar31 = iVar31 + 4;
        iVar28 = iVar28 + 1;
        iVar29 = iVar29 + 0x28;
        FUN_00473cb0(local_244,local_d4);
      } while (iVar28 < _DAT_01cc8120);
    }
    local_234 = 1;
    uVar3 = FUN_004ee370("Edit key settings",local_c);
    iVar28 = FUN_00474d70(local_244,uVar3);
    if (-1 < iVar28) {
      if (iVar28 == 0) {
        FUN_0049e610(0x01C775EC);
        FUN_00474cf0(local_244,0);
      }
      else {
        iVar29 = iVar28 + -1;
        local_c = iVar28;
        switch(**(uint **)(&DAT_01cc8124 + iVar29 * 4)) {
        case 0x251:
        case 0x252:
        case 0x253:
        case 0x254:
          pcVar2 = local_644;
          pcVar30 = (char *)(iVar29 * 0x28 + 0x1cc81a0);
          do {
            cVar1 = *pcVar30;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar30[1];
            pcVar30 = pcVar30 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar30 = (char *)FUN_004ee370(" is assigned to the gamepad.  Can't assign a key.");
          iVar28 = -1;
          pcVar2 = local_644;
          do {
            pcVar32 = pcVar2;
            if (iVar28 == 0) break;
            iVar28 = iVar28 + -1;
            pcVar32 = pcVar2 + (uint)bVar34 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar32;
          } while (cVar1 != '\0');
          pcVar32 = pcVar32 + -1;
          do {
            cVar1 = *pcVar30;
            *pcVar32 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar30[1];
            pcVar30 = pcVar30 + 2;
            pcVar32[1] = cVar1;
            pcVar32 = pcVar32 + 2;
          } while (cVar1 != '\0');
          FUN_0046fff0(0x01BCD074,local_644);
          break;
        case 0x255:
        case 0x256:
          pcVar2 = local_844;
          pcVar30 = (char *)(iVar29 * 0x28 + 0x1cc81a0);
          do {
            cVar1 = *pcVar30;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar30[1];
            pcVar30 = pcVar30 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          pcVar30 = (char *)FUN_004ee370(" is assigned to the mouse.  Can't assign a key.");
          iVar28 = -1;
          pcVar2 = local_844;
          do {
            pcVar32 = pcVar2;
            if (iVar28 == 0) break;
            iVar28 = iVar28 + -1;
            pcVar32 = pcVar2 + (uint)bVar34 * -2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar32;
          } while (cVar1 != '\0');
          pcVar32 = pcVar32 + -1;
          do {
            cVar1 = *pcVar30;
            *pcVar32 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar30[1];
            pcVar30 = pcVar30 + 2;
            pcVar32[1] = cVar1;
            pcVar32 = pcVar32 + 2;
          } while (cVar1 != '\0');
          FUN_0046fcd0(0x01BCD074,local_844);
          break;
        default:
          while( true ) {
            if (*(int *)(0x01C775EC + 0xbc) == 2) {
              FUN_0049e8b0(0x01C775EC);
            }
            iVar28 = -1;
            iVar31 = 0;
            do {
              iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,iVar31);
              if ((iVar4 != 0) && (bVar33 = -1 < iVar28, iVar28 = iVar31, bVar33))
              goto LAB_004d3d37;
              iVar31 = iVar31 + 1;
            } while (iVar31 < 600);
            if (iVar28 == -1) break;
LAB_004d3d37:
            uVar3 = FUN_004ee370("OK - you can release the key now...");
            FUN_0046fff0(0x01BCD074,uVar3);
            iVar28 = (**(code **)*0x01CC30E4)(0x01CC30E4,1);
            if (iVar28 != 0) break;
            FUN_00553910();
          }
          iVar28 = (**(code **)*0x01CC30E4)(0x01CC30E4,1);
          if (iVar28 == 0) {
            pcVar30 = (char *)FUN_004ee370("Press new key or button for ");
            pcVar2 = acStack_444;
            do {
              cVar1 = *pcVar30;
              *pcVar2 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar30[1];
              pcVar30 = pcVar30 + 2;
              pcVar2[1] = cVar1;
              pcVar2 = pcVar2 + 2;
            } while (cVar1 != '\0');
            pcVar30 = (char *)(iVar29 * 0x28 + 0x1cc81a0);
            iVar28 = -1;
            pcVar2 = acStack_444;
            do {
              pcVar32 = pcVar2;
              if (iVar28 == 0) break;
              iVar28 = iVar28 + -1;
              pcVar32 = pcVar2 + (uint)bVar34 * -2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar32;
            } while (cVar1 != '\0');
            pcVar32 = pcVar32 + -1;
            do {
              cVar1 = *pcVar30;
              *pcVar32 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar30[1];
              pcVar30 = pcVar30 + 2;
              pcVar32[1] = cVar1;
              pcVar32 = pcVar32 + 2;
            } while (cVar1 != '\0');
            FUN_0046fff0(0x01BCD074,acStack_444);
            FUN_004c4210(0x01CC30E4,1);
LAB_004d3e28:
            do {
              FUN_00553910();
              if (*(int *)(0x01C775EC + 0xbc) == 2) {
                FUN_0049e8b0(0x01C775EC);
              }
              iVar28 = -1;
              iVar31 = 0;
              do {
                iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,iVar31);
                if ((iVar4 != 0) && (bVar33 = -1 < iVar28, iVar28 = iVar31, bVar33))
                goto LAB_004d3e28;
                iVar31 = iVar31 + 1;
              } while (iVar31 < 600);
            } while (iVar28 < 0);
            **(int **)(&DAT_01cc8124 + iVar29 * 4) = iVar28;
            uVar3 = FUN_004ee370("OK - you can release the key now...");
            FUN_0046fff0(0x01BCD074,uVar3);
            while( true ) {
              if (*(int *)(0x01C775EC + 0xbc) == 2) {
                FUN_0049e8b0(0x01C775EC);
              }
              iVar28 = -1;
              iVar31 = 0;
              do {
                iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,iVar31);
                if ((iVar4 != 0) && (bVar33 = -1 < iVar28, iVar28 = iVar31, bVar33))
                goto LAB_004d3ec0;
                iVar31 = iVar31 + 1;
              } while (iVar31 < 600);
              if (iVar28 == -1) break;
LAB_004d3ec0:
              FUN_00553910();
            }
            iVar28 = 0;
            if (0 < _DAT_01cc8120) {
              iVar31 = 0;
              do {
                if ((iVar28 != iVar29) &&
                   (**(int **)(&DAT_01cc8124 + iVar31) == **(int **)(&DAT_01cc8124 + iVar29 * 4))) {
                  **(int **)(&DAT_01cc8124 + iVar31) = 599;
                }
                iVar28 = iVar28 + 1;
                iVar31 = iVar31 + 4;
              } while (iVar28 < _DAT_01cc8120);
            }
            FUN_004c4210(0x01CC30E4,0);
          }
          else {
            FUN_00403f50();
          }
        }
        FUN_00474cf0(local_244,0);
      }
      goto LAB_004d2d2e;
    }
    FUN_00474cf0(local_244,0);
    uVar3 = FUN_004ee370("Forward");
    iVar28 = FUN_004d2b40(0x01C775EC + 0x28,uVar3);
    uVar3 = FUN_004ee370(&DAT_00589083);
    iVar29 = FUN_004d2b40(0x01C775EC + 0x2c,uVar3);
    if (*(int *)(0x01C775EC + 0x98) == 0) {
      puVar35 = &DAT_0058908d;
    }
    else {
      puVar35 = &DAT_00589088;
    }
    uVar3 = FUN_004ee370(puVar35);
    iVar31 = FUN_004d2b40(0x01C775EC + 0x30,uVar3);
    uVar3 = FUN_004ee370("Strafe on");
    iVar4 = FUN_004d2b40(0x01C775EC + 0x34,uVar3);
    uVar3 = FUN_004ee370("Strafe left");
    iVar5 = FUN_004d2b40(0x01C775EC + 0x38,uVar3);
    uVar3 = FUN_004ee370("Strafe right");
    iVar6 = FUN_004d2b40(0x01C775EC + 0x3c,uVar3);
    uVar3 = FUN_004ee370("Turn left");
    iVar7 = FUN_004d2b40(0x01C775EC + 0x44,uVar3);
    uVar3 = FUN_004ee370("Turn right");
    iVar8 = FUN_004d2b40(0x01C775EC + 0x40,uVar3);
    uVar3 = FUN_004ee370("Fire / Action");
    iVar9 = FUN_004d2b40(0x01C775EC + 0x48,uVar3);
    uVar3 = FUN_004ee370("Use item");
    iVar10 = FUN_004d2b40(0x01C775EC + 0x4c,uVar3);
    uVar3 = FUN_004ee370("Light");
    iVar11 = FUN_004d2b40(0x01C775EC + 0x50,uVar3);
    uVar3 = FUN_004ee370("Night Vision");
    iVar12 = FUN_004d2b40(0x01C775EC + 0x54,uVar3);
    uVar3 = FUN_004ee370(&DAT_005890f3);
    iVar13 = FUN_004d2b40(0x01C775EC + 0x58,uVar3);
    uVar3 = FUN_004ee370("Point up");
    iVar14 = FUN_004d2b40(0x01C775EC + 0x60,uVar3);
    uVar3 = FUN_004ee370("Point down");
    iVar15 = FUN_004d2b40(0x01C775EC + 100,uVar3);
    uVar3 = FUN_004ee370(&DAT_0058910c);
    iVar16 = FUN_004d2b40(0x01C775EC + 0x5c,uVar3);
    uVar3 = FUN_004ee370("Select pistol weapons");
    iVar17 = FUN_004d2b40(0x01C775EC + 0x68,uVar3);
    uVar3 = FUN_004ee370("Select assault weapons");
    iVar18 = FUN_004d2b40(0x01C775EC + 0x6c,uVar3);
    uVar3 = FUN_004ee370("Select flame weapons");
    iVar19 = FUN_004d2b40(0x01C775EC + 0x70,uVar3);
    uVar3 = FUN_004ee370("Select grenade weapons");
    iVar20 = FUN_004d2b40(0x01C775EC + 0x74,uVar3);
    uVar3 = FUN_004ee370("Select melee weapons");
    iVar21 = FUN_004d2b40(0x01C775EC + 0x78,uVar3);
    uVar3 = FUN_004ee370("Next weapon");
    iVar22 = FUN_004d2b40(0x01C775EC + 0x7c,uVar3);
    uVar3 = FUN_004ee370("Previous weapon");
    iVar23 = FUN_004d2b40(0x01C775EC + 0x80,uVar3);
    uVar3 = FUN_004ee370("Next item");
    iVar24 = FUN_004d2b40(0x01C775EC + 0x84,uVar3);
    uVar3 = FUN_004ee370("Previous item");
    iVar25 = FUN_004d2b40(0x01C775EC + 0x88,uVar3);
    uVar3 = FUN_004ee370("Item description");
    iVar26 = FUN_004d2b40(0x01C775EC + 0x8c,uVar3);
    uVar3 = FUN_004ee370("Next ammo");
    iVar27 = FUN_004d2b40(0x01C775EC + 0x90,uVar3);
    if ((((((((((((((((((((((((((iVar28 != 0 || iVar29 != 0) || iVar31 != 0) || iVar4 != 0) ||
                             iVar5 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) || iVar9 != 0)
                        || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
                    iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) ||
               iVar19 != 0) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) ||
          iVar24 != 0) || iVar25 != 0) || iVar26 != 0) || iVar27 != 0) {
      FUN_0049e610(0x01C775EC);
      FUN_0046fcd0(0x01BCD074,"One or more keys not valid.  Restoring default controls.");
      return;
    }
  }
  return;
}
