// Name: FUN_0051e280
// Address: 0051e280
// Address Range: [[0051e280, 0051e372]]
// Convention: unknown
// Signature: void FUN_0051e280(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051e280(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte auStack_1ae4 [704];
  float afStack_1824 [1542];
  
  bVar2 = 0;
  iVar1 = param_1 + 0x158;
  FUN_0054f850(iVar1,auStack_1ae4);
  FUN_0054c1b0(iVar1,*(uint *)(param_1 + 0x20c78),
               *(float *)(param_1 + 0x20c48) * (float)_DAT_005cd3c7,0xffffffff);
  FUN_00585de0(_DAT_01ed36dc * 0x10 + param_1 + 0x808);
  afStack_1824[0x602] = afStack_1824[0x5ff];
  afStack_1824[(uint)bVar2 * -2 + 0x603] = afStack_1824[(uint)bVar2 * -2 + 0x600];
  afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x604] =
       afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x601];
  afStack_1824[0x605] = -afStack_1824[0x603];
  FUN_00585d10(afStack_1824[0x605],0x3f800000,0xffffffff,&LAB_0054bef0);
  afStack_1824[0x5f7] = afStack_1824[0x5fb];
  afStack_1824[(uint)bVar2 * -2 + 0x5f8] = afStack_1824[(uint)bVar2 * -2 + 0x5fc];
  afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5f9] =
       afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5fd];
  (afStack_1824 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5f9)[(uint)bVar2 * -2 + 1] =
       (afStack_1824 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5fd)[(uint)bVar2 * -2 + 1];
  FUN_0054e170(iVar1,afStack_1824 + 0x5f7);
  FUN_0054f850(iVar1,param_2);
  FUN_0054f920(iVar1,auStack_1ae4);
  return;
}
