// Name: FUN_004357b0
// Address: 004357b0
// Address Range: [[004357b0, 004359d5]]
// Convention: unknown
// Signature: void FUN_004357b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004357b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iVar1 = param_1 + 0x398;
    local_28 = param_1;
    local_2c = iVar1;
    do {
      *(uint *)(local_28 + 0x3c8) = 0;
      *(uint *)(local_28 + 0x40c) = 0;
      local_24 = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        pfVar6 = (float *)(iVar1 + local_14 * 0x11c);
        local_20 = 0;
        do {
          iVar9 = *(int *)(param_1 + 0x114) + local_20;
          iVar2 = 0;
          iVar8 = iVar9;
          if (0 < *(int *)(iVar9 + 4)) {
            do {
              if (local_14 == *(int *)(iVar8 + 0x18)) break;
              iVar2 = iVar2 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar2 < *(int *)(iVar9 + 4));
          }
          if ((iVar2 != *(int *)(iVar9 + 4)) && (iVar2 = 0, iVar8 = iVar9, 0 < *(int *)(iVar9 + 4)))
          {
LAB_004358cb:
            do {
              iVar5 = *(int *)(iVar9 + ((iVar2 + 1) % *(int *)(iVar9 + 4)) * 0xc + 0x18);
              if ((*(int *)(iVar8 + 0x18) == local_14) ||
                 (bVar10 = iVar5 == local_14, iVar5 = *(int *)(iVar8 + 0x18), bVar10)) {
                iVar3 = 0;
                iVar7 = local_2c;
                if (0 < *(int *)(local_2c + 0x30)) {
                  do {
                    if (iVar5 == *(int *)(iVar7 + 0x34)) break;
                    iVar3 = iVar3 + 1;
                    iVar7 = iVar7 + 4;
                  } while (iVar3 < *(int *)(local_2c + 0x30));
                }
                if ((iVar3 == *(int *)(local_2c + 0x30)) &&
                   (*(float *)(local_2c + 0xc4) <= *(float *)(iVar5 * 0x11c + 0x45c + param_1))) {
                  *(int *)(local_2c + 0x34 + *(int *)(local_2c + 0x30) * 4) = iVar5;
                  pfVar4 = (float *)(iVar1 + iVar5 * 0x11c);
                  *(float *)(local_2c + 0x78 + *(int *)(local_2c + 0x30) * 4) =
                       SQRT((pfVar6[2] - pfVar4[2]) * (pfVar6[2] - pfVar4[2]) +
                            (*pfVar6 - *pfVar4) * (*pfVar6 - *pfVar4) +
                            (pfVar6[1] - pfVar4[1]) * (pfVar6[1] - pfVar4[1]));
                  iVar5 = *(int *)(local_2c + 0x30) + 1;
                  *(int *)(local_2c + 0x30) = iVar5;
                  if (0xf < iVar5) {
                    _DAT_01cc4800 = "..\\core\\cloth.cpp";
                    _DAT_01cc4804 = 0x1c3;
                    FUN_004c8440("Too many connecting verticies");
                    iVar2 = iVar2 + 1;
                    iVar8 = iVar8 + 0xc;
                    if (*(int *)(iVar9 + 4) <= iVar2) break;
                    goto LAB_004358cb;
                  }
                }
              }
              iVar2 = iVar2 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar2 < *(int *)(iVar9 + 4));
          }
          local_20 = local_20 + 0x48;
          local_24 = local_24 + 1;
        } while (local_24 < *(int *)(param_1 + 0x110));
      }
      local_2c = local_2c + 0x11c;
      local_28 = local_28 + 0x11c;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x104));
  }
  return;
}
