// Name: FUN_004269b0
// Address: 004269b0
// Address Range: [[004269b0, 00426e7a]]
// Convention: unknown
// Signature: void FUN_004269b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004269b0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  byte local_68 [12];
  byte local_5c [16];
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  
  iVar4 = param_1 + 0x150;
  local_18 = FUN_0051e0a0(iVar4);
  if (*(int *)(param_1 + 0xb640) == 0) {
    if (0 < *(int *)(param_1 + 0x2f08)) {
      iVar3 = FUN_0051e0a0(iVar4);
      local_38 = iVar3;
      iVar4 = FUN_0051e020(iVar4);
      iVar8 = 0;
      if (0 < *(int *)(iVar3 + 0x28558)) {
        iVar3 = 0;
        do {
          *(uint *)((int)&DAT_00765aa0 + iVar3) = 0;
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar8 < *(int *)(local_38 + 0x28558));
      }
      fVar1 = 0x40400000;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x2f08)) {
        fVar2 = (float)_DAT_00579fda;
        iVar8 = param_1;
        do {
          iVar3 = iVar3 + 1;
          (&DAT_00765aa0)[*(int *)(iVar8 + 0x2f18)] =
               (float)(&DAT_00765aa0)[*(int *)(iVar8 + 0x2f18)] +
               (*(float *)(iVar8 + 0x2f28) * fVar2) / fVar1;
          iVar8 = iVar8 + 0x18;
        } while (iVar3 < *(int *)(param_1 + 0x2f08));
      }
      iVar3 = 0;
      local_2c = 0;
      if (0 < *(int *)(local_38 + 0x28558)) {
        local_44 = param_1 + 0x150;
        iVar8 = 0;
        local_34 = iVar4;
        do {
          if ((float)_DAT_00579fda <= *(float *)((int)&DAT_00765aa0 + iVar8)) {
            iVar3 = iVar3 + 1;
          }
          if (*(int *)(local_34 + 0x288c) == -1) {
            iVar3 = iVar3 + 1;
          }
          iVar4 = FUN_0051e020(local_44);
          if (*(int *)(param_1 + 0x2290 + *(int *)(iVar8 + 0x26fc + iVar4) * 4) == 0) {
            iVar3 = iVar3 + 1;
          }
          iVar8 = iVar8 + 4;
          local_34 = local_34 + 4;
          local_2c = local_2c + 1;
        } while (local_2c < *(int *)(local_38 + 0x28558));
      }
      if (iVar3 == *(int *)(local_38 + 0x28558)) {
        *(uint *)(param_1 + 0xb644) = 0x3f800000;
        *(uint *)(param_1 + 0xb640) = 1;
      }
      local_4c = (float)*(int *)(param_1 + 0x2f08) * (float)_DAT_00579fe2 * (float)_DAT_00579fea +
                 (float)_DAT_00579ff2;
      iVar4 = FUN_005270d0(*(uint *)(param_1 + 0xb63c),local_4c);
      if (iVar4 == 0) {
        FUN_00526340();
        FUN_005260f0(local_4c);
        uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))
                          (param_1,"character-onfire-loop.wav");
        *(uint *)(param_1 + 0xb63c) = uVar5;
        FUN_005263c0();
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xb644) - param_2;
    *(float *)(param_1 + 0xb644) = fVar1;
    if (fVar1 < 0.0) {
      FUN_00527230(*(uint *)(param_1 + 0xb63c));
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                (param_1,"?character-onfire-fallapart.wav" + 1);
      FUN_00427b60(param_1,0,0xbf800000,0);
    }
  }
  local_28 = 0;
  if (0 < *(int *)(param_1 + 0x2f08)) {
    local_40 = param_1 + 0xfd0;
    local_48 = param_1 + 0x33c4;
    piVar9 = (int *)(param_1 + 0x2f14);
    local_24 = param_1;
    puVar10 = (uint *)(param_1 + 0x33e4);
    do {
      if (*(int *)(param_1 + 0x2290 + *piVar9 * 4) != 0) {
        *(uint *)(param_1 + 0xfc) = 1;
        uVar5 = FUN_0055a8b0(local_5c,piVar9 + 2,piVar9[1] * 0x30 + local_40);
        puVar6 = (uint *)FUN_0040a240(param_1,local_68,uVar5);
        *puVar10 = *puVar6;
        puVar10[1] = puVar6[1];
        puVar10[2] = puVar6[2];
        fVar1 = (float)_DAT_00579ffa;
        *(float *)(local_24 + 0x3514) = (float)piVar9[5] * fVar1;
        *(int *)(local_24 + 0x3518) = piVar9[5];
        iVar4 = local_28 * 0x29c + local_48;
        *(float *)(local_24 + 0x351c) = (float)piVar9[5] * fVar1;
        (**(code **)(*(int *)(iVar4 + 0x14c) + 4))(iVar4,param_2);
      }
      piVar9 = piVar9 + 6;
      puVar10 = puVar10 + 0xa7;
      local_24 = local_24 + 0x29c;
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(param_1 + 0x2f08));
  }
  if ((*(int *)(param_1 + 0x260c) == 0) && (0 < *(int *)(param_1 + 0x2f08))) {
    local_20 = (int *)(param_1 + 0x2f14);
    local_3c = param_2 * _DAT_0059b08c;
    local_30 = 0;
    do {
      local_1c = local_20;
      if ((*(int *)(param_1 + 0x2290 + *local_20 * 4) != 0) &&
         (fVar1 = local_3c * *(float *)(param_1 + 0x2f10) + (float)local_20[5],
         local_20[5] = (int)fVar1, 0x40400000 < fVar1)) {
        local_20[5] = (int)0x40400000;
        iVar3 = 0;
        iVar4 = local_18;
        if (0 < *(int *)(local_18 + 0x28558)) {
          do {
            if (*(uint *)(iVar4 + 0x2857c) == local_1c[1]) {
              uVar7 = *(uint *)(iVar4 + 0x2857c) ^ local_1c[1];
              iVar8 = param_1;
              if (0 < *(int *)(param_1 + 0x2f08)) {
                do {
                  if (iVar3 == *(int *)(iVar8 + 0x2f18)) break;
                  uVar7 = uVar7 + 1;
                  iVar8 = iVar8 + 0x18;
                } while ((int)uVar7 < *(int *)(param_1 + 0x2f08));
              }
              if (uVar7 == *(uint *)(param_1 + 0x2f08)) {
                FUN_004266a0(param_1,local_18,iVar3);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x24;
          } while (iVar3 < *(int *)(local_18 + 0x28558));
        }
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x2f08)) {
          iVar3 = param_1;
          do {
            if (*(int *)(local_1c[1] * 0x24 + local_18 + 0x2857c) == *(int *)(iVar3 + 0x2f18))
            break;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x18;
          } while (iVar4 < *(int *)(param_1 + 0x2f08));
        }
        if (iVar4 == *(int *)(param_1 + 0x2f08)) {
          FUN_004266a0(param_1,local_18,*(uint *)(local_1c[1] * 0x24 + local_18 + 0x2857c));
        }
      }
      local_20 = local_20 + 6;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(param_1 + 0x2f08));
  }
  return;
}
