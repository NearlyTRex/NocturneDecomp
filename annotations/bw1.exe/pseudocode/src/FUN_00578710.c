// Name: FUN_00578710
// Address: 00578710
// Address Range: [[00578710, 005789dc]]
// Convention: unknown
// Signature: int FUN_00578710(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00578710(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piStack_1e8;
  uint *puStack_1e4;
  int iStack_1e0;
  uint uStack_1dc;
  uint uStack_50;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  ushort *puStack_38;
  ushort uStack_24;
  ushort uStack_22;
  uint uStack_20;
  int iStack_1c;
  ushort uStack_18;
  ushort uStack_16;
  
  if (_DAT_02c81d94 != (int *)0x0) {
    iVar6 = 1;
    iVar4 = 0x18;
    iVar3 = _DAT_02c81ddc;
    while (iVar3 != 0) {
      iVar6 = iVar6 + 1;
      if (0x617 < iVar4 + 0x18) break;
      iVar3 = *(int *)(&DAT_02c81ddc + iVar4);
      iVar4 = iVar4 + 0x18;
    }
    if (iVar6 < 0x41) {
      uStack_1dc = 0x12;
      iStack_1e0 = 0;
      puStack_1e4 = (uint *)&uStack_24;
      piStack_1e8 = (int *)0x578770;
      FUN_005bfb70();
      uStack_1dc = 0x24;
      iStack_1e0 = 0;
      puStack_1e4 = &uStack_48;
      piStack_1e8 = (int *)0x578789;
      FUN_005bfb70();
      uStack_48 = 0x24;
      uStack_44 = 0xa0;
      if (_DAT_02c823dc != 0) {
        uStack_44 = 0xa8;
      }
      if (_DAT_02c81da0 == 0) {
        uStack_44 = uStack_44 | 0x40;
      }
      else {
        uStack_44 = uStack_44 | 0x10;
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
        iStack_40 = (*(int *)(param_2 + 0x110) * *(int *)(param_2 + 0x108)) / 2;
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
        iStack_40 = *(int *)(param_2 + 0x110) * uVar1;
      }
      puStack_38 = &uStack_24;
      iVar4 = iVar6 * 0x18;
      uStack_1dc = 0;
      iStack_1e0 = iVar4 + 0x2c81dc4;
      puStack_1e4 = &uStack_48;
      piStack_1e8 = _DAT_02c81d94;
      iVar3 = (**(code **)(*_DAT_02c81d94 + 0xc))();
      if (iVar3 == 0) {
        if (*(int *)(iVar4 + 0x2c81dc4) != 0) {
          iVar3 = *(int *)(param_2 + 0x104) * 0x100 * *(int *)(param_2 + 0x108);
          iVar5 = iVar3 >> 0x1f;
          *(int *)(iVar4 + 0x2c81dcc) = (int)((iVar3 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
          *(uint *)(iVar4 + 0x2c81dd4) = 0;
          *(uint *)(iVar4 + 0x2c81dd0) = uStack_50;
          return iVar6;
        }
      }
      else {
        uVar2 = FUN_00577500(iVar3);
        FUN_005bfb40(&piStack_1e8,"DirectSux: Unable to %s.  (%s)",
                     ">Create secondary buffer" + 1,uVar2);
        FUN_005773f0(&piStack_1e8);
      }
      FUN_005773f0("DirectSoundDevice::allocateSample - access failed\n");
      return 0;
    }
  }
  return 0;
}
