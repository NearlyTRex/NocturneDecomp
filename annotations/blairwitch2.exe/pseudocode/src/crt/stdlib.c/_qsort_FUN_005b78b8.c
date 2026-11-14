// Name: crt_stdlib.c__qsort_FUN_005b78b8
// Address: 005b78b8
// Address Range: [[005b78b8, 005b7f5e]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c__qsort_FUN_005b78b8(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b7bb2) */

void __cdecl _qsort(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

{
  byte uVar1;
  uint uVar2;
  SIZE_T SVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  uint auStack_16c [32];
  SIZE_T aSStack_ec [32];
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
  QSORT_COMPARATOR local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  SIZE_T local_24;
  uint *local_20;
  
  bVar11 = 0;
  local_48 = base;
  local_3c = compar;
  if ((((uint)base | size) & 3) == 0) {
    local_38 = (uint)(4 < size);
  }
  else {
    local_38 = 2;
  }
  local_60 = size * 2;
  local_58 = 0;
  local_64 = size * 3;
LAB_005b792d:
  do {
    if (1 < num) {
      if (0xf < num) {
        puVar10 = (uint *)((int)local_48 + (num >> 1) * size);
        if (0x1d < num) {
          local_5c = local_48;
          puVar8 = (uint *)((int)local_48 + (num - 1) * size);
          if (0x2a < num) {
            iVar4 = (num >> 3) * size;
            local_68 = iVar4 * 2;
            local_5c = (uint *)
                       FUN_005b7820
                                 (local_48,(uint *)((int)local_48 + iVar4),
                                  (byte *)((int)local_48 + local_68),local_3c);
            puVar10 = (uint *)
                      FUN_005b7820
                                ((int)puVar10 - iVar4,puVar10,(uint *)((int)puVar10 + iVar4),
                                 local_3c);
            puVar8 = (uint *)
                     FUN_005b7820
                               ((int)puVar8 - local_68,(int)puVar8 - iVar4,puVar8,local_3c);
          }
          puVar10 = (uint *)FUN_005b7820(local_5c,puVar10,puVar8,local_3c);
        }
        if (local_38 == 0) {
          local_44 = &local_6c;
          local_6c = *puVar10;
        }
        else {
          local_44 = local_48;
          FUN_005b7890();
        }
        local_28 = local_48;
        local_34 = local_48;
        local_30 = (uint *)((int)local_48 + (num - 1) * size);
        local_2c = local_30;
        local_24 = num;
LAB_005b7c1f:
        for (; local_24 != 0; local_24 = local_24 - 1) {
          iVar4 = (*local_3c)(local_28,local_44);
          if (0 < iVar4) break;
          if (iVar4 == 0) {
            if (local_38 == 0) {
              uVar2 = *local_34;
              *local_34 = *local_28;
              *local_28 = uVar2;
            }
            else {
              FUN_005b7890();
            }
            local_34 = (uint *)((int)local_34 + size);
          }
          local_28 = (uint *)((int)local_28 + size);
        }
        for (; local_24 != 0; local_24 = local_24 - 1) {
          iVar4 = (*local_3c)(local_2c,local_44);
          if (iVar4 < 0) break;
          if (iVar4 == 0) {
            if (local_38 == 0) {
              uVar2 = *local_2c;
              *local_2c = *local_30;
              *local_30 = uVar2;
            }
            else {
              FUN_005b7890();
            }
            local_30 = (uint *)((int)local_30 - size);
          }
          local_2c = (uint *)((int)local_2c - size);
        }
        if (local_24 != 0) {
          if (local_38 == 0) {
            uVar2 = *local_28;
            *local_28 = *local_2c;
            *local_2c = uVar2;
          }
          else {
            FUN_005b7890();
          }
          SVar3 = local_24;
          local_28 = (uint *)((int)local_28 + size);
          local_24 = local_24 - 1;
          if (local_24 == 0) goto LAB_005b7dee;
          local_24 = SVar3 - 2;
          local_2c = (uint *)((int)local_2c - size);
          goto LAB_005b7c1f;
        }
LAB_005b7dee:
        iVar4 = local_58;
        puVar10 = (uint *)((int)local_48 + num * size);
        puStack_54 = puVar10;
        uVar7 = (int)local_34 - (int)local_48;
        if ((int)local_28 - (int)local_34 <= (int)local_34 - (int)local_48) {
          uVar7 = (int)local_28 - (int)local_34;
        }
        if (uVar7 != 0) {
          puVar8 = (uint *)((int)local_28 - uVar7);
          puVar9 = local_48;
          for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            LOCK();
            uVar2 = *puVar9;
            *puVar9 = *puVar8;
            UNLOCK();
            *puVar8 = uVar2;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          }
          uVar5 = (uint)((byte)uVar7 & 3);
          uVar7 = uVar7 & 3;
          while (uVar7 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar9;
            *(byte *)puVar9 = *(byte *)puVar8;
            UNLOCK();
            *(byte *)puVar8 = uVar1;
            puVar9 = (uint *)((int)puVar9 + 1);
            uVar5 = uVar5 - 1;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
            uVar7 = uVar5;
          }
        }
        puVar6 = (byte *)((int)puVar10 + (-size - (int)local_30));
        if ((byte *)((int)local_30 - (int)local_2c) < puVar6) {
          puVar6 = (byte *)((int)local_30 - (int)local_2c);
        }
        if (puVar6 != (byte *)0x0) {
          puVar8 = (uint *)((int)puVar10 - (int)puVar6);
          puVar9 = local_28;
          for (uVar7 = (uint)puVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            LOCK();
            uVar2 = *puVar9;
            *puVar9 = *puVar8;
            UNLOCK();
            *puVar8 = uVar2;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          }
          uVar7 = (uint)((byte)puVar6 & 3);
          uVar5 = (uint)puVar6 & 3;
          while (uVar5 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar9;
            *(byte *)puVar9 = *(byte *)puVar8;
            UNLOCK();
            *(byte *)puVar8 = uVar1;
            puVar9 = (uint *)((int)puVar9 + 1);
            uVar7 = uVar7 - 1;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
            uVar5 = uVar7;
          }
        }
        uVar5 = (int)local_28 - (int)local_34;
        uVar7 = (int)local_30 - (int)local_2c;
        if (uVar7 < uVar5) {
          if (uVar5 <= size) goto LAB_005b7a6c;
          auStack_16c[local_58] = local_48;
          aSStack_ec[iVar4] = uVar5 / size;
          local_48 = (uint *)((int)puVar10 - uVar7);
        }
        else {
          aSStack_ec[local_58] = uVar7 / size;
          auStack_16c[iVar4] = (uint *)((int)puVar10 - uVar7);
          uVar7 = uVar5;
        }
        num = uVar7 / size;
        local_58 = local_58 + 1;
        goto LAB_005b792d;
      }
      local_40 = local_64;
      if (0 < local_64) {
        local_50 = (uint *)((int)local_48 + num * size);
        do {
          local_4c = (uint *)((int)local_48 + local_40);
          if ((uint *)((int)local_48 + local_40) < local_50) {
            do {
              local_20 = local_4c;
              if (local_48 < local_4c) {
                do {
                  puVar10 = (uint *)((int)local_20 - local_40);
                  iVar4 = (*local_3c)(puVar10,local_20);
                  if (iVar4 < 1) break;
                  if (local_38 == 0) {
                    uVar2 = *local_20;
                    *local_20 = *puVar10;
                    *puVar10 = uVar2;
                  }
                  else {
                    FUN_005b7890();
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
LAB_005b7a6c:
    if (local_58 == 0) {
      return;
    }
    local_58 = local_58 + -1;
    num = aSStack_ec[local_58];
    local_48 = (uint *)auStack_16c[local_58];
  } while( true );
}
