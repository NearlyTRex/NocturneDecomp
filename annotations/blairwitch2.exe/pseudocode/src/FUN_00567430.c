// Name: FUN_00567430
// Address: 00567430
// Address Range: [[00567430, 00567522]]
// Convention: unknown
// Signature: void FUN_00567430(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567430(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte auStack_1ae4 [704];
  float afStack_1824 [1542];
  
  bVar2 = 0;
  iVar1 = param_1 + 0x2b4;
  FUN_00548620(iVar1,auStack_1ae4);
  FUN_00544f80(iVar1,*(uint *)(param_1 + 0x256f0),
               *(float *)(param_1 + 0x256c0) * (float)_DAT_005eb865,0xffffffff);
  FUN_005940b0(_DAT_0264be30 * 0x10 + param_1 + 0x964);
  afStack_1824[0x602] = afStack_1824[0x5ff];
  afStack_1824[(uint)bVar2 * -2 + 0x603] = afStack_1824[(uint)bVar2 * -2 + 0x600];
  afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x604] =
       afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x601];
  afStack_1824[0x605] = -afStack_1824[0x603];
  FUN_00593fe0(afStack_1824[0x605],0x3f800000,0xffffffff,&LAB_00544cc0);
  afStack_1824[0x5f7] = afStack_1824[0x5fb];
  afStack_1824[(uint)bVar2 * -2 + 0x5f8] = afStack_1824[(uint)bVar2 * -2 + 0x5fc];
  afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5f9] =
       afStack_1824[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5fd];
  (afStack_1824 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5f9)[(uint)bVar2 * -2 + 1] =
       (afStack_1824 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x5fd)[(uint)bVar2 * -2 + 1];
  FUN_00546f40(iVar1,afStack_1824 + 0x5f7);
  FUN_00548620(iVar1,param_2);
  FUN_005486f0(iVar1,auStack_1ae4);
  return;
}
