// Name: FUN_004fb390
// Address: 004fb390
// Address Range: [[004fb390, 004fbb31]]
// Convention: unknown
// Signature: void FUN_004fb390(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb390(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *apuStack_6c [17];
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  if (DAT_006b0280 != 0) {
    if (param_2 < 4) {
      apuStack_6c[0] = &DAT_005c5014 + param_1[2] * 0xc;
      iVar6 = FUN_004f9a10(&DAT_005c5014 + *param_1 * 0xc,&DAT_005c5014 + param_1[1] * 0xc);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      iVar6 = param_2 + -2;
      iVar8 = 0;
      iVar11 = 0;
      piVar3 = param_1;
      if (0 < iVar6) {
        do {
          apuStack_6c[0] = &DAT_005c5014 + piVar3[2] * 0xc;
          iVar2 = FUN_004f9a10(&DAT_005c5014 + *piVar3 * 0xc,&DAT_005c5014 + piVar3[1] * 0xc);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar8 = iVar8 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar8 < iVar6);
      }
      if (iVar11 == iVar6) {
        return;
      }
    }
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((_DAT_01c02594 == 0) || (DAT_006b0278 != 0)) {
    switch(_DAT_01c039a4) {
    case 1:
      iVar6 = 0;
      piVar3 = param_1;
      if (0 < param_2) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar6 = iVar6 + 1;
          FUN_004f9870(&DAT_005c5014 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (iVar6 < param_2);
      }
      break;
    case 2:
      iVar6 = 0;
      piVar3 = param_1;
      if (0 < param_2) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          FUN_004f98e0(&DAT_005c5014 + *piVar3 * 0xc);
          iVar6 = iVar6 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar6 < param_2);
      }
      break;
    case 3:
      iVar6 = 0;
      piVar3 = param_1;
      if (0 < param_2) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar6 = iVar6 + 1;
          FUN_004f9960(&DAT_005c5014 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (iVar6 < param_2);
      }
      break;
    case 5:
      iVar6 = 0;
      piVar3 = param_1;
      if (0 < param_2) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          FUN_004f98e0(&DAT_005c5014 + *piVar3 * 0xc);
          iVar6 = iVar6 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar6 < param_2);
      }
      break;
    case 6:
      iVar6 = 0;
      piVar3 = param_1;
      if (0 < param_2) {
        do {
          apuStack_6c[0] = (uint *)0x1;
          iVar6 = iVar6 + 1;
          FUN_004f99d0(&DAT_005c5014 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (iVar6 < param_2);
      }
    }
    _DAT_01e53384 = 0;
    _DAT_01e52efc = 0;
    local_1c = 0;
    _DAT_01e53380 = 0x4b0;
    if (0 < param_2) {
      local_24 = param_1;
      do {
        iVar6 = local_1c + 1;
        if (param_2 <= iVar6) {
          iVar6 = 0;
        }
        iVar9 = param_1[iVar6] * 0x30;
        iVar2 = *local_24 * 0x30;
        iVar8 = *(int *)(&DAT_005c5028 + iVar9) >> 0x10;
        iVar11 = *(int *)(&DAT_005c5028 + iVar2) >> 0x10;
        if (iVar11 != iVar8) {
          iVar4 = iVar11;
          puVar7 = &DAT_005c5014 + *local_24 * 0xc;
          puVar12 = &DAT_005c5014 + param_1[iVar6] * 0xc;
          if (*(int *)(&DAT_005c5028 + iVar9) < *(int *)(&DAT_005c5028 + iVar2)) {
            iVar4 = iVar8;
            iVar8 = iVar11;
            puVar7 = &DAT_005c5014 + param_1[iVar6] * 0xc;
            puVar12 = &DAT_005c5014 + *local_24 * 0xc;
          }
          iVar11 = _DAT_01e52efc * 0x48;
          *(int *)(&DAT_01e52f00 + iVar11) = iVar4;
          iVar6 = _DAT_01e53380;
          *(int *)(iVar11 + 0x1e52f04) = iVar8;
          if (iVar4 < iVar6) {
            _DAT_01e53380 = iVar4;
          }
          if (_DAT_01e53384 < iVar8) {
            _DAT_01e53384 = iVar8;
          }
          if ((uint)(puVar12[5] - puVar7[5]) < 0x10000) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)(0xffffffff / (ulonglong)(uint)(puVar12[5] - puVar7[5]));
          }
          uVar10 = (uint)(ushort)((ushort)puVar7[5] ^ 0xffff);
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[4] - puVar7[4]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f0c) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e52f08) =
               puVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[6] - puVar7[6]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f1c) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e52f18) =
               puVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[7] - puVar7[7]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f24) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e52f20) =
               puVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[8] - puVar7[8]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f14) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e52f10) =
               puVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[0xb] - puVar7[0xb]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f34) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e52f30) =
               puVar7[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (_DAT_01c039a4 == 1) {
            if (_DAT_01c0399c == 0) {
              local_20 = puVar7[3];
              iVar8 = puVar12[3];
            }
            else {
              local_20 = 0x7fffffff - puVar7[2];
              iVar8 = 0x7fffffff - puVar12[2];
            }
            lVar1 = (longlong)iVar6 * (longlong)(iVar8 - local_20);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e52f2c) = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            *(uint *)(iVar11 + 0x1e52f28) =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[2] - puVar7[2]);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar11 + 0x1e52f2c) = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            *(uint *)(iVar11 + 0x1e52f28) =
                 puVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[9] - puVar7[9]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f3c) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f38) = puVar7[9] + local_28;
          lVar1 = (longlong)iVar6 * (longlong)(int)(puVar12[10] - puVar7[10]);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar11 + 0x1e52f44) = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          *(uint *)(iVar11 + 0x1e52f40) =
               puVar7[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          _DAT_01e52efc = _DAT_01e52efc + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < param_2);
    }
    local_14 = (int *)&DAT_01e52f00;
    iVar6 = 0;
    if (0 < _DAT_01e52efc) {
      do {
        if ((_DAT_01e53380 == *local_14) && (local_14 != (int *)0x0)) goto LAB_004fb6af;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0x12;
      } while (iVar6 < _DAT_01e52efc);
    }
    local_14 = (int *)0x0;
