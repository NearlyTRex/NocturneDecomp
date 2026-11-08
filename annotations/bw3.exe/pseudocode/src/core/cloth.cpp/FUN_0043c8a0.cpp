// Name: FUN_0043c8a0
// Address: 0043c8a0
// Address Range: [[0043c8a0, 0043caf9]]
// Convention: unknown
// Signature: void FUN_0043c8a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c8a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1040 [1017];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar6 = 0;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_3c = param_1 + 0x398;
    local_2c = param_1 + 0x398;
    local_38 = param_1;
    do {
      iVar1 = local_3c;
      *(uint *)(local_38 + 0x3c8) = 0;
      *(uint *)(local_38 + 0x40c) = 0;
      local_34 = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        local_30 = 0;
        local_28 = (float *)(local_2c + local_24 * 0x11c);
        do {
          local_18 = local_30 + *(int *)(param_1 + 0x114);
          iVar2 = 0;
          iVar5 = local_18;
          if (0 < *(int *)(local_18 + 4)) {
            do {
              if (local_24 == *(int *)(iVar5 + 0x18)) break;
              iVar2 = iVar2 + 1;
              iVar5 = iVar5 + 0xc;
            } while (iVar2 < *(int *)(local_18 + 4));
          }
          if ((iVar2 != *(int *)(local_18 + 4)) && (local_1c = 0, 0 < *(int *)(local_18 + 4))) {
            local_20 = local_18;
            do {
              iVar5 = *(int *)(((local_1c + 1) % *(int *)(local_18 + 4)) * 0xc + local_18 + 0x18);
              iVar2 = iVar5;
              if ((*(int *)(local_20 + 0x18) == local_24) ||
                 (iVar2 = *(int *)(local_20 + 0x18), iVar5 == local_24)) {
                iVar3 = 0;
                iVar5 = iVar1;
                if (0 < *(int *)(iVar1 + 0x30)) {
                  do {
                    if (iVar2 == *(int *)(iVar5 + 0x34)) break;
                    iVar3 = iVar3 + 1;
                    iVar5 = iVar5 + 4;
                  } while (iVar3 < *(int *)(iVar1 + 0x30));
                }
                if ((iVar3 == *(int *)(iVar1 + 0x30)) &&
                   (*(float *)(iVar1 + 0xc4) <= *(float *)(iVar2 * 0x11c + 0x45c + param_1))) {
                  *(int *)(iVar1 + 0x34 + *(int *)(iVar1 + 0x30) * 4) = iVar2;
                  pfVar4 = (float *)(local_2c + iVar2 * 0x11c);
                  local_4c = *local_28 - *pfVar4;
                  local_48 = local_28[1] - pfVar4[1];
                  local_44 = local_28[2] - pfVar4[2];
                  local_58 = *local_28 - *pfVar4;
                  *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8) =
                       *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8);
                  *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                       *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
                  local_40 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
                  *(float *)(iVar1 + 0x78 + *(int *)(iVar1 + 0x30) * 4) = local_40;
                  iVar5 = *(int *)(iVar1 + 0x30) + 1;
                  *(int *)(iVar1 + 0x30) = iVar5;
                  if (0xf < iVar5) {
                    _DAT_01d71de0 = "..\\core\\cloth.cpp";
                    _DAT_01d71de4 = 0x1c3;
                    FUN_004e4330("Too many connecting verticies");
                  }
                }
              }
              local_1c = local_1c + 1;
              local_20 = local_20 + 0xc;
            } while (local_1c < *(int *)(local_18 + 4));
          }
          local_34 = local_34 + 1;
          local_30 = local_30 + 0x48;
        } while (local_34 < *(int *)(param_1 + 0x110));
      }
      local_24 = local_24 + 1;
      local_3c = local_3c + 0x11c;
      local_38 = local_38 + 0x11c;
    } while (local_24 < *(int *)(param_1 + 0x104));
  }
  return;
}
