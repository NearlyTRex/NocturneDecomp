// Name: FUN_00563db8
// Address: 00563db8
// Address Range: [[00563db8, 0056445e]]
// Convention: unknown
// Signature: void FUN_00563db8(undefined4 *param_1,uint param_2,uint param_3,code *param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005640b2) */

void FUN_00563db8(uint *param_1,uint param_2,uint param_3,code *param_4)

{
  byte uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint auStack_16c [32];
  uint auStack_ec [32];
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint *local_5c;
  int local_58;
  uint *puStack_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  int local_40;
  code *local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  
  bVar10 = 0;
  local_48 = param_1;
  local_3c = param_4;
  if ((((uint)param_1 | param_3) & 3) == 0) {
    local_38 = (uint)(4 < param_3);
  }
  else {
    local_38 = 2;
  }
  local_60 = param_3 * 2;
  local_58 = 0;
  local_64 = param_3 * 3;
LAB_00563e2d:
  do {
    if (1 < param_2) {
      if (0xf < param_2) {
        puVar9 = (uint *)((int)local_48 + (param_2 >> 1) * param_3);
        if (0x1d < param_2) {
          local_5c = local_48;
          puVar7 = (uint *)((int)local_48 + (param_2 - 1) * param_3);
          if (0x2a < param_2) {
            iVar3 = (param_2 >> 3) * param_3;
            local_68 = iVar3 * 2;
            local_5c = (uint *)
                       FUN_00563d20(local_48,(uint *)((int)local_48 + iVar3),
                                    (byte *)((int)local_48 + local_68),local_3c);
            puVar9 = (uint *)
                     FUN_00563d20((int)puVar9 - iVar3,puVar9,(uint *)((int)puVar9 + iVar3),
                                  local_3c);
            puVar7 = (uint *)
                     FUN_00563d20((int)puVar7 - local_68,(int)puVar7 - iVar3,puVar7,local_3c);
          }
          puVar9 = (uint *)FUN_00563d20(local_5c,puVar9,puVar7,local_3c);
        }
        if (local_38 == 0) {
          local_44 = &local_6c;
          local_6c = *puVar9;
        }
        else {
          local_44 = local_48;
          FUN_00563d90();
        }
        local_28 = local_48;
        local_34 = local_48;
        local_30 = (uint *)((int)local_48 + (param_2 - 1) * param_3);
        local_2c = local_30;
        local_24 = param_2;
LAB_0056411f:
        for (; local_24 != 0; local_24 = local_24 - 1) {
          iVar3 = (*local_3c)(local_28,local_44);
          if (0 < iVar3) break;
          if (iVar3 == 0) {
            if (local_38 == 0) {
              uVar2 = *local_34;
              *local_34 = *local_28;
              *local_28 = uVar2;
            }
            else {
              FUN_00563d90();
            }
            local_34 = (uint *)((int)local_34 + param_3);
          }
          local_28 = (uint *)((int)local_28 + param_3);
        }
        for (; local_24 != 0; local_24 = local_24 - 1) {
          iVar3 = (*local_3c)(local_2c,local_44);
          if (iVar3 < 0) break;
          if (iVar3 == 0) {
            if (local_38 == 0) {
              uVar2 = *local_2c;
              *local_2c = *local_30;
              *local_30 = uVar2;
            }
            else {
              FUN_00563d90();
            }
            local_30 = (uint *)((int)local_30 - param_3);
          }
          local_2c = (uint *)((int)local_2c - param_3);
        }
        if (local_24 != 0) {
          if (local_38 == 0) {
            uVar2 = *local_28;
            *local_28 = *local_2c;
            *local_2c = uVar2;
          }
          else {
            FUN_00563d90();
          }
          uVar6 = local_24;
          local_28 = (uint *)((int)local_28 + param_3);
          local_24 = local_24 - 1;
          if (local_24 == 0) goto LAB_005642ee;
          local_24 = uVar6 - 2;
          local_2c = (uint *)((int)local_2c - param_3);
          goto LAB_0056411f;
        }
LAB_005642ee:
        iVar3 = local_58;
        puVar9 = (uint *)((int)local_48 + param_2 * param_3);
        puStack_54 = puVar9;
        uVar6 = (int)local_34 - (int)local_48;
        if ((int)local_28 - (int)local_34 <= (int)local_34 - (int)local_48) {
          uVar6 = (int)local_28 - (int)local_34;
        }
        if (uVar6 != 0) {
          puVar7 = (uint *)((int)local_28 - uVar6);
          puVar8 = local_48;
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            LOCK();
            uVar2 = *puVar8;
            *puVar8 = *puVar7;
            UNLOCK();
            *puVar7 = uVar2;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          }
          uVar4 = (uint)((byte)uVar6 & 3);
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar8;
            *(byte *)puVar8 = *(byte *)puVar7;
            UNLOCK();
            *(byte *)puVar7 = uVar1;
            puVar8 = (uint *)((int)puVar8 + 1);
            uVar4 = uVar4 - 1;
            puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
            uVar6 = uVar4;
          }
        }
        puVar5 = (byte *)((int)puVar9 + (-param_3 - (int)local_30));
        if ((byte *)((int)local_30 - (int)local_2c) < puVar5) {
          puVar5 = (byte *)((int)local_30 - (int)local_2c);
        }
        if (puVar5 != (byte *)0x0) {
          puVar7 = (uint *)((int)puVar9 - (int)puVar5);
          puVar8 = local_28;
          for (uVar6 = (uint)puVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            LOCK();
            uVar2 = *puVar8;
            *puVar8 = *puVar7;
            UNLOCK();
            *puVar7 = uVar2;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          }
          uVar6 = (uint)((byte)puVar5 & 3);
          uVar4 = (uint)puVar5 & 3;
          while (uVar4 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar8;
            *(byte *)puVar8 = *(byte *)puVar7;
            UNLOCK();
            *(byte *)puVar7 = uVar1;
            puVar8 = (uint *)((int)puVar8 + 1);
            uVar6 = uVar6 - 1;
            puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
            uVar4 = uVar6;
          }
        }
        uVar6 = (int)local_28 - (int)local_34;
        param_2 = (int)local_30 - (int)local_2c;
        if (param_2 < uVar6) {
          if (uVar6 <= param_3) goto LAB_00563f6c;
          auStack_16c[local_58] = local_48;
          auStack_ec[iVar3] = uVar6 / param_3;
          local_48 = (uint *)((int)puVar9 - param_2);
        }
        else {
          auStack_ec[local_58] = param_2 / param_3;
          auStack_16c[iVar3] = (uint *)((int)puVar9 - param_2);
          param_2 = uVar6;
        }
        param_2 = param_2 / param_3;
        local_58 = local_58 + 1;
        goto LAB_00563e2d;
      }
      local_40 = local_64;
      if (0 < local_64) {
        local_50 = (uint *)((int)local_48 + param_2 * param_3);
        do {
          local_4c = (uint *)((int)local_48 + local_40);
          if ((uint *)((int)local_48 + local_40) < local_50) {
            do {
              local_20 = local_4c;
              if (local_48 < local_4c) {
                do {
                  puVar9 = (uint *)((int)local_20 - local_40);
                  iVar3 = (*local_3c)(puVar9,local_20);
                  if (iVar3 < 1) break;
                  if (local_38 == 0) {
                    uVar2 = *local_20;
                    *local_20 = *puVar9;
                    *puVar9 = uVar2;
                  }
                  else {
                    FUN_00563d90();
                  }
                  local_20 = (uint *)((int)local_20 - local_40);
                } while (local_48 < local_20);
              }
              local_4c = (uint *)((int)local_4c + local_40);
            } while (local_4c < local_50);
          }
          local_40 = local_40 - local_60;
        } while (0 < local_40);
      }
    }
LAB_00563f6c:
    if (local_58 == 0) {
      return;
    }
    local_58 = local_58 + -1;
    param_2 = auStack_ec[local_58];
    local_48 = (uint *)auStack_16c[local_58];
  } while( true );
}
