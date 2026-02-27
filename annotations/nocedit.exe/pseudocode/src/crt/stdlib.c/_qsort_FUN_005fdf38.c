// Name: crt_stdlib.c__qsort_FUN_005fdf38
// Address: 005fdf38
// Address Range: [[005fdf38, 005fe5de]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdlib_c__qsort_FUN_005fdf38(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005fe232) */

void __cdecl _qsort(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar)

{
  byte uVar1;
  uint uVar2;
  SIZE_T SVar3;
  void *extraout_EAX;
  void *pvVar4;
  void *extraout_EAX_00;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint *puVar9;
  uint *puVar10;
  int *b;
  byte bVar11;
  int iVar12;
  int aiStack_16c [32];
  SIZE_T aSStack_ec [32];
  int local_6c;
  int local_68;
  SIZE_T local_64;
  int local_60;
  void *local_5c;
  int local_58;
  void *pvStack_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44;
  int local_40;
  QSORT_COMPARATOR local_3c;
  int local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  SIZE_T local_24;
  void *local_20;
  
  bVar11 = 0;
  local_48 = base;
  local_3c = compar;
  if ((((uint)base | size) & 3) == 0) {
    local_38 = (int)(4 < size);
  }
  else {
    local_38 = 2;
  }
  local_60 = size * 2;
  pvVar7 = (void *)0x0;
  local_58 = 0;
  local_64 = size * 3;
LAB_005fdfad:
  do {
    if (1 < num) {
      if (0xf < num) {
        b = (int *)((int)local_48 + (num >> 1) * size);
        if (0x1d < num) {
          local_5c = local_48;
          pvVar8 = (void *)((int)local_48 + (num - 1) * size);
          if (0x2a < num) {
            iVar12 = (num >> 3) * size;
            local_68 = iVar12 * 2;
            local_5c = median_of_3
                                 (local_48,(void *)((int)local_48 + iVar12),
                                  (void *)((int)local_48 + local_68),local_3c);
            b = median_of_3
                          ((void *)((int)b - iVar12),b,(int *)((int)b + iVar12),local_3c);
            pvVar8 = median_of_3
                               ((void *)((int)pvVar8 - local_68),(void *)((int)pvVar8 - iVar12),
                                pvVar8,local_3c);
          }
          pvVar7 = local_5c;
          b = median_of_3(local_5c,b,pvVar8,local_3c);
        }
        pvVar8 = (void *)local_38;
        if (local_38 == 0) {
          local_44 = &local_6c;
          local_6c = *b;
        }
        else {
          local_44 = local_48;
          memory_swap(local_48,pvVar7,local_38);
        }
        local_28 = local_48;
        local_34 = local_48;
        local_30 = (void *)((int)local_48 + (num - 1) * size);
        _iVar12 = CONCAT44(local_30,num);
        local_2c = local_30;
        local_24 = num;
LAB_005fe29f:
        for (; local_24 != 0; local_24 = local_24 - 1) {
          _iVar12 = (*local_3c)(local_28,local_44);
          pvVar7 = (void *)((ulonglong)_iVar12 >> 0x20);
          if (0 < (int)_iVar12) break;
          if ((int)_iVar12 == 0) {
            if (local_38 == 0) {
              uVar2 = *(uint *)local_34;
              *(uint *)local_34 = *(uint *)local_28;
              *(uint *)local_28 = uVar2;
              pvVar4 = local_28;
              pvVar7 = local_34;
            }
            else {
              memory_swap((void *)0x0,pvVar7,(SIZE_T)pvVar8);
              pvVar4 = extraout_EAX;
            }
            _iVar12 = CONCAT44(pvVar7,pvVar4);
            local_34 = (void *)((int)local_34 + size);
          }
          local_28 = (void *)((int)local_28 + size);
        }
        for (; pvVar7 = local_2c, local_24 != 0; local_24 = local_24 - 1) {
          _iVar12 = (*local_3c)(local_2c,local_44);
          pvVar4 = (void *)((ulonglong)_iVar12 >> 0x20);
          pvVar8 = pvVar7;
          if ((int)_iVar12 < 0) break;
          if ((int)_iVar12 == 0) {
            if (local_38 == 0) {
              pvVar4 = *(void **)local_2c;
              *(uint *)local_2c = *(uint *)local_30;
              *(void **)local_30 = pvVar4;
              pvVar7 = local_30;
            }
            else {
              memory_swap((void *)0x0,pvVar4,(SIZE_T)pvVar7);
              pvVar7 = extraout_EAX_00;
            }
            _iVar12 = CONCAT44(pvVar4,pvVar7);
            local_30 = (void *)((int)local_30 - size);
          }
          pvVar8 = (void *)((int)local_2c - size);
          local_2c = pvVar8;
        }
        pvVar7 = (void *)((ulonglong)_iVar12 >> 0x20);
        if (local_24 != 0) {
          if (local_38 == 0) {
            uVar2 = *(uint *)local_28;
            *(uint *)local_28 = *(uint *)local_2c;
            *(uint *)local_2c = uVar2;
            pvVar7 = local_2c;
          }
          else {
            memory_swap((void *)_iVar12,pvVar7,(SIZE_T)pvVar8);
          }
          SVar3 = local_24;
          local_28 = (void *)((int)local_28 + size);
          local_24 = local_24 - 1;
          _iVar12 = CONCAT44(pvVar7,local_24);
          if (local_24 == 0) goto LAB_005fe46e;
          pvVar8 = (void *)((int)local_2c - size);
          local_24 = SVar3 - 2;
          local_2c = pvVar8;
          goto LAB_005fe29f;
        }
LAB_005fe46e:
        iVar12 = local_58;
        pvVar7 = (void *)((int)local_48 + num * size);
        pvStack_54 = pvVar7;
        uVar6 = (int)local_34 - (int)local_48;
        if ((int)local_28 - (int)local_34 <= (int)local_34 - (int)local_48) {
          uVar6 = (int)local_28 - (int)local_34;
        }
        if (uVar6 != 0) {
          puVar10 = (uint *)((int)local_28 - uVar6);
          puVar9 = local_48;
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            LOCK();
            uVar2 = *puVar9;
            *puVar9 = *puVar10;
            UNLOCK();
            *puVar10 = uVar2;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          uVar5 = (uint)((byte)uVar6 & 3);
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar9;
            *(byte *)puVar9 = *(byte *)puVar10;
            UNLOCK();
            *(byte *)puVar10 = uVar1;
            puVar9 = (uint *)((int)puVar9 + 1);
            uVar5 = uVar5 - 1;
            puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            uVar6 = uVar5;
          }
        }
        uVar6 = (int)pvVar7 + (-size - (int)local_30);
        if ((uint)((int)local_30 - (int)local_2c) < uVar6) {
          uVar6 = (int)local_30 - (int)local_2c;
        }
        if (uVar6 != 0) {
          puVar10 = (uint *)((int)pvVar7 - uVar6);
          puVar9 = local_28;
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            LOCK();
            uVar2 = *puVar9;
            *puVar9 = *puVar10;
            UNLOCK();
            *puVar10 = uVar2;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          uVar5 = (uint)((byte)uVar6 & 3);
          uVar6 = uVar6 & 3;
          while (uVar6 != 0) {
            LOCK();
            uVar1 = *(byte *)puVar9;
            *(byte *)puVar9 = *(byte *)puVar10;
            UNLOCK();
            *(byte *)puVar10 = uVar1;
            puVar9 = (uint *)((int)puVar9 + 1);
            uVar5 = uVar5 - 1;
            puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            uVar6 = uVar5;
          }
        }
        uVar5 = (int)local_28 - (int)local_34;
        uVar6 = (int)local_30 - (int)local_2c;
        if (uVar6 < uVar5) {
          if (uVar5 <= size) goto LAB_005fe0ec;
          aiStack_16c[local_58] = (int)local_48;
          aSStack_ec[iVar12] = uVar5 / size;
          local_48 = (void *)((int)pvVar7 - uVar6);
        }
        else {
          aSStack_ec[local_58] = uVar6 / size;
          aiStack_16c[iVar12] = (int)((int)pvVar7 - uVar6);
          uVar6 = uVar5;
        }
        pvVar7 = (void *)(uVar6 % size);
        num = uVar6 / size;
        local_58 = local_58 + 1;
        goto LAB_005fdfad;
      }
      local_40 = local_64;
      if (0 < (int)local_64) {
        local_50 = (void *)((int)local_48 + num * size);
        do {
          local_4c = (void *)((int)local_48 + local_40);
          pvVar7 = local_50;
          if ((void *)((int)local_48 + local_40) < local_50) {
            do {
              local_20 = local_4c;
              if (local_48 < local_4c) {
                do {
                  puVar10 = (uint *)((int)local_20 - local_40);
                  _iVar12 = (*local_3c)(puVar10,local_20);
                  if ((int)(void *)_iVar12 < 1) break;
                  if (local_38 == 0) {
                    uVar2 = *(uint *)local_20;
                    *(uint *)local_20 = *puVar10;
                    *puVar10 = uVar2;
                  }
                  else {
                    memory_swap
                              ((void *)_iVar12,(void *)((ulonglong)_iVar12 >> 0x20),(SIZE_T)pvVar7);
                  }
                  local_20 = (void *)((int)local_20 - local_40);
                  pvVar7 = local_48;
                } while (local_48 < local_20);
              }
              local_4c = (void *)((int)local_4c + local_40);
            } while (local_4c < local_50);
          }
          local_40 = local_40 - local_60;
        } while (0 < local_40);
      }
    }
LAB_005fe0ec:
    if (local_58 == 0) {
      return;
    }
    local_58 = local_58 + -1;
    pvVar7 = (void *)aiStack_16c[local_58];
    num = aSStack_ec[local_58];
    local_48 = pvVar7;
  } while( true );
}
