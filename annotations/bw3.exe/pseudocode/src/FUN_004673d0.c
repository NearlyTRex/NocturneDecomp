// Name: FUN_004673d0
// Address: 004673d0
// Address Range: [[004673d0, 004678c0]]
// Convention: unknown
// Signature: void FUN_004673d0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004673d0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint *apuStack_78 [17];
  uint local_34;
  int *local_30;
  int local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  
  if (DAT_007303fc != 0) {
    apuStack_78[0] = &DAT_0060b014 + param_1[2] * 0xc;
    iVar8 = FUN_00515ac0(&DAT_0060b014 + *param_1 * 0xc,&DAT_0060b014 + param_1[1] * 0xc);
    if (iVar8 == 0) {
      return;
    }
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
    if (_DAT_01c6e2b8 != 0) {
      if (_DAT_01c6e2b8 < 2) {
        iVar8 = 0;
        piVar7 = param_1;
        if (0 < param_2) {
          do {
            apuStack_78[0] = (uint *)0x1;
            iVar8 = iVar8 + 1;
            FUN_00515920(&DAT_0060b014 + *piVar7 * 0xc);
            piVar7 = piVar7 + 1;
          } while (iVar8 < param_2);
        }
      }
      else if ((_DAT_01c6e2b8 == 6) && (iVar8 = 0, piVar7 = param_1, 0 < param_2)) {
        do {
          apuStack_78[0] = (uint *)0x1;
          iVar8 = iVar8 + 1;
          FUN_00515a80(&DAT_0060b014 + *piVar7 * 0xc);
          piVar7 = piVar7 + 1;
        } while (iVar8 < param_2);
      }
    }
    _DAT_01bdcfd4 = 0;
    _DAT_01bdd4dc = 0;
    local_2c = 0;
    _DAT_01bdd4d8 = 0x4b0;
    if (0 < param_2) {
      local_30 = param_1;
      do {
        iVar8 = local_2c + 1;
        if (param_2 <= iVar8) {
          iVar8 = 0;
        }
        iVar2 = param_1[iVar8] * 0x30;
        local_20 = &DAT_0060b014 + param_1[iVar8] * 0xc;
        iVar3 = *local_30 * 0x30;
        local_24 = &DAT_0060b014 + *local_30 * 0xc;
        iVar4 = *(int *)(&DAT_0060b028 + iVar3) >> 0x10;
        iVar8 = *(int *)(&DAT_0060b028 + iVar2) >> 0x10;
        local_28 = local_20;
        if (iVar4 != iVar8) {
          iVar5 = iVar4;
          puVar9 = local_24;
          if (*(int *)(&DAT_0060b028 + iVar2) < *(int *)(&DAT_0060b028 + iVar3)) {
            iVar5 = iVar8;
            iVar8 = iVar4;
            puVar9 = local_20;
            local_28 = local_24;
          }
          iVar3 = _DAT_01bdcfd4 * 0x50;
          *(int *)(&DAT_01bdcfd8 + iVar3) = iVar5;
          iVar2 = _DAT_01bdd4d8;
          *(int *)(iVar3 + 0x1bdcfdc) = iVar8;
          if (iVar5 < iVar2) {
            _DAT_01bdd4d8 = iVar5;
          }
          if (_DAT_01bdd4dc < iVar8) {
            _DAT_01bdd4dc = iVar8;
          }
          if ((uint)(local_28[5] - puVar9[5]) < 0x10000) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)(0xffffffff / (ulonglong)(uint)(local_28[5] - puVar9[5]));
          }
          lVar1 = (longlong)iVar8 * (longlong)(int)(local_28[4] - puVar9[4]);
          *(uint *)(iVar3 + 0x1bdcfe4) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar8 * (longlong)((local_28[2] - puVar9[2]) * 0x100);
          *(uint *)(iVar3 + 0x1bdd004) =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar6 = (uint)(ushort)((ushort)puVar9[5] ^ 0xffff);
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1bdcfe4);
          local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar3 + 0x1bdcfe0) = puVar9[4] + local_34;
          lVar1 = (longlong)(int)uVar6 * (longlong)*(int *)(iVar3 + 0x1bdd004);
          _DAT_01bdcfd4 = _DAT_01bdcfd4 + 1;
          *(uint *)(iVar3 + 0x1bdd000) =
               (puVar9[2] * 0x100 - _DAT_01bdd520) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = local_30 + 1;
        local_2c = local_2c + 1;
      } while (local_2c < param_2);
    }
    iVar8 = 0;
    _DAT_01bdd814 = 0;
    local_14 = (int *)&DAT_01bdcfd8;
    if (0 < _DAT_01bdcfd4) {
      do {
        if ((_DAT_01bdd4d8 == *local_14) && (local_14 != (int *)0x0)) goto LAB_004675c4;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar8 < _DAT_01bdcfd4);
    }
    local_14 = (int *)0x0;
LAB_004675c4:
    if (local_14 != (int *)0x0) {
      local_18 = (int *)&DAT_01bdcfd8;
      iVar8 = 0;
      if (0 < _DAT_01bdcfd4) {
        do {
          if ((_DAT_01bdd4d8 == *local_18) && (local_18 != local_14)) goto LAB_004675fd;
          iVar8 = iVar8 + 1;
          local_18 = local_18 + 0x14;
        } while (iVar8 < _DAT_01bdcfd4);
      }
      local_18 = (int *)0x0;
LAB_004675fd:
      local_1c = _DAT_01bdd4d8;
      if (local_18 != (int *)0x0) {
        do {
          if (local_14[1] <= local_1c) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01bdcfd8;
            iVar8 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_00467658;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 0x14;
              } while (iVar8 < _DAT_01bdcfd4);
            }
            local_14 = (int *)0x0;
LAB_00467658:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (local_18[1] <= local_1c) {
            *local_18 = -1;
            local_18 = (int *)&DAT_01bdcfd8;
            iVar8 = 0;
            if (0 < _DAT_01bdcfd4) {
              do {
                if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004676a8;
                iVar8 = iVar8 + 1;
                local_18 = local_18 + 0x14;
              } while (iVar8 < _DAT_01bdcfd4);
            }
            local_18 = (int *)0x0;
LAB_004676a8:
            if (local_18 == (int *)0x0) {
              return;
            }
          }
          apuStack_78[0] = (uint *)0x4676cb;
          FUN_00563257();
          if (_DAT_01bdd814 != 0) {
            return;
          }
          local_14[2] = local_14[2] + local_14[3];
          local_14[10] = local_14[10] + local_14[0xb];
          local_18[2] = local_18[2] + local_18[3];
          local_18[10] = local_18[10] + local_18[0xb];
          local_1c = local_1c + 1;
        } while( true );
      }
    }
  }
  else {
    if (0 < param_2) {
      iVar8 = 0;
      do {
        iVar2 = *param_1;
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 1;
        apuStack_78[iVar8] = &DAT_0060b014 + iVar2 * 0xc;
      } while (iVar8 < param_2);
    }
    apuStack_78[0] = _DAT_01c6e2b4;
    FUN_00565c40(apuStack_78 + 1,param_2);
  }
  return;
}
