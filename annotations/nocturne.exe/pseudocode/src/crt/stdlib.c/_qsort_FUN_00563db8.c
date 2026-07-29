// Name: crt_stdlib.c__qsort_FUN_00563db8
// Address: 00563db8
// Address Range: [[00563db8, 0056445e]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c__qsort_FUN_00563db8(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005640b2) */

void __cdecl _qsort(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

{
  byte uVar1;
  uint uVar2;
  SIZE_T SVar3;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint uVar4;
  byte *puVar5;
  uint uVar6;
  uint *puVar7;
  void *ptr2;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
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
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  SIZE_T local_24;
  uint *local_20;
  
  bVar10 = 0;
  local_48 = base;
  local_3c = compar;
  if ((((uint)base | size) & 3) == 0) {
    local_38 = (uint *)(uint)(4 < size);
  }
  else {
    local_38 = (uint *)0x2;
  }
  local_60 = size * 2;
  puVar7 = (uint *)0x0;
  local_58 = 0;
  local_64 = size * 3;
LAB_00563e2d:
  do {
    if (1 < num) {
      if (0xf < num) {
        puVar9 = (uint *)((int)local_48 + (num >> 1) * size);
        if (0x1d < num) {
          local_5c = local_48;
          puVar8 = (uint *)((int)local_48 + (num - 1) * size);
          if (0x2a < num) {
            iVar11 = (num >> 3) * size;
            local_68 = iVar11 * 2;
            local_5c = median_of_3
                                 (local_48,(uint *)((int)local_48 + iVar11),
                                  (byte *)((int)local_48 + local_68),local_3c);
            puVar9 = median_of_3
                               ((void *)((int)puVar9 - iVar11),puVar9,
                                (uint *)((int)puVar9 + iVar11),local_3c);
            puVar8 = median_of_3
                               ((void *)((int)puVar8 - local_68),(void *)((int)puVar8 - iVar11),
                                puVar8,local_3c);
          }
          puVar7 = local_5c;
          puVar9 = median_of_3(local_5c,puVar9,puVar8,local_3c);
        }
        puVar8 = local_38;
        if (local_38 == (uint *)0x0) {
          local_44 = &local_6c;
          local_6c = *puVar9;
        }
        else {
          local_44 = local_48;
          memory_swap(local_48,puVar7,(SIZE_T)local_38);
        }
        local_28 = local_48;
        local_34 = local_48;
        local_30 = (uint *)((int)local_48 + (num - 1) * size);
        _iVar11 = CONCAT44(local_30,num);
        local_2c = local_30;
        local_24 = num;
LAB_0056411f:
        for (; local_24 != 0; local_24 = local_24 - 1) {
          _iVar11 = (*local_3c)(local_28,local_44);
          puVar7 = (uint *)((ulonglong)_iVar11 >> 0x20);
          if (0 < (int)_iVar11) break;
          if ((int)_iVar11 == 0) {
            if (local_38 == (uint *)0x0) {
              uVar2 = *local_34;
              *local_34 = *local_28;
              *local_28 = uVar2;
              puVar9 = local_28;
              puVar7 = local_34;
            }
            else {
              memory_swap((void *)0x0,puVar7,(SIZE_T)puVar8);
              puVar9 = extraout_EAX;
            }
            _iVar11 = CONCAT44(puVar7,puVar9);
            local_34 = (uint *)((int)local_34 + size);
          }
          local_28 = (uint *)((int)local_28 + size);
        }
        for (; puVar7 = local_2c, local_24 != 0; local_24 = local_24 - 1) {
          _iVar11 = (*local_3c)(local_2c,local_44);
          ptr2 = (void *)((ulonglong)_iVar11 >> 0x20);
          puVar8 = puVar7;
          if ((int)_iVar11 < 0) break;
          if ((int)_iVar11 == 0) {
            if (local_38 == (uint *)0x0) {
              ptr2 = (void *)*local_2c;
              *local_2c = *local_30;
              *local_30 = ptr2;
              puVar7 = local_30;
            }
            else {
              memory_swap((void *)0x0,ptr2,(SIZE_T)puVar7);
              puVar7 = extraout_EAX_00;
            }
            _iVar11 = CONCAT44(ptr2,puVar7);
            local_30 = (uint *)((int)local_30 - size);
          }
          puVar8 = (uint *)((int)local_2c - size);
          local_2c = puVar8;
        }
        puVar7 = (uint *)((ulonglong)_iVar11 >> 0x20);
        if (local_24 != 0) {
          if (local_38 == (uint *)0x0) {
            uVar2 = *local_28;
            *local_28 = *local_2c;
            *local_2c = uVar2;
            puVar7 = local_2c;
          }
          else {
            memory_swap((void *)_iVar11,puVar7,(SIZE_T)puVar8);
          }
          SVar3 = local_24;
          local_28 = (uint *)((int)local_28 + size);
          local_24 = local_24 - 1;
          _iVar11 = CONCAT44(puVar7,local_24);
          if (local_24 == 0) goto LAB_005642ee;
          puVar8 = (uint *)((int)local_2c - size);
          local_24 = SVar3 - 2;
          local_2c = puVar8;
          goto LAB_0056411f;
        }
LAB_005642ee:
        iVar11 = local_58;
        puVar7 = (uint *)((int)local_48 + num * size);
        puStack_54 = puVar7;
        uVar6 = (int)local_34 - (int)local_48;
        if ((int)local_28 - (int)local_34 <= (int)local_34 - (int)local_48) {
          uVar6 = (int)local_28 - (int)local_34;
        }
        if (uVar6 != 0) {
          puVar9 = (uint *)((int)local_28 - uVar6);
          puVar8 = local_48;
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            LOCK();
            uVar2 = *puVar8;
            *puVar8 = *puVar9;
            UNLOCK();
            *puVar9 = uVar2;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          uVar4 = (uint)((byte)uVar6 & 3);
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar8;
            *(byte *)puVar8 = *(byte *)puVar9;
            UNLOCK();
            *(byte *)puVar9 = uVar1;
            puVar8 = (uint *)((int)puVar8 + 1);
            uVar4 = uVar4 - 1;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
            uVar6 = uVar4;
          }
        }
        puVar5 = (byte *)((int)puVar7 + (-size - (int)local_30));
        if ((byte *)((int)local_30 - (int)local_2c) < puVar5) {
          puVar5 = (byte *)((int)local_30 - (int)local_2c);
        }
        if (puVar5 != (byte *)0x0) {
          puVar9 = (uint *)((int)puVar7 - (int)puVar5);
          puVar8 = local_28;
          for (uVar6 = (uint)puVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            LOCK();
            uVar2 = *puVar8;
            *puVar8 = *puVar9;
            UNLOCK();
            *puVar9 = uVar2;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          uVar6 = (uint)((byte)puVar5 & 3);
          uVar4 = (uint)puVar5 & 3;
          while (uVar4 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar8;
            *(byte *)puVar8 = *(byte *)puVar9;
            UNLOCK();
            *(byte *)puVar9 = uVar1;
            puVar8 = (uint *)((int)puVar8 + 1);
            uVar6 = uVar6 - 1;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
            uVar4 = uVar6;
          }
        }
        uVar4 = (int)local_28 - (int)local_34;
        uVar6 = (int)local_30 - (int)local_2c;
        if (uVar6 < uVar4) {
          if (uVar4 <= size) goto LAB_00563f6c;
          auStack_16c[local_58] = local_48;
          aSStack_ec[iVar11] = uVar4 / size;
          local_48 = (uint *)((int)puVar7 - uVar6);
        }
        else {
          aSStack_ec[local_58] = uVar6 / size;
          auStack_16c[iVar11] = (uint *)((int)puVar7 - uVar6);
          uVar6 = uVar4;
        }
        puVar7 = (uint *)(uVar6 % size);
        num = uVar6 / size;
        local_58 = local_58 + 1;
        goto LAB_00563e2d;
      }
      local_40 = local_64;
      if (0 < local_64) {
        local_50 = (uint *)((int)local_48 + num * size);
        do {
          local_4c = (uint *)((int)local_48 + local_40);
          puVar7 = local_50;
          if ((uint *)((int)local_48 + local_40) < local_50) {
            do {
              local_20 = local_4c;
              if (local_48 < local_4c) {
                do {
                  puVar9 = (uint *)((int)local_20 - local_40);
                  _iVar11 = (*local_3c)(puVar9,local_20);
                  if ((int)(void *)_iVar11 < 1) break;
                  if (local_38 == (uint *)0x0) {
                    uVar2 = *local_20;
                    *local_20 = *puVar9;
                    *puVar9 = uVar2;
                  }
                  else {
                    memory_swap
                              ((void *)_iVar11,(void *)((ulonglong)_iVar11 >> 0x20),(SIZE_T)puVar7);
                  }
                  local_20 = (uint *)((int)local_20 - local_40);
                  puVar7 = local_48;
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
    puVar7 = (uint *)auStack_16c[local_58];
    num = aSStack_ec[local_58];
    local_48 = puVar7;
  } while( true );
}
