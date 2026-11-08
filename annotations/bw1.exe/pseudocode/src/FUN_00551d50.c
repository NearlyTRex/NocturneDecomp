// Name: FUN_00551d50
// Address: 00551d50
// Address Range: [[00551d50, 00552489]]
// Convention: unknown
// Signature: int FUN_00551d50(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00551d50(uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_10c8 [1013];
  float *pfVar9;
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  float local_c4 [8];
  float local_a4;
  float local_a0 [5];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_44;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (param_2 == (float *)0x0) {
    _DAT_0202a374 = param_2;
    if (0 < _DAT_01fe55bc) {
      iVar7 = _DAT_01fe55bc * 4;
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar6 = iVar5;
        if (*(int *)(*(int *)(iVar4 + 0x1fe55c0) + 0x1cb4) != 0) {
          iVar6 = iVar5 + 4;
          _DAT_0202a374 = (float *)((int)_DAT_0202a374 + 1);
          *(int *)(&DAT_0202a378 + iVar5) = *(int *)(iVar4 + 0x1fe55c0);
        }
        iVar4 = iVar4 + 4;
        iVar5 = iVar6;
      } while (iVar4 < iVar7);
    }
    _DAT_0202a1f0 = 0;
    if (0 < _DAT_01fe4e38) {
      iVar4 = _DAT_01fe4e38 * 4;
      iVar5 = 0;
      iVar7 = 0;
      do {
        iVar6 = iVar7;
        if (*(int *)(*(int *)(&DAT_01fe4e3c + iVar5) + 0x1cb4) != 0) {
          iVar6 = iVar7 + 4;
          _DAT_0202a1f0 = _DAT_0202a1f0 + 1;
          *(int *)(&DAT_0202a1f4 + iVar7) = *(int *)(&DAT_01fe4e3c + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar7 = iVar6;
      } while (iVar5 < iVar4);
    }
    _DAT_0202a388 = _DAT_01fe55d0;
    if (0 < _DAT_01fe55d0) {
      iVar5 = _DAT_01fe55d0 * 4;
      iVar7 = 0;
      do {
        iVar4 = iVar7 + 4;
        *(uint *)(&DAT_0202a38c + iVar7) = *(uint *)(iVar7 + 0x1fe55d4);
        iVar7 = iVar4;
      } while (iVar4 < iVar5);
    }
    _DAT_0202a51c = _DAT_01fe5c88;
    local_cc = _DAT_01fe5c88;
    if (0 < _DAT_01fe5c88) {
      iVar5 = _DAT_01fe5c88 * 4;
      iVar7 = 0;
      do {
        local_cc = iVar7 + 4;
        *(uint *)(&DAT_0202a520 + iVar7) = *(uint *)(&DAT_01fe5c8c + iVar7);
        iVar7 = local_cc;
      } while (local_cc < iVar5);
    }
  }
  else {
    iVar7 = 0;
    _DAT_0202a374 = (float *)0x0;
    if (0 < _DAT_01fe55bc) {
      iVar5 = 0;
      do {
        if ((*(int *)(*(int *)(iVar5 + 0x1fe55c0) + 0x1cb4) != 0) &&
           (iVar4 = FUN_00452de0(*(int *)(iVar5 + 0x1fe55c0),param_2,param_3,param_4,param_5),
           iVar4 != 0)) {
          *(uint *)(&DAT_0202a378 + (int)_DAT_0202a374 * 4) =
               *(uint *)(iVar5 + 0x1fe55c0);
          _DAT_0202a374 = (float *)((int)_DAT_0202a374 + 1);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_01fe55bc);
    }
    iVar7 = 0;
    _DAT_0202a1f0 = 0;
    if (0 < _DAT_01fe4e38) {
      iVar5 = 0;
      do {
        if ((*(int *)(*(int *)(&DAT_01fe4e3c + iVar5) + 0x1cb4) != 0) &&
           (iVar4 = FUN_00452de0(*(int *)(&DAT_01fe4e3c + iVar5),param_2,param_3,param_4,param_5),
           iVar4 != 0)) {
          _DAT_0202a1f0 = _DAT_0202a1f0 + 1;
          *(uint *)(&DAT_0202a1f0 + _DAT_0202a1f0 * 4) =
               *(uint *)(&DAT_01fe4e3c + iVar5);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_01fe4e38);
    }
    local_14 = 0;
    _DAT_0202a51c = 0;
    if (0 < _DAT_01fe5c88) {
      local_18 = 0;
      do {
        iVar7 = *(int *)(&DAT_01fe5c8c + local_18);
        pfVar9 = local_7c + 5;
        local_5c = *(float *)(iVar7 + 0x104) - *param_2;
        local_58 = *(float *)(iVar7 + 0x108) - param_2[1];
        local_54 = *(float *)(iVar7 + 0x10c) - param_2[2];
        local_68 = local_5c;
        local_7c[(uint)bVar8 * -2 + 6] = local_7c[(uint)bVar8 * -2 + 9];
        local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        FUN_0045f700(param_6,pfVar9);
        local_c8 = local_50;
        local_c4[(uint)bVar8 * -2] = local_7c[(uint)bVar8 * -2 + 0xc];
        local_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        if (local_7c + 5 != &local_c8) {
          local_68 = local_c8;
          local_64 = local_c4[0];
          local_60 = local_c4[1];
        }
        if ((((*param_4 <= local_68 + *(float *)(iVar7 + 0x11d4)) &&
             (param_4[1] <= local_64 + *(float *)(iVar7 + 0x11d4))) &&
            (param_4[2] <= local_60 + *(float *)(iVar7 + 0x11d4))) &&
           (((local_68 - *(float *)(iVar7 + 0x11d4) <= *param_5 &&
             (local_64 - *(float *)(iVar7 + 0x11d4) <= param_5[1])) &&
            (local_60 - *(float *)(iVar7 + 0x11d4) <= param_5[2])))) {
          *(int *)(&DAT_0202a520 + _DAT_0202a51c * 4) = iVar7;
          _DAT_0202a51c = _DAT_0202a51c + 1;
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + 4;
      } while (local_14 < _DAT_01fe5c88);
    }
    iVar7 = 0;
    _DAT_0202a388 = 0;
    if (0 < _DAT_01fe55d0) {
      iVar5 = 0;
      do {
        iVar4 = FUN_0045edf0(*(uint *)(iVar5 + 0x1fe55d4),param_2,param_6,param_4,param_5);
        if (iVar4 != 0) {
          *(uint *)(&DAT_0202a38c + _DAT_0202a388 * 4) = *(uint *)(iVar5 + 0x1fe55d4);
          _DAT_0202a388 = _DAT_0202a388 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_01fe55d0);
    }
    iVar7 = 0;
    local_cc = _DAT_01fe5a88;
    if (0 < _DAT_01fe5a88) {
      iVar5 = 0;
      do {
        iVar4 = FUN_0045edf0(*(uint *)(&DAT_01fe5a8c + iVar5),param_2,param_6,param_4,param_5)
        ;
        local_cc = 0;
        if (iVar4 != 0) {
          local_cc = *(int *)(&DAT_01fe5a8c + iVar5);
          *(int *)(&DAT_0202a38c + _DAT_0202a388 * 4) = local_cc;
          _DAT_0202a388 = _DAT_0202a388 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_01fe5a88);
    }
    if (0 < _DAT_0202a51c) {
      local_e0 = *param_5 - *param_4;
      local_dc = param_5[1] - param_4[1];
      local_d8 = param_5[2] - param_4[2];
      local_a0[2] = *param_5 - *param_4;
      local_a0[(uint)bVar8 * -2 + 3] = *(float *)((int)&stack0xffffff24 + (uint)bVar8 * -8);
      local_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&stack0xffffff28 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      FUN_0045f690(param_6,local_a0 + 2);
      local_a4 = local_44;
      local_a0[(uint)bVar8 * -2] = local_7c[(uint)bVar8 * -2 + 0xf];
      local_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
      local_80 = *param_2 + local_a4;
      local_7c[0] = param_2[1] + local_a0[0];
      local_7c[1] = param_2[2] + local_a0[1];
      local_c4[4] = 0.0;
      local_c4[3] = 0.0;
      local_c4[2] = 0.0;
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 0.0;
      local_7c[2] = *param_2 + local_a4;
      local_7c[(uint)bVar8 * -2 + 3] = local_7c[(uint)bVar8 * -2];
      local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      iVar7 = 0;
      if (0 < _DAT_0202a51c) {
        iVar5 = 0;
        do {
          iVar4 = *(int *)(&DAT_0202a520 + iVar5);
          if ((*(uint *)(iVar4 + 0x11d4) & 0x7fffffff) == 0) {
            local_8c = *(float *)(iVar4 + 0x11c4) + local_8c;
            local_88 = *(float *)(iVar4 + 0x11c8) + local_88;
            local_84 = *(float *)(iVar4 + 0x11cc) + local_84;
            iVar7 = iVar7 + 1;
          }
          else {
            fVar3 = *(float *)(iVar4 + 0x104) - local_7c[2];
            fVar1 = *(float *)(iVar4 + 0x108) - local_7c[3];
            fVar2 = *(float *)(iVar4 + 0x10c) - local_6c;
            fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
            if (fVar1 <= *(float *)(iVar4 + 0x11d8)) {
              fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + _DAT_01cc804c) * *(float *)(iVar4 + 0x11dc)
                      ) * _DAT_005f0996;
              fVar2 = (float)_DAT_005f099e;
              local_c4[2] = fVar1 * *(float *)(iVar4 + 0x11c4) * fVar2 + local_c4[2];
              local_c4[3] = fVar1 * *(float *)(iVar4 + 0x11c8) * fVar2 + local_c4[3];
              local_c4[4] = fVar1 * *(float *)(iVar4 + 0x11cc) * fVar2 + local_c4[4];
            }
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < _DAT_0202a51c * 4);
      }
      if (iVar7 == 0) {
        local_d0 = 0xaaaa;
        local_cc = 0xaaaa;
        local_d4 = 0xaaaa;
      }
      else {
        local_d4 = (int)ROUND(local_8c * _DAT_00605000);
        local_d0 = (int)ROUND(local_88 * _DAT_00605000);
        local_cc = (int)ROUND(local_84 * _DAT_00605000);
      }
      _DAT_0202a89c = (int)ROUND(local_c4[2] * _DAT_00605000) + local_d4;
      _DAT_0202a8a0 = (int)ROUND(local_c4[3] * _DAT_00605000) + local_d0;
      local_cc = (int)ROUND(local_c4[4] * _DAT_00605000) + local_cc;
      if (0xffff < _DAT_0202a89c) {
        _DAT_0202a89c = 0xffff;
      }
      if (0xffff < _DAT_0202a8a0) {
        _DAT_0202a8a0 = 0xffff;
      }
      _DAT_0202a8a4 = local_cc;
      if (0xffff < local_cc) {
        _DAT_0202a8a4 = 0xffff;
        return local_cc;
      }
    }
  }
  return local_cc;
}
