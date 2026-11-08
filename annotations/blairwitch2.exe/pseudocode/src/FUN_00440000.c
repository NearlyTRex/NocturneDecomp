// Name: FUN_00440000
// Address: 00440000
// Address Range: [[00440000, 00440367]]
// Convention: unknown
// Signature: void FUN_00440000(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440000(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  int aiStackY_1048 [1016];
  int local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar7 = 0;
  _DAT_013087d4 = param_2;
  puVar5 = (uint *)(param_2 + 0x10);
  puVar6 = (uint *)&DAT_013087d8;
  for (iVar3 = 10; iVar2 = 0, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  do {
    iVar3 = iVar2 + 4;
    uVar1 = FUN_005b849c();
    *(uint *)(iVar2 + 0x13083d4) = uVar1 & 0xff;
    iVar2 = iVar3;
  } while (iVar3 != 0x400);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar2 = 0;
    do {
      *(uint *)(iVar2 + 0x14c3550) = *(uint *)(param_1 + 0x150);
      *(uint *)(iVar2 + 0x14c3910) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x154));
  }
  FUN_0044ac60(param_2);
  fVar9 = (float10)*(float *)(param_2 + 0x140) * (float10)_DAT_005ce5be;
  fVar10 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_005ce5c6;
  FUN_005b7ff0();
  local_30 = FUN_005b7ff0();
  _DAT_00b667a0 = (int)ROUND(fVar10);
  _DAT_00b6679c = (int)ROUND(fVar9);
  _DAT_00b667a0 = _DAT_00b667a0 + -1;
  if (0 < *(int *)(param_1 + 0x154)) {
    local_2c = 0;
    local_38 = 0xa005d4;
    local_3c = 0x14c3cd0;
    local_40 = 0xaf5218;
    local_34 = 0x91e6d4;
    do {
      if (*(int *)(param_1 + 0x150) != *(int *)(local_2c + 0x14c3550)) {
        local_18 = *(int *)(local_2c + 0x14c3550);
        local_28 = *(int *)(local_2c + 0x14c3910);
        local_1c = local_34 + local_18 * 0xc;
        local_14 = (char *)(local_40 + local_18);
        local_24 = (uint *)(local_3c + local_18 * 4);
        local_20 = (uint *)(*(int *)(&DAT_01c2b64c + (local_30 << (DAT_01308800 & 0x1f)) * 4) +
                           (local_18 << (DAT_01308800 & 0x1f)) * 4);
        pfVar4 = (float *)(local_18 * 0xc + local_38);
        iVar3 = local_18 - local_28;
        bVar8 = SBORROW4(local_18,local_28);
        while (bVar8 != iVar3 < 0) {
          if ((*local_20 < *local_24) &&
             (0.0 <= pfVar4[2] * _DAT_013087f8 + *pfVar4 * _DAT_013087e0 + pfVar4[1] * _DAT_013087ec
             )) {
            FUN_0043cbe0(_DAT_013087d4,local_1c);
            local_54 = local_60;
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
            *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_4c) &&
               ((uVar1 = (uint)*(ushort *)
                                (*(int *)(_DAT_013087d4 + 0x2f94) +
                                ((local_50 >> 0x10) * *(int *)(_DAT_013087d4 + 0x1cc0) +
                                (local_54 >> 0x10)) * 2), (int)uVar1 < _DAT_00b6679c &&
                (local_4c < (int)(uVar1 + 0x80))))) {
              *local_14 = *local_14 +
                          (char)((int)((_DAT_00b6679c - uVar1) *
                                      (uint)*(byte *)(*(int *)(_DAT_013087d4 + 0x1c54) +
                                                     ((*(uint *)(_DAT_013087d4 + 0x1c68) &
                                                      local_50 >>
                                                      (*(byte *)(_DAT_013087d4 + 0x1ccc) & 0x1f)) <<
                                                     (*(byte *)(_DAT_013087d4 + 0x1c60) & 0x1f)) +
                                                     (local_54 >>
                                                      (*(byte *)(_DAT_013087d4 + 0x1cc8) & 0x1f) &
                                                     *(uint *)(_DAT_013087d4 + 0x1c68)))) >>
                                (DAT_00b667a0 & 0x1f));
            }
          }
          pfVar4 = pfVar4 + 3;
          local_24 = local_24 + 1;
          local_1c = local_1c + 0xc;
          local_18 = local_18 + 1;
          local_20 = local_20 + (1 << (DAT_01308800 & 0x1f));
          local_14 = local_14 + 1;
          iVar3 = local_18 - local_28;
          bVar8 = SBORROW4(local_18,local_28);
        }
      }
      local_2c = local_2c + 4;
      local_38 = local_38 + 0xf00;
      local_3c = local_3c + 0x500;
      local_40 = local_40 + 0x140;
      local_34 = local_34 + 0xf00;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(param_1 + 0x154));
  }
  _DAT_013083cc = 1;
  return;
}
