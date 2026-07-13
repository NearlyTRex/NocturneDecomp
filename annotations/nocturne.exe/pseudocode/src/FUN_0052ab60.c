// Name: FUN_0052ab60
// Address: 0052ab60
// Address Range: [[0052ab60, 0052ad2d]]
// Convention: unknown
// Signature: int FUN_0052ab60(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052ab60(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piStack_1d8;
  uint *puStack_1d4;
  byte *puStack_1d0;
  uint uStack_1cc;
  uint local_38;
  uint local_34;
  int local_30;
  ushort *local_28;
  ushort local_24;
  short local_22;
  int local_20;
  int local_1c;
  ushort local_18;
  ushort local_16;
  
  if (_DAT_02dc9214 != (int *)0x0) {
    iVar5 = 1;
    iVar2 = 4;
    iVar3 = _DAT_02dc9248;
    while (iVar3 != 0) {
      iVar5 = iVar5 + 1;
      if (99 < iVar2 + 4) break;
      iVar3 = *(int *)(&DAT_02dc9248 + iVar2);
      iVar2 = iVar2 + 4;
    }
    if (iVar5 < 0x19) {
      uStack_1cc = 0x12;
      puStack_1d0 = (byte *)0x0;
      puStack_1d4 = (uint *)&local_24;
      piStack_1d8 = (int *)0x52abc3;
      FUN_00563cc0();
      local_24 = 1;
      local_22 = (short)param_3;
      local_20 = param_4;
      iVar3 = (int)((param_2 + (param_2 >> 0x1f) * -8) - (uint)((param_2 >> 0x1f) << 2 < 0)) >> 3;
      local_18 = local_22 * (short)iVar3;
      local_1c = param_4 * (uint)local_18;
      uStack_1cc = 0x14;
      puStack_1d0 = (byte *)0x0;
      puStack_1d4 = &local_38;
      local_16 = (ushort)param_2;
      piStack_1d8 = (int *)0x52ac45;
      FUN_00563cc0();
      local_28 = &local_24;
      local_30 = param_3 * iVar3 * param_5;
      uStack_1cc = 0;
      local_38 = 0x14;
      puStack_1d0 = &DAT_02dc9244 + iVar5 * 4;
      puStack_1d4 = &local_38;
      local_34 = 0xb0;
      piStack_1d8 = _DAT_02dc9214;
      iVar3 = (**(code **)(*_DAT_02dc9214 + 0xc))();
      if (iVar3 == 0) {
        if (*(int *)(&DAT_02dc9244 + iVar5 * 4) != 0) {
          return iVar5;
        }
      }
      else {
        uVar4 = FUN_00529a90(iVar3);
        FUN_00563c90(&piStack_1d8,"DirectSux: Unable to %s.  (%s)",
                     "?Create secondary buffer" + 1,uVar4);
        FUN_00529980(&piStack_1d8);
      }
      FUN_00529980("DirectSoundDevice::allocateSample - access failed\n");
      piVar1 = *(int **)(&DAT_02dc9244 + iVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(int *)(&DAT_02dc9244 + iVar5 * 4) = 0;
        return 0;
      }
    }
  }
  return 0;
}
