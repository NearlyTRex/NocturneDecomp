// Name: FUN_004a1480
// Address: 004a1480
// Address Range: [[004a1480, 004a175a]]
// Convention: unknown
// Signature: void FUN_004a1480(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1480(void)

{
  byte *puVar1;
  byte *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = &DAT_01c74ea0;
  _DAT_01c74e9c = 0;
  do {
    FUN_00496d50(puVar1);
    puVar1 = puVar1 + 0x2c;
  } while (puVar1 != &DAT_01c8aea0);
  _DAT_01c8aea4 = 0;
  _DAT_01c8aea0 = 0;
  _DAT_01cb4eb0 = 0;
  puVar1 = (byte *)0x1cb4eb4;
  do {
    puVar2 = puVar1 + 0x54;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cba2b4);
  puVar1 = (byte *)0x1cba2b8;
  do {
    puVar2 = puVar1 + 0x5c;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cbb9b8);
  puVar3 = (uint *)&DAT_01cbb9bc;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 0x17;
  } while (puVar3 != (uint *)&DAT_01cbc0ec);
  _DAT_01c8eea8 = 0;
  _DAT_01c8eeac = 0;
  _DAT_01cbc0ec = 0;
  iVar5 = 0x1cbc0f0;
  do {
    iVar4 = iVar5 + 0xd4;
    *(uint *)(iVar5 + 0x24) = 0;
    iVar5 = iVar4;
  } while (iVar4 != 0x1cefd10);
  puVar1 = (byte *)0x1cefd14;
  do {
    puVar2 = puVar1 + 0x24;
    *(uint *)(puVar1 + 0x20) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cefe7c);
  _DAT_01cefe7c = 0;
  puVar1 = (byte *)0x1cefe80;
  do {
    puVar2 = puVar1 + 0xa4;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cf2780);
  _DAT_01cf2780 = 0;
  puVar1 = (byte *)0x1cf2784;
  do {
    puVar2 = puVar1 + 0x50;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cf3b84);
  _DAT_01cf3b84 = 0;
  puVar1 = (byte *)0x1cf3b88;
  do {
    puVar2 = puVar1 + 0x54;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cf5088);
  _DAT_01cba2b4 = 0;
  puVar1 = (byte *)0x1cba2b8;
  do {
    puVar2 = puVar1 + 0x5c;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01cbb9b8);
  puVar1 = (byte *)0x1cf6090;
  _DAT_01cf608c = 0;
  do {
    FUN_0049c670(puVar1);
    puVar1 = puVar1 + 0x20;
  } while (puVar1 != &DAT_01cf61d0);
  puVar1 = (byte *)0x1cf61d4;
  _DAT_01cf61d0 = 0;
  do {
    FUN_0049cec0(puVar1);
    puVar1 = puVar1 + 1000;
  } while (puVar1 != &DAT_01cfaff4);
  puVar1 = (byte *)0x1cfaff8;
  _DAT_01cfaff4 = 0;
  do {
    FUN_0049d570(puVar1);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01cfb8b8);
  puVar1 = (byte *)0x1cfb8bc;
  _DAT_01cfb8b8 = 0;
  do {
    FUN_0049c670(puVar1);
    puVar1 = puVar1 + 0x2c;
  } while (puVar1 != &DAT_01d00eac);
  puVar1 = (byte *)0x1d00eb0;
  _DAT_01d00eac = 0;
  do {
    FUN_0049f410(puVar1);
    puVar1 = puVar1 + 0x30;
  } while (puVar1 != &DAT_01d01ab0);
  _DAT_01d01ab0 = 0;
  puVar1 = (byte *)0x1d01ab4;
  do {
    FUN_004a05d0(puVar1);
    puVar1 = puVar1 + 0x24;
  } while (puVar1 != &DAT_01d028c4);
  _DAT_01d028c4 = 0;
  puVar1 = (byte *)0x1d028c8;
  do {
    puVar2 = puVar1 + 0x60;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01d03b88);
  _DAT_01d03b88 = 0;
  puVar1 = (byte *)0x1d03b8c;
  do {
    puVar2 = puVar1 + 0x40;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01d07b8c);
  _DAT_01d07b8c = 0;
  puVar1 = (byte *)0x1d07b90;
  do {
    puVar2 = puVar1 + 0x40;
    *(uint *)(puVar1 + 0x24) = 0;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_01d0bb90);
  puVar1 = (byte *)0x1d0bb94;
  _DAT_01d0bb90 = 0;
  do {
    FUN_0049f410(puVar1);
    puVar1 = puVar1 + 0x1e4;
  } while (puVar1 != &DAT_01d0ce7c);
  iVar5 = 0x1d0ce80;
  _DAT_01d0ce7c = 0;
  do {
    FUN_004a0470(iVar5);
    iVar5 = iVar5 + 0xc;
  } while (iVar5 != 0x1d0ceb0);
  return;
}
