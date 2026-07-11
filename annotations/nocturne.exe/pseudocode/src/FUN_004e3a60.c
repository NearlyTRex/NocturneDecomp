// Name: FUN_004e3a60
// Address: 004e3a60
// Address Range: [[004e3a60, 004e3d2c]]
// Convention: unknown
// Signature: void FUN_004e3a60(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004e3a60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_58;
  int local_54;
  int local_40;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  int *local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  float *local_18;
  
  iVar1 = *(int *)(param_4 + 0x10);
  iVar6 = *(int *)(param_4 + 0x18);
  local_58 = *(int *)(param_4 + 8);
  if (0 < iVar6) {
    local_54 = 0;
    do {
      local_40 = 0;
      do {
        local_1c = 0;
        if (0 < iVar1) {
          local_34 = (uint *)(local_54 + local_40 + param_3);
          local_24 = (uint *)(param_3 + local_40 + local_54);
          local_2c = (uint *)(local_40 + local_54 + param_1);
          local_30 = (uint *)(local_54 + local_40 + param_1);
          local_18 = (float *)(local_54 + local_40 + param_3);
          local_28 = (int *)(local_54 + param_2);
          local_20 = (int *)(local_54 + param_2);
          do {
            if (*local_28 == 0) {
              *local_34 = 0;
            }
            else {
              for (bVar2 = 0;
                  (uint)(1 << (bVar2 & 0x1f)) <
                  *(uint *)(*(int *)(param_2 + local_1c * 0x80 + local_54) * 0x10 + local_58);
                  bVar2 = bVar2 + 1) {
              }
              if ((*local_2c >> (bVar2 - 1 & 0x1f) & 1) == 1) {
                *local_24 = 0;
              }
              else {
                *local_24 = 0xbf800000;
              }
              iVar4 = 1 << (bVar2 - 1 & 0x1f);
              *local_18 = (float)(iVar4 - 1U & *local_30) / (float)iVar4 + *local_18;
              *local_18 = *local_18 +
                          (float)*(double *)
                                  (&DAT_005bb318 + *(int *)(*local_20 * 0x10 + local_58 + 0xc) * 8);
              *local_18 = *local_18 *
                          (float)*(double *)
                                  (&DAT_005bb290 + *(int *)(*local_20 * 0x10 + local_58 + 0xc) * 8);
            }
            local_28 = local_28 + 0x20;
            local_34 = local_34 + 0x60;
            local_24 = local_24 + 0x60;
            local_2c = local_2c + 0x60;
            local_20 = local_20 + 0x20;
            local_30 = local_30 + 0x60;
            local_18 = local_18 + 0x60;
            local_1c = local_1c + 1;
          } while (local_1c < iVar1);
        }
        local_40 = local_40 + 0x80;
      } while (local_40 != 0x180);
      local_54 = local_54 + 4;
      local_58 = local_58 + 0x100;
    } while (local_54 < iVar6 * 4);
  }
  if (iVar6 < 0x20) {
    iVar6 = iVar6 * 4;
    do {
      iVar4 = 0;
      do {
        iVar5 = 0;
        if (0 < iVar1) {
          puVar3 = (uint *)(iVar6 + iVar4 + param_3);
          do {
            iVar5 = iVar5 + 1;
            *puVar3 = 0;
            puVar3 = puVar3 + 0x60;
          } while (iVar5 < iVar1);
        }
        iVar4 = iVar4 + 0x80;
      } while (iVar4 != 0x180);
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}
