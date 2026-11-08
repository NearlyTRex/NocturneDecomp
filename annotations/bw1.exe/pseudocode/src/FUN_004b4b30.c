// Name: FUN_004b4b30
// Address: 004b4b30
// Address Range: [[004b4b30, 004b4dc1]]
// Convention: unknown
// Signature: void FUN_004b4b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4b30(void)

{
  byte *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  
  puVar5 = &DAT_01c58aa0;
  _DAT_01c58a9c = 0;
  do {
    FUN_004abea0(puVar5);
    puVar5 = puVar5 + 0x2c;
  } while (puVar5 != &DAT_01c6eaa0);
  _DAT_01c6eaa4 = 0;
  _DAT_01c6eaa0 = 0;
  _DAT_01c986b0 = 0;
  puVar5 = (byte *)0x1c986b4;
  do {
    puVar1 = puVar5 + 0x54;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01c9dab4);
  puVar5 = (byte *)0x1c9dab8;
  do {
    puVar1 = puVar5 + 0x5c;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01c9f1b8);
  puVar2 = (uint *)&DAT_01c9f1bc;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0x17;
  } while (puVar2 != (uint *)&DAT_01c9f8ec);
  _DAT_01c726a8 = 0;
  _DAT_01c9f8ec = 0;
  _DAT_01c726ac = 0;
  iVar4 = 0x1c9f8f0;
  do {
    iVar3 = iVar4 + 0xa4;
    *(uint *)(iVar4 + 0x24) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0x1ca9cf0);
  puVar5 = (byte *)0x1ca9cf4;
  do {
    puVar1 = puVar5 + 0x24;
    *(uint *)(puVar5 + 0x20) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01ca9e5c);
  _DAT_01ca9e5c = 0;
  puVar5 = (byte *)0x1ca9e60;
  do {
    puVar1 = puVar5 + 0xa4;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01cac760);
  _DAT_01cac760 = 0;
  puVar5 = (byte *)0x1cac764;
  do {
    puVar1 = puVar5 + 0x50;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01cadb64);
  _DAT_01cadb64 = 0;
  puVar5 = (byte *)0x1cadb68;
  do {
    puVar1 = puVar5 + 0x54;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01caf068);
  _DAT_01c9dab4 = 0;
  puVar5 = (byte *)0x1c9dab8;
  do {
    puVar1 = puVar5 + 0x5c;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01c9f1b8);
  puVar5 = (byte *)0x1cb0070;
  _DAT_01cb006c = 0;
  do {
    FUN_004b1620(puVar5);
    puVar5 = puVar5 + 0x1c;
  } while (puVar5 != &DAT_01cb0188);
  puVar5 = (byte *)0x1cb018c;
  _DAT_01cb0188 = 0;
  do {
    FUN_004b1c40(puVar5);
    puVar5 = puVar5 + 0x3e4;
  } while (puVar5 != &DAT_01cb4f5c);
  puVar5 = (byte *)0x1cb4f60;
  _DAT_01cb4f5c = 0;
  do {
    FUN_004b1f90(puVar5);
    puVar5 = puVar5 + 0x70;
  } while (puVar5 != &DAT_01cb5820);
  puVar5 = &DAT_01cb5824;
  _DAT_01cb5820 = 0;
  do {
    FUN_004b2b40(puVar5);
    puVar5 = puVar5 + 0x24;
  } while (puVar5 != &DAT_01cb9e74);
  puVar5 = (byte *)0x1cb9e78;
  _DAT_01cb9e74 = 0;
  do {
    FUN_004b3480(puVar5);
    puVar5 = puVar5 + 0x2c;
  } while (puVar5 != &DAT_01cba030);
  _DAT_01cba030 = 0;
  puVar5 = (byte *)0x1cba034;
  do {
    FUN_004b3c70(puVar5);
    puVar5 = puVar5 + 0x24;
  } while (puVar5 != &DAT_01cbae44);
  _DAT_01cbae44 = 0;
  puVar5 = (byte *)0x1cbae48;
  do {
    puVar1 = puVar5 + 0x60;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01cbc108);
  _DAT_01cbc108 = 0;
  puVar5 = (byte *)0x1cbc10c;
  do {
    puVar1 = puVar5 + 0x40;
    *(uint *)(puVar5 + 0x24) = 0;
    puVar5 = puVar1;
  } while (puVar1 != &DAT_01cc010c);
  _DAT_01cc010c = 0;
  iVar4 = 0x1cc0110;
  do {
    iVar3 = iVar4 + 0x40;
    *(uint *)(iVar4 + 0x24) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0x1cc4110);
  return;
}
