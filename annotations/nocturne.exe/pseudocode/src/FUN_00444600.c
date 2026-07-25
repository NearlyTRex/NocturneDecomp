// Name: FUN_00444600
// Address: 00444600
// Address Range: [[00444600, 00444802]]
// Convention: unknown
// Signature: void FUN_00444600(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444600(int param_1,int param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  byte bVar3;
  int aiStackY_1028 [1016];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  char *local_18;
  
  bVar3 = 0;
  local_24 = param_1 * 0xf00 + 0x8d9278 + param_2 * 0xc;
  local_18 = (char *)(param_2 + param_1 * 0x140 + 0xa9d078);
  local_1c = (uint *)(param_1 * 0x500 + 0x146ba10 + param_2 * 4);
  local_20 = (uint *)(*(int *)(&DAT_01bd4260 + (param_1 << (DAT_012b0660 & 0x1f)) * 4) +
                     (param_2 << (DAT_012b0660 & 0x1f)) * 4);
  pfVar2 = (float *)(param_2 * 0xc + param_1 * 0xf00 + 0x9bb178);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*local_20 < *local_1c) &&
       (0.0 <= pfVar2[2] * _DAT_012b0658 + *pfVar2 * _DAT_012b0640 + pfVar2[1] * _DAT_012b064c)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                (_DAT_012b0634,local_24);
      local_40 = local_34;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((0 < local_38) &&
         ((uVar1 = (uint)*(ushort *)
                          (*(int *)(_DAT_012b0634 + 0x2f94) +
                          ((local_40 >> 0x10) +
                          (local_3c >> 0x10) * *(int *)(_DAT_012b0634 + 0x1cc0)) * 2),
          (int)uVar1 < _DAT_00b0e5fc && (local_38 < (int)(uVar1 + 0x80))))) {
        local_28 = *(uint *)(_DAT_012b0634 + 0x1c68) &
                   local_40 >> (*(byte *)(_DAT_012b0634 + 0x1cc8) & 0x1f);
        *local_18 = *local_18 +
                    (char)((int)((_DAT_00b0e5fc - uVar1) *
                                (uint)*(byte *)(((local_3c >>
                                                  (*(byte *)(_DAT_012b0634 + 0x1ccc) & 0x1f) &
                                                 *(uint *)(_DAT_012b0634 + 0x1c68)) <<
                                                (*(byte *)(_DAT_012b0634 + 0x1c60) & 0x1f)) +
                                                local_28 + *(int *)(_DAT_012b0634 + 0x1c54))) >>
                          (DAT_00b0e600 & 0x1f));
      }
    }
    pfVar2 = pfVar2 + 3;
    local_1c = local_1c + 1;
    local_24 = local_24 + 0xc;
    local_20 = local_20 + (1 << (DAT_012b0660 & 0x1f));
    local_18 = local_18 + 1;
  }
  return;
}
