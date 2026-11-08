// Name: FUN_00461f70
// Address: 00461f70
// Address Range: [[00461f70, 004625e1]]
// Convention: unknown
// Signature: void FUN_00461f70(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461f70(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *apuStack_70 [17];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  int *local_14;
  
  if (DAT_0070ca7c != 0) {
    apuStack_70[0] = &DAT_00622014 + param_1[2] * 0xc;
    iVar6 = FUN_0051c760(&DAT_00622014 + *param_1 * 0xc,&DAT_00622014 + param_1[1] * 0xc);
    if (iVar6 == 0) {
      return;
    }
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
    _DAT_01ba51c8 = 0;
    _DAT_01ba56d0 = 0;
    local_24 = 0;
    _DAT_01ba56cc = 0x4b0;
    if (0 < param_2) {
      local_28 = param_1;
      do {
        iVar6 = local_24 + 1;
        if (param_2 <= iVar6) {
          iVar6 = 0;
        }
        iVar5 = param_1[iVar6] * 0x30;
        iVar7 = *local_28 * 0x30;
        local_1c = &DAT_00622014 + param_1[iVar6] * 0xc;
        iVar6 = *(int *)(&DAT_00622028 + iVar5) >> 0x10;
        iVar2 = *(int *)(&DAT_00622028 + iVar7) >> 0x10;
        if (iVar2 != iVar6) {
          iVar3 = iVar2;
          puVar8 = &DAT_00622014 + *local_28 * 0xc;
          if (*(int *)(&DAT_00622028 + iVar5) < *(int *)(&DAT_00622028 + iVar7)) {
            iVar3 = iVar6;
            iVar6 = iVar2;
            puVar8 = local_1c;
            local_1c = &DAT_00622014 + *local_28 * 0xc;
          }
          iVar5 = _DAT_01ba51c8 * 0x50;
          *(int *)(&DAT_01ba51cc + iVar5) = iVar3;
          iVar2 = _DAT_01ba56cc;
          *(int *)(iVar5 + 0x1ba51d0) = iVar6;
          if (iVar3 < iVar2) {
            _DAT_01ba56cc = iVar3;
          }
          if (_DAT_01ba56d0 < iVar6) {
            _DAT_01ba56d0 = iVar6;
          }
          if ((uint)(local_1c[5] - puVar8[5]) < 0x10000) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)(0xffffffff / (ulonglong)(uint)(local_1c[5] - puVar8[5]));
          }
          uVar9 = (uint)(ushort)((ushort)puVar8[5] ^ 0xffff);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[4] - puVar8[4]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1ba51d8) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1ba51d4) =
               puVar8[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[6] - puVar8[6]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1ba51e8) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1ba51e4) =
               puVar8[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[7] - puVar8[7]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1ba51f0) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1ba51ec) =
               puVar8[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[8] - puVar8[8]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1ba51e0) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1ba51dc) =
               puVar8[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[0xb] - puVar8[0xb]);
          uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar5 + 0x1ba5200) = uVar4;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
          *(uint *)(iVar5 + 0x1ba51fc) =
               puVar8[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (DAT_0070ca74 == 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[3] - puVar8[3]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1ba51f8) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[3];
          }
          else {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[2] - puVar8[2]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1ba51f8) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar2 = puVar8[2];
          }
          *(uint *)(iVar5 + 0x1ba51f4) = iVar2 + local_2c;
          if (((uint)_DAT_01c38b54 & 0x200) != 0) {
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[9] - puVar8[9]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1ba5208) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1ba5204) = puVar8[9] + local_2c;
            lVar1 = (longlong)iVar6 * (longlong)(int)(local_1c[10] - puVar8[10]);
            uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar5 + 0x1ba5210) = uVar4;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
            *(uint *)(iVar5 + 0x1ba520c) =
                 puVar8[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          _DAT_01ba51c8 = _DAT_01ba51c8 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < param_2);
    }
    local_18 = (int *)&DAT_01ba51cc;
    iVar6 = 0;
    _DAT_01ba5c80 = 0;
    if (0 < _DAT_01ba51c8) {
      do {
        if ((_DAT_01ba56cc == *local_18) && (local_18 != (int *)0x0)) goto LAB_00462124;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar6 < _DAT_01ba51c8);
    }
    local_18 = (int *)0x0;
LAB_00462124:
    if (local_18 != (int *)0x0) {
      local_14 = (int *)&DAT_01ba51cc;
      iVar6 = 0;
      if (0 < _DAT_01ba51c8) {
        do {
          if ((_DAT_01ba56cc == *local_14) && (local_14 != local_18)) goto LAB_0046215b;
          iVar6 = iVar6 + 1;
          local_14 = local_14 + 0x14;
        } while (iVar6 < _DAT_01ba51c8);
      }
      local_14 = (int *)0x0;
LAB_0046215b:
      if (local_14 != (int *)0x0) {
        local_20 = _DAT_01ba56cc;
        do {
          if (local_18[1] <= local_20) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01ba51cc;
            iVar6 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_20 == *local_18) && (local_18 != local_14)) goto LAB_004621b6;
                iVar6 = iVar6 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar6 < _DAT_01ba51c8);
            }
            local_18 = (int *)0x0;
LAB_004621b6:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          if (local_14[1] <= local_20) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01ba51cc;
            iVar6 = 0;
            if (0 < _DAT_01ba51c8) {
              do {
                if ((local_20 == *local_14) && (local_14 != local_18)) goto LAB_00462206;
                iVar6 = iVar6 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar6 < _DAT_01ba51c8);
            }
            local_14 = (int *)0x0;
LAB_00462206:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          apuStack_70[0] = (uint *)0x462229;
          FUN_0055d6d7();
          if (_DAT_01ba5c80 != 0) {
            return;
          }
          local_18[2] = local_18[2] + local_18[3];
          local_18[6] = local_18[6] + local_18[7];
          local_18[8] = local_18[8] + local_18[9];
          local_18[4] = local_18[4] + local_18[5];
          local_18[10] = local_18[10] + local_18[0xb];
          local_18[0xc] = local_18[0xc] + local_18[0xd];
          local_14[2] = local_14[2] + local_14[3];
          local_14[6] = local_14[6] + local_14[7];
          local_14[8] = local_14[8] + local_14[9];
          local_14[4] = local_14[4] + local_14[5];
          local_14[10] = local_14[10] + local_14[0xb];
          local_14[0xc] = local_14[0xc] + local_14[0xd];
          if (((uint)_DAT_01c38b54 & 0x200) == 0) {
            local_20 = local_20 + 1;
          }
          else {
            local_18[0xe] = local_18[0xe] + local_18[0xf];
            local_18[0x10] = local_18[0x10] + local_18[0x11];
            local_14[0xe] = local_14[0xe] + local_14[0xf];
            local_14[0x10] = local_14[0x10] + local_14[0x11];
            local_20 = local_20 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        iVar6 = iVar6 + 1;
        apuStack_70[iVar6] = &DAT_00622014 + *param_1 * 0xc;
        param_1 = param_1 + 1;
      } while (iVar6 < param_2);
    }
    apuStack_70[0] = _DAT_01c38b54;
    FUN_0055f920(apuStack_70 + 1,param_2);
  }
  return;
}