LAB_004fb6af:
    if (local_14 != (int *)0x0) {
      iVar6 = 0;
      piVar3 = (int *)&DAT_01e52f00;
      if (0 < _DAT_01e52efc) {
        do {
          if ((_DAT_01e53380 == *piVar3) && (piVar3 != local_14)) goto LAB_004fb6ee;
          iVar6 = iVar6 + 1;
          piVar3 = piVar3 + 0x12;
        } while (iVar6 < _DAT_01e52efc);
      }
      piVar3 = (int *)0x0;
LAB_004fb6ee:
      if (piVar3 != (int *)0x0) {
        local_18 = _DAT_01e53380;
        do {
          iVar6 = _DAT_01e52efc;
          if (local_14[1] <= local_18) {
            *local_14 = -1;
            local_14 = (int *)&DAT_01e52f00;
            iVar8 = 0;
            if (0 < iVar6) {
              do {
                if ((local_18 == *local_14) && (local_14 != piVar3)) goto LAB_004fb743;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 0x12;
              } while (iVar8 < _DAT_01e52efc);
            }
            local_14 = (int *)0x0;
LAB_004fb743:
            if (local_14 == (int *)0x0) {
              return;
            }
          }
          if (piVar3[1] <= local_18) {
            *piVar3 = -1;
            iVar6 = 0;
            piVar3 = (int *)&DAT_01e52f00;
            if (0 < _DAT_01e52efc) {
              do {
                if ((local_18 == *piVar3) && (piVar3 != local_14)) goto LAB_004fb790;
                iVar6 = iVar6 + 1;
                piVar3 = piVar3 + 0x12;
              } while (iVar6 < _DAT_01e52efc);
            }
            piVar3 = (int *)0x0;
LAB_004fb790:
            if (piVar3 == (int *)0x0) {
              return;
            }
          }
          apuStack_6c[0] = (uint *)0x4fb7a9;
          FUN_00530710();
          local_14[2] = local_14[2] + local_14[3];
          local_14[6] = local_14[6] + local_14[7];
          local_14[8] = local_14[8] + local_14[9];
          local_14[10] = local_14[10] + local_14[0xb];
          local_14[4] = local_14[4] + local_14[5];
          local_14[0xe] = local_14[0xe] + local_14[0xf];
          local_14[0x10] = local_14[0x10] + local_14[0x11];
          local_14[0xc] = local_14[0xc] + local_14[0xd];
          piVar3[2] = piVar3[2] + piVar3[3];
          piVar3[6] = piVar3[6] + piVar3[7];
          piVar3[8] = piVar3[8] + piVar3[9];
          piVar3[10] = piVar3[10] + piVar3[0xb];
          local_18 = local_18 + 1;
          piVar3[4] = piVar3[4] + piVar3[5];
          piVar3[0xe] = piVar3[0xe] + piVar3[0xf];
          piVar3[0x10] = piVar3[0x10] + piVar3[0x11];
          piVar3[0xc] = piVar3[0xc] + piVar3[0xd];
        } while( true );
      }
    }
  }
  else {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        iVar8 = *param_1;
        iVar6 = iVar6 + 1;
        param_1 = param_1 + 1;
        apuStack_6c[iVar6] = &DAT_005c5014 + iVar8 * 0xc;
      } while (iVar6 < param_2);
    }
    apuStack_6c[0] = _DAT_01c039a0;
    FUN_00532650(apuStack_6c + 1,param_2);
  }
  return;
}
