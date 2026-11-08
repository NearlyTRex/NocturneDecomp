// Name: FUN_0055ff40
// Address: 0055ff40
// Address Range: [[0055ff40, 005607c0]]
// Convention: unknown
// Signature: void FUN_0055ff40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055ff40(uint param_1)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float afStackY_106c [960];
  float fVar10;
  float local_154;
  float local_150;
  byte local_14c [100];
  char local_e8 [100];
  float local_84;
  float local_80 [4];
  uint local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [3];
  float local_54;
  float local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float *local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar9 = 0;
  local_48 = *(float *)(0x01D2130C + 0x314);
  local_2c = local_48 * (float)_DAT_005d5307;
  local_3c = local_48;
  FUN_0055e8b0();
  local_40 = -local_2c;
  local_30 = _DAT_02cf5698 - _DAT_02cf569c;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  _DAT_02cf569c = _DAT_02cf569c + local_30;
  if (_DAT_02cf569c <= (float)_DAT_005d530f) {
    FUN_00560b00(param_1,_DAT_02cf5684);
    _DAT_02cf569c = 0.0;
  }
  else {
    iVar4 = FUN_00560af0(param_1,_DAT_02cf5684);
    if (iVar4 == 0) {
      _DAT_02cf5684 = FUN_00556240();
    }
    FUN_00556ab0(_DAT_02cf5684,_DAT_02cf569c);
  }
  local_150 = 0.0;
  if (((0.0 < *(float *)(0x02CFD950 + 0xc)) &&
      (iVar4 = FUN_005a3f90(0x01ED78C8 + 0x14d0f0,&DAT_005d52f4,4), iVar4 == 0)) &&
     (local_150 = SQRT(*(float *)(0x02CFD950 + 0xc)) * (float)_DAT_005d5317 + (float)_DAT_005d531f
     , (float)_DAT_005d5327 < local_150)) {
    local_150 = 0.7;
  }
  local_44 = -local_2c;
  local_34 = local_150 - _DAT_02cf56a0;
  if (local_34 < local_44) {
    local_34 = local_44;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  _DAT_02cf56a0 = _DAT_02cf56a0 + local_34;
  if (_DAT_02cf56a0 <= (float)_DAT_005d530f) {
    FUN_00560b00(param_1,_DAT_02cf5688);
    _DAT_02cf56a0 = 0.0;
  }
  else {
    iVar4 = FUN_00560af0(param_1,_DAT_02cf5688);
    if (iVar4 == 0) {
      _DAT_02cf5688 = FUN_00556240();
    }
    FUN_00556ab0(_DAT_02cf5688,_DAT_02cf56a0);
  }
  if (_DAT_02cf5ed0 <= local_3c) {
    _DAT_02cf5ec8 = _DAT_02cf5ecc;
    _DAT_02cf5ed0 = 0.0;
  }
  else {
    fVar10 = local_3c / _DAT_02cf5ed0;
    _DAT_02cf5ed0 = _DAT_02cf5ed0 - local_3c;
    _DAT_02cf5ec8 = fVar10 * (_DAT_02cf5ecc - _DAT_02cf5ec8) + _DAT_02cf5ec8;
  }
  iVar4 = FUN_00556e30();
  if (iVar4 == 0) {
    FUN_00556db0(3,0);
  }
  else {
    FUN_00556db0(3,1);
    local_18 = (float)FUN_00556d20();
    FUN_00556c90(3,local_18 * _DAT_02cf5ec8);
  }
  if (*(int *)(0x01ED78C8 + 0x15acb8) != 0) {
    local_24 = *(float *)(0x01D2130C + 0x314);
    if (*(int *)(0x01D2130C + 0x264) == 0) {
      if (_DAT_02cf5f84 != *(int *)(0x01ED78C8 + 0x15aeb8)) {
        FUN_0053ebe0();
        FUN_0053ec70();
        local_54 = (float)_DAT_02cf568c;
        local_80[(uint)bVar9 * -2 + 0xc] = *(float *)(&DAT_02cf5690 + (uint)bVar9 * -8);
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             *(float *)(&DAT_02cf5694 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        local_80[2] = local_54;
        local_70 = local_4c;
        pfVar5 = local_80 + 8;
        local_80[3] = local_50 + _DAT_005d532f;
        local_60[0] = local_54;
        local_80[(uint)bVar9 * -2 + 9] = local_80[(uint)bVar9 * -2 + 3];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        iVar4 = FUN_0053cbf0(0x01ED78C8,local_80 + 0xb,pfVar5);
        if (iVar4 == 0) {
          PTR_DAT_006045f0 = &DAT_005d5280;
        }
        else {
          PTR_DAT_006045f0 = &DAT_005d527c;
        }
        FUN_0053ebe0();
        _DAT_02cf5f84 = *(int *)(0x01ED78C8 + 0x15aeb8);
      }
    }
    else {
      PTR_DAT_006045f0 = &DAT_005d5278;
      _DAT_02cf5f84 = -1;
    }
    FUN_00555fd0();
    FUN_00555f00();
    FUN_00555e90();
    iVar4 = FUN_005a3260(PTR_DAT_006045f0,&DAT_005d5284);
    if (iVar4 == 0) {
      FUN_00556be0();
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar4 = FUN_00556700();
      if (iVar4 == 0) {
        FUN_00555fd0();
        FUN_00555df0();
        _DAT_02cf5f8c = FUN_00556240();
        FUN_00556050();
      }
    }
    iVar4 = FUN_00556700();
    if (iVar4 == 0) {
      FUN_00555fd0();
      FUN_00555df0();
      _DAT_02cf5f88 = FUN_00556240();
      FUN_00556050();
    }
    else {
      iVar4 = FUN_005a3260(PTR_DAT_006045f4,PTR_DAT_006045f0);
      if (iVar4 != 0) {
        FUN_00556ab0(_DAT_02cf5f88,local_154 * (float)_DAT_005d5337);
      }
    }
    FUN_00556050();
    pfVar5 = (float *)&DAT_02cf5ed4;
    PTR_DAT_006045f4 = PTR_DAT_006045f0;
    _DAT_02cf5f74 = 0.0;
    _DAT_02cf5f78 = 0.0;
    _DAT_02cf5f7c = 30.0;
    local_28 = (float *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar4 = FUN_00556700();
      pfVar3 = pfVar5;
      if (iVar4 != 0) {
        local_6c = _DAT_02cf5f74 * local_24;
        local_68 = _DAT_02cf5f78 * local_24;
        local_64 = _DAT_02cf5f7c * local_24;
        local_84 = _DAT_02cf5f74 * local_24;
        local_80[(uint)bVar9 * -2] = local_80[(uint)bVar9 * -2 + 6];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        *pfVar5 = *pfVar5 + local_84;
        pfVar5[1] = pfVar5[1] + local_80[0];
        pfVar5[2] = pfVar5[2] + local_80[1];
        pfVar3 = local_28;
        if ((float)_DAT_005d534f < ABS(*(float *)(&DAT_02cf5edc + local_20))) {
          FUN_00556be0();
          pfVar3 = local_28;
        }
      }
      local_28 = pfVar3;
      local_1c = local_1c + 1;
      pfVar5 = pfVar5 + 4;
    } while (local_1c < 10);
    _DAT_02cf5f80 = _DAT_02cf5f80 - local_24;
    if ((_DAT_02cf5f80 <= 0.0) && (local_28 != (float *)0x0)) {
      _DAT_02cf5f80 = (float)FUN_0040ce40(0x3f800000,0x40a00000);
      puVar6 = &DAT_00604818;
      pcVar8 = local_e8;
      local_18 = _DAT_02cf5f80;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      fVar10 = 1.0;
      iVar4 = FUN_005a35cc(0x3f800000);
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar10 = local_154 * (float)_DAT_005d5347;
        local_38 = 25.0;
        FUN_005a28c0(local_e8,"rail?%s.wav",PTR_DAT_006045f0,fVar10);
        break;
      case 2:
      case 3:
        fVar10 = local_154 * (float)_DAT_005d533f;
        pcVar7 = &DAT_005d52ae;
        pcVar8 = local_e8;
        local_38 = 20.0;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        break;
      case 4:
        goto switchD_00560453_caseD_4;
      }
      *local_28 = 0.0;
      local_18 = (float)FUN_0040ce40(0xc0400000,0x40000000);
      fVar2 = local_18 * local_38 + _DAT_02cf5694;
      local_28[1] = 0.0;
      local_28[2] = fVar2;
      FUN_00555fd0();
      FUN_00555e90();
      FUN_00555d90();
      FUN_005a28c0(local_14c,"%s @ %g",local_e8,(double)fVar10);
      fVar10 = (float)FUN_00560a00(0x02CF5680,0,local_14c,local_28);
      local_28[3] = fVar10;
      FUN_00556050();
    }
  }
switchD_00560453_caseD_4:
  FUN_0055a1b0();
  return;
}
