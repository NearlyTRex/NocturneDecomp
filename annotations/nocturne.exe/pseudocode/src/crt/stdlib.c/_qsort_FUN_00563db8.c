// Name: crt_stdlib.c__qsort_FUN_00563db8
// Address: 00563db8
// Address Range: [[00563db8, 0056445e]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c__qsort_FUN_00563db8(undefined4 *param_1,uint param_2,uint param_3,QSORT_COMPARATOR param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005640b2) */

void __cdecl _qsort(uint *param_1,uint param_2,uint param_3,QSORT_COMPARATOR param_4)

{
  byte uVar1;
  uint uVar2;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint uVar3;
  byte *puVar4;
  uint uVar5;
  uint *puVar6;
  void *ptr2;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  int iVar10;
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
  QSORT_COMPARATOR local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  
  bVar9 = 0;
  local_48 = param_1;
  local_3c = param_4;
  if ((((uint)param_1 | param_3) & 3) == 0) {
    local_38 = (uint *)(uint)(4 < param_3);
  }
  else {
    local_38 = (uint *)0x2;
  }
  local_60 = param_3 * 2;
  puVar6 = (uint *)0x0;
  local_58 = 0;
  local_64 = param_3 * 3;
LAB_00563e2d:
  do {
    if (1 < param_2) {
      if (0xf < param_2) {
        puVar8 = (uint *)((int)local_48 + (param_2 >> 1) * param_3);
        if (0x1d < param_2) {
          local_5c = local_48;
          puVar7 = (uint *)((int)local_48 + (param_2 - 1) * param_3);
          if (0x2a < param_2) {
            iVar10 = (param_2 >> 3) * param_3;
            local_68 = iVar10 * 2;
            local_5c = median_of_3
                                 (local_48,(uint *)((int)local_48 + iVar10),
                                  (byte *)((int)local_48 + local_68),local_3c);
            puVar8 = median_of_3
                               ((void *)((int)puVar8 - iVar10),puVar8,
                                (uint *)((int)puVar8 + iVar10),local_3c);
            puVar7 = median_of_3
                               ((void *)((int)puVar7 - local_68),(void *)((int)puVar7 - iVar10),
                                puVar7,local_3c);
          }
          puVar6 = local_5c;
          puVar8 = median_of_3(local_5c,puVar8,puVar7,local_3c);
        }
        puVar7 = local_38;
        if (local_38 == (uint *)0x0) {
          local_44 = &local_6c;
          local_6c = *puVar8;
        }
        else {
          local_44 = local_48;
          memory_swap(local_48,puVar6,(SIZE_T)local_38);
        }
        local_28 = local_48;
        local_34 = local_48;
        local_30 = (uint *)((int)local_48 + (param_2 - 1) * param_3);
        _iVar10 = CONCAT44(local_30,param_2);
        local_2c = local_30;
        local_24 = param_2;
LAB_0056411f:
        for (; local_24 != 0; local_24 = local_24 - 1) {
          _iVar10 = (*local_3c)(local_28,local_44);
          puVar6 = (uint *)((ulonglong)_iVar10 >> 0x20);
          if (0 < (int)_iVar10) break;
          if ((int)_iVar10 == 0) {
            if (local_38 == (uint *)0x0) {
              uVar2 = *local_34;
              *local_34 = *local_28;
              *local_28 = uVar2;
              puVar8 = local_28;
              puVar6 = local_34;
            }
            else {
              memory_swap((void *)0x0,puVar6,(SIZE_T)puVar7);
              puVar8 = extraout_EAX;
            }
            _iVar10 = CONCAT44(puVar6,puVar8);
            local_34 = (uint *)((int)local_34 + param_3);
          }
          local_28 = (uint *)((int)local_28 + param_3);
        }
        for (; puVar6 = local_2c, local_24 != 0; local_24 = local_24 - 1) {
          _iVar10 = (*local_3c)(local_2c,local_44);
          ptr2 = (void *)((ulonglong)_iVar10 >> 0x20);
          puVar7 = puVar6;
          if ((int)_iVar10 < 0) break;
          if ((int)_iVar10 == 0) {
            if (local_38 == (uint *)0x0) {
              ptr2 = (void *)*local_2c;
              *local_2c = *local_30;
              *local_30 = ptr2;
              puVar6 = local_30;
            }
            else {
              memory_swap((void *)0x0,ptr2,(SIZE_T)puVar6);
              puVar6 = extraout_EAX_00;
            }
            _iVar10 = CONCAT44(ptr2,puVar6);
            local_30 = (uint *)((int)local_30 - param_3);
          }
          puVar7 = (uint *)((int)local_2c - param_3);
          local_2c = puVar7;
        }
        puVar6 = (uint *)((ulonglong)_iVar10 >> 0x20);
        if (local_24 != 0) {
          if (local_38 == (uint *)0x0) {
            uVar2 = *local_28;
            *local_28 = *local_2c;
            *local_2c = uVar2;
            puVar6 = local_2c;
          }
          else {
            memory_swap((void *)_iVar10,puVar6,(SIZE_T)puVar7);
          }
          uVar5 = local_24;
          local_28 = (uint *)((int)local_28 + param_3);
          local_24 = local_24 - 1;
          _iVar10 = CONCAT44(puVar6,local_24);
          if (local_24 == 0) goto LAB_005642ee;
          puVar7 = (uint *)((int)local_2c - param_3);
          local_24 = uVar5 - 2;
          local_2c = puVar7;
          goto LAB_0056411f;
        }
LAB_005642ee:
        iVar10 = local_58;
        puVar6 = (uint *)((int)local_48 + param_2 * param_3);
        puStack_54 = puVar6;
        uVar5 = (int)local_34 - (int)local_48;
        if ((int)local_28 - (int)local_34 <= (int)local_34 - (int)local_48) {
          uVar5 = (int)local_28 - (int)local_34;
        }
        if (uVar5 != 0) {
          puVar8 = (uint *)((int)local_28 - uVar5);
          puVar7 = local_48;
          for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            LOCK();
            uVar2 = *puVar7;
            *puVar7 = *puVar8;
            UNLOCK();
            *puVar8 = uVar2;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          uVar3 = (uint)((byte)uVar5 & 3);
          uVar5 = uVar5 & 3;
          while (uVar5 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar7;
            *(byte *)puVar7 = *(byte *)puVar8;
            UNLOCK();
            *(byte *)puVar8 = uVar1;
            puVar7 = (uint *)((int)puVar7 + 1);
            uVar3 = uVar3 - 1;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
            uVar5 = uVar3;
          }
        }
        puVar4 = (byte *)((int)puVar6 + (-param_3 - (int)local_30));
        if ((byte *)((int)local_30 - (int)local_2c) < puVar4) {
          puVar4 = (byte *)((int)local_30 - (int)local_2c);
        }
        if (puVar4 != (byte *)0x0) {
          puVar8 = (uint *)((int)puVar6 - (int)puVar4);
          puVar7 = local_28;
          for (uVar5 = (uint)puVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            LOCK();
            uVar2 = *puVar7;
            *puVar7 = *puVar8;
            UNLOCK();
            *puVar8 = uVar2;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          uVar5 = (uint)((byte)puVar4 & 3);
          uVar3 = (uint)puVar4 & 3;
          while (uVar3 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar7;
            *(byte *)puVar7 = *(byte *)puVar8;
            UNLOCK();
            *(byte *)puVar8 = uVar1;
            puVar7 = (uint *)((int)puVar7 + 1);
            uVar5 = uVar5 - 1;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
            uVar3 = uVar5;
          }
        }
        uVar5 = (int)local_28 - (int)local_34;
        param_2 = (int)local_30 - (int)local_2c;
        if (param_2 < uVar5) {
          if (uVar5 <= param_3) goto LAB_00563f6c;
          auStack_16c[local_58] = local_48;
          auStack_ec[iVar10] = uVar5 / param_3;
          local_48 = (uint *)((int)puVar6 - param_2);
        }
        else {
          auStack_ec[local_58] = param_2 / param_3;
          auStack_16c[iVar10] = (uint *)((int)puVar6 - param_2);
          param_2 = uVar5;
        }
        puVar6 = (uint *)(param_2 % param_3);
        param_2 = param_2 / param_3;
        local_58 = local_58 + 1;
        goto LAB_00563e2d;
      }
      local_40 = local_64;
      if (0 < local_64) {
        local_50 = (uint *)((int)local_48 + param_2 * param_3);
        do {
          local_4c = (uint *)((int)local_48 + local_40);
          puVar6 = local_50;
          if ((uint *)((int)local_48 + local_40) < local_50) {
            do {
              local_20 = local_4c;
              if (local_48 < local_4c) {
                do {
                  puVar8 = (uint *)((int)local_20 - local_40);
                  _iVar10 = (*local_3c)(puVar8,local_20);
                  if ((int)(void *)_iVar10 < 1) break;
                  if (local_38 == (uint *)0x0) {
                    uVar2 = *local_20;
                    *local_20 = *puVar8;
                    *puVar8 = uVar2;
                  }
                  else {
                    memory_swap
                              ((void *)_iVar10,(void *)((ulonglong)_iVar10 >> 0x20),(SIZE_T)puVar6);
                  }
                  local_20 = (uint *)((int)local_20 - local_40);
                  puVar6 = local_48;
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
    puVar6 = (uint *)auStack_16c[local_58];
    param_2 = auStack_ec[local_58];
    local_48 = puVar6;
  } while( true );
}
