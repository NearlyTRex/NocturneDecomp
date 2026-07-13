// Name: FUN_10003100
// Address: 10003100
// Address Range: [[10003100, 10003332]]
// Convention: unknown
// Signature: bool FUN_10003100(void)

#include "nocturne.h"

bool FUN_10003100(void)

{
  int iVar1;
  uint *puVar2;
  uint **ppuVar3;
  uint *puVar4;
  byte bVar5;
  uint *puStack_140;
  uint uStack_13c;
  int *piStack_138;
  byte *puStack_134;
  uint *puStack_130;
  int *piStack_12c;
  byte *puStack_128;
  uint uStack_124;
  uint *puStack_120;
  uint uStack_11c;
  uint auStack_dc [8];
  uint uStack_bc;
  uint auStack_b8 [46];
  
  bVar5 = 0;
  uStack_11c = 0;
  puStack_120 = &DAT_100141e0;
  uStack_124 = DAT_10014180;
  puStack_128 = &DAT_10012178;
  piStack_12c = DAT_100141dc;
  puStack_130 = (uint *)0x10003126;
  iVar1 = (**(code **)(*DAT_100141dc + 0x20))();
  if (iVar1 != 0) {
    return false;
  }
  puStack_130 = &uStack_124;
  uStack_124 = 0;
  puStack_134 = &LAB_10003340;
  piStack_138 = DAT_100141e0;
  uStack_13c = 0x10003153;
  iVar1 = (**(code **)(*DAT_100141e0 + 0x20))();
  if (iVar1 != 0) {
    return false;
  }
  if (puStack_130 == (uint *)0x0) {
    return false;
  }
  uStack_13c = 0;
  puStack_140 = &DAT_100141e4;
  iVar1 = (**(code **)(*DAT_100141dc + 0x18))(DAT_100141dc);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_100141e0 + 0x14))(DAT_100141e0,DAT_100141e4);
  if (iVar1 != 0) {
    return false;
  }
  ppuVar3 = &puStack_140;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar3 = (uint *)0x0;
    ppuVar3 = ppuVar3 + (uint)bVar5 * -2 + 1;
  }
  uStack_13c = 0;
  piStack_138 = (int *)0x0;
  puStack_134 = (byte *)DAT_10014174;
  puStack_130 = (uint *)DAT_10014178;
  puStack_140 = (uint *)0x2c;
  piStack_12c = (int *)0xbf800000;
  uStack_124 = 0x40000000;
  puStack_120 = (uint *)(((float)DAT_10014178 / (float)DAT_10014174) * 2.0);
  uStack_11c = 0;
  puStack_128 = (byte *)((float)puStack_120 * 0.5);
  iVar1 = (**(code **)(*DAT_100141e4 + 0x44))(DAT_100141e4,&puStack_140);
  if (iVar1 != 0) {
    return false;
  }
  (**(code **)(*DAT_100141e0 + 0x30))(DAT_100141e0,DAT_100141e4);
  if (DAT_101398c8 != 0) {
    puVar2 = &uStack_124;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
    }
    puVar2 = &DAT_10226a58;
    puVar4 = auStack_dc;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    uStack_124 = 0x7c;
    puStack_120 = (uint *)0x1007;
    uStack_11c = 0x1e0;
    uStack_bc = 0x40;
    iVar1 = (**(code **)(*DAT_10014188 + 0x18))(DAT_10014188,&uStack_124,&DAT_100141b8,0);
    if (iVar1 != 0) {
      FUN_10002340("Can't create hold surface");
    }
    puVar2 = auStack_b8;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
    }
    auStack_b8[0] = 100;
    (**(code **)(*DAT_100141b8 + 0x14))(DAT_100141b8,0,0,0,0x1000400,auStack_b8);
  }
  iVar1 = FUN_10003400();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_100035b0();
  return iVar1 != 0;
}
