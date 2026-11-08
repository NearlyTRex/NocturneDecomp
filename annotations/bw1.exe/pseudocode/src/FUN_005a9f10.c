// Name: FUN_005a9f10
// Address: 005a9f10
// Address Range: [[005a9f10, 005aa541]]
// Convention: unknown
// Signature: void FUN_005a9f10(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a9f10(int *param_1,int param_2)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float afStackY_1064 [1011];
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78 [2];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float afStack_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar1 = 0;
  if ((param_1[1] & 0x7fffffffU) != 0) {
    _DAT_02c8afd4 = _DAT_02c8afd4 + _DAT_01c43530;
    if (DAT_00625c98 < _DAT_02c8afd4) {
      _DAT_02c8afd4 = _DAT_02c8afd4 - DAT_00625c98;
      _DAT_02c8afd8 = _DAT_02c8afd8 + 1;
      if (0xf < _DAT_02c8afd8) {
        _DAT_02c8afd8 = 0;
      }
    }
    local_30 = *(float *)(0x01CCF390 + 0x294);
    fVar2 = (float10)_DAT_02c8afc0 * (float10)local_30 * (float10)_DAT_005f9252 +
            (float10)_DAT_02c9300c;
    fVar3 = (float10)_DAT_02c8afc4 * (float10)local_30 * (float10)_DAT_005f9252 +
            (float10)_DAT_02c93010;
    FUN_005c03a0();
    FUN_005c03a0();
    _DAT_02c9300c = (int)ROUND(fVar2);
    _DAT_02c93010 = (int)ROUND(fVar3);
    if (0xffffff < _DAT_02c9300c) {
      _DAT_02c9300c = _DAT_02c9300c + -0x1000000;
    }
    if (_DAT_02c9300c < 0) {
      DAT_02c9300f = DAT_02c9300f + '\x01';
    }
    if (0xffffff < _DAT_02c93010) {
      _DAT_02c93010 = _DAT_02c93010 + -0x1000000;
    }
    if (_DAT_02c93010 < 0) {
      DAT_02c93013 = DAT_02c93013 + '\x01';
    }
    _DAT_00625e38 = _DAT_02c9300c;
    _DAT_00625e3c = _DAT_02c93010;
    DAT_00625e44 = _DAT_02c9300c + 0x1000000;
    _DAT_00625e48 = _DAT_02c93010;
    DAT_00625e54 = _DAT_02c93010 + 0x1000000;
    _DAT_00625e5c = _DAT_02c9300c;
    _DAT_02c93004 = (int)(((longlong)_DAT_02c8afd4 * 0xffff) / (longlong)DAT_00625c98);
    if (_DAT_02c93004 < 0x10000) {
      if (_DAT_02c93004 < 0) {
        _DAT_02c93004 = 0;
      }
    }
    else {
      _DAT_02c93004 = 0xffff;
    }
    _DAT_00625e50 = DAT_00625e44;
    _DAT_00625e60 = DAT_00625e54;
    FUN_00484f00(DAT_00612560,&DAT_00625c9c + _DAT_02c8afd8 * 0x18);
    _DAT_01c51cac = 0;
    _DAT_02c93008 =
         *(float *)(0x01CCF390 + 0x294) * _DAT_005f925a * (float)_DAT_005f9262 *
         (float)_DAT_005f926a + _DAT_02c93008;
    local_24 = 0;
    if (0 < _DAT_02c8afdc) {
      local_20 = 0;
      do {
        local_1c = *(int *)(&DAT_02c8afe0 + local_20);
        local_18 = *(int *)(&DAT_02c8efe0 + local_20);
        local_2c = (float)local_1c;
        local_28 = (float)local_18;
        local_7c = local_2c * (float)param_1[2] + _DAT_02c8afc8;
        local_78[0] = (float)param_1[1] + _DAT_02c8afcc;
        local_78[1] = local_28 * (float)param_1[2] + _DAT_02c8afd0;
        local_14 = local_18;
        FUN_004837b0(DAT_00612560,&local_7c);
        local_4c = local_7c;
        afStack_48[(uint)bVar1 * -2] = local_78[(uint)bVar1 * -2];
        afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
             local_78[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
        local_7c = 0.0;
        local_78[0] = 0.0;
        local_78[1] = 0.0;
        if (*param_1 != 0) {
          fVar2 = (float10)fsin((float10)local_28 * (float10)_DAT_005f925a * (float10)_DAT_005f9262
                                + (float10)local_2c * (float10)_DAT_005f925a +
                                (float10)_DAT_02c93008);
          local_78[0] = (float)(fVar2 * (float10)_DAT_00625c94);
        }
        local_64 = (int)ROUND(_DAT_00607bac * 0.0);
        local_60 = (int)ROUND(local_78[0] * _DAT_00607bac);
        local_5c = (int)ROUND(_DAT_00607bac * 0.0);
        FUN_00580173(*DAT_00612560,&local_64);
        FUN_00552d40(0x01E82168,&local_7c,&local_4c,0);
        local_7c = (float)param_1[2];
        if (*param_1 != 0) {
          local_14 = local_1c + 1;
          fVar2 = (float10)fsin((float10)local_18 * (float10)_DAT_005f925a * (float10)_DAT_005f9262
                                + (float10)local_14 * (float10)_DAT_005f925a +
                                (float10)_DAT_02c93008);
          local_78[0] = (float)(fVar2 * (float10)_DAT_00625c94);
        }
        local_70 = (int)ROUND(local_7c * _DAT_00607bac);
        local_6c = (int)ROUND(local_78[0] * _DAT_00607bac);
        local_68 = (int)ROUND(local_78[1] * _DAT_00607bac);
        FUN_00580173(*DAT_00612560 + 0x30,&local_70);
        FUN_00552d40(0x01E82168,&local_7c,&local_4c,1);
        local_78[1] = (float)param_1[2];
        if (*param_1 != 0) {
          local_14 = local_1c + 1;
          fVar2 = (float10)fsin((float10)(local_18 + 1) * (float10)_DAT_005f925a *
                                (float10)_DAT_005f9262 + (float10)local_14 * (float10)_DAT_005f925a
                                + (float10)_DAT_02c93008);
          local_78[0] = (float)(fVar2 * (float10)_DAT_00625c94);
        }
        local_58 = (int)ROUND(local_7c * _DAT_00607bac);
        local_54 = (int)ROUND(local_78[0] * _DAT_00607bac);
        local_50 = (int)ROUND(local_78[1] * _DAT_00607bac);
        FUN_00580173(*DAT_00612560 + 0x60,&local_58);
        FUN_00552d40(0x01E82168,&local_7c,&local_4c,2);
        local_7c = 0.0;
        if (*param_1 != 0) {
          local_14 = local_1c;
          fVar2 = (float10)fsin((float10)(local_18 + 1) * (float10)_DAT_005f925a *
                                (float10)_DAT_005f9262 + (float10)local_1c * (float10)_DAT_005f925a
                                + (float10)_DAT_02c93008);
          local_78[0] = (float)(fVar2 * (float10)_DAT_00625c94);
        }
        local_88 = (int)ROUND(_DAT_00607bac * 0.0);
        local_84 = (int)ROUND(local_78[0] * _DAT_00607bac);
        local_80 = (int)ROUND(local_78[1] * _DAT_00607bac);
        FUN_00580173(*DAT_00612560 + 0x90,&local_88);
        FUN_00552d40(0x01E82168,&local_7c,&local_4c,3);
        if (*param_1 == 0) {
          if (_DAT_01c50948 == 0) {
            if (param_2 == 0) {
              FUN_00482780(DAT_00612560,&DAT_00625e1c);
            }
            else {
              FUN_00482540(DAT_00612560,&DAT_00625e1c);
            }
          }
          else {
            FUN_00483ce0(DAT_00612560,1);
            FUN_00481c00(DAT_00612560,&DAT_00625e1c);
          }
        }
        else {
          FUN_00483de0(DAT_00612560,0xa000);
          FUN_00483120(DAT_00612560,&DAT_00625e1c);
        }
        local_20 = local_20 + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_02c8afdc);
    }
  }
  return;
}
