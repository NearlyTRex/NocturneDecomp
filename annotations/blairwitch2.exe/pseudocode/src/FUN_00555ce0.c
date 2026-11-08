// Name: FUN_00555ce0
// Address: 00555ce0
// Address Range: [[00555ce0, 00555fac]]
// Convention: unknown
// Signature: int FUN_00555ce0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00555ce0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piStack_1d8;
  uint *puStack_1d4;
  int iStack_1d0;
  uint uStack_1cc;
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  ushort *puStack_28;
  ushort uStack_24;
  ushort uStack_22;
  uint uStack_20;
  int iStack_1c;
  ushort uStack_18;
  ushort uStack_16;
  
  if (_DAT_0264a5c4 != (int *)0x0) {
    iVar6 = 1;
    iVar4 = 0x18;
    iVar3 = _DAT_0264a60c;
    while (iVar3 != 0) {
      iVar6 = iVar6 + 1;
      if (0x617 < iVar4 + 0x18) break;
      iVar3 = *(int *)(&DAT_0264a60c + iVar4);
      iVar4 = iVar4 + 0x18;
    }
    if (iVar6 < 0x41) {
      uStack_1cc = 0x12;
      iStack_1d0 = 0;
      puStack_1d4 = (uint *)&uStack_24;
      piStack_1d8 = (int *)0x555d40;
      FUN_005b77c0();
      uStack_1cc = 0x14;
      iStack_1d0 = 0;
      puStack_1d4 = &uStack_38;
      piStack_1d8 = (int *)0x555d59;
      FUN_005b77c0();
      uStack_38 = 0x14;
      uStack_34 = 0xa0;
      if (_DAT_0264ac0c != 0) {
        uStack_34 = 0xa8;
      }
      if (_DAT_0264a5d0 == 0) {
        uStack_34 = uStack_34 | 0x40;
      }
      else {
        uStack_34 = uStack_34 | 0x10;
      }
      if (*(int *)(param_2 + 0x100) == 2) {
        uStack_24 = 0x20;
        uStack_22 = *(ushort *)(param_2 + 0x108);
        uStack_20 = *(uint *)(param_2 + 0x10c);
        iVar3 = (uint)uStack_22 * *(int *)(param_2 + 0x104);
        iVar4 = iVar3 >> 0x1f;
        uVar1 = (int)((iVar3 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4;
        uStack_18 = (ushort)uVar1;
        iStack_1c = *(int *)(param_2 + 0x10c) * (uVar1 & 0xffff);
        uStack_16 = 4;
        iStack_30 = (*(int *)(param_2 + 0x110) * *(int *)(param_2 + 0x108)) / 2;
      }
      else {
        uStack_24 = 1;
        uStack_22 = *(ushort *)(param_2 + 0x108);
        uStack_20 = *(uint *)(param_2 + 0x10c);
        iVar3 = (uint)uStack_22 * *(int *)(param_2 + 0x104);
        iVar4 = iVar3 >> 0x1f;
        uVar1 = (int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
        uStack_18 = (ushort)uVar1;
        uVar1 = uVar1 & 0xffff;
        iStack_1c = *(int *)(param_2 + 0x10c) * uVar1;
        uStack_16 = *(ushort *)(param_2 + 0x104);
        iStack_30 = *(int *)(param_2 + 0x110) * uVar1;
      }
      puStack_28 = &uStack_24;
      iVar4 = iVar6 * 0x18;
      uStack_1cc = 0;
      iStack_1d0 = iVar4 + 0x264a5f4;
      puStack_1d4 = &uStack_38;
      piStack_1d8 = _DAT_0264a5c4;
      iVar3 = (**(code **)(*_DAT_0264a5c4 + 0xc))();
      if (iVar3 == 0) {
        if (*(int *)(iVar4 + 0x264a5f4) != 0) {
          iVar3 = *(int *)(param_2 + 0x104) * 0x100 * *(int *)(param_2 + 0x108);
          iVar5 = iVar3 >> 0x1f;
          *(int *)(iVar4 + 0x264a5fc) = (int)((iVar3 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
          *(uint *)(iVar4 + 0x264a604) = 0;
          *(uint *)(iVar4 + 0x264a600) = uStack_40;
          return iVar6;
        }
      }
      else {
        uVar2 = FUN_00554ad0(iVar3);
        FUN_005b7790(&piStack_1d8,"DirectSux: Unable to %s.  (%s)",
                     ">Create secondary buffer" + 1,uVar2);
        FUN_005549c0(&piStack_1d8);
      }
      FUN_005549c0("DirectSoundDevice::allocateSample - access failed\n");
      return 0;
    }
  }
  return 0;
}
