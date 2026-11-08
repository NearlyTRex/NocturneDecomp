// Name: FUN_0057ce10
// Address: 0057ce10
// Address Range: [[0057ce10, 0057d690]]
// Convention: unknown
// Signature: void FUN_0057ce10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057ce10(uint param_1)

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
  local_48 = *(float *)(0x01CCF390 + 0x294);
  local_2c = local_48 * (float)_DAT_005f5aae;
  local_3c = local_48;
  FUN_0057b780();
  local_40 = -local_2c;
  local_30 = _DAT_02c82a78 - _DAT_02c82a7c;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  _DAT_02c82a7c = _DAT_02c82a7c + local_30;
  if (_DAT_02c82a7c <= (float)_DAT_005f5ab6) {
    FUN_0057d9d0(param_1,_DAT_02c82a64);
    _DAT_02c82a7c = 0.0;
  }
  else {
    iVar4 = FUN_0057d9c0(param_1,_DAT_02c82a64);
    if (iVar4 == 0) {
      _DAT_02c82a64 = FUN_00572d20();
    }
    FUN_00573950(_DAT_02c82a64,_DAT_02c82a7c);
  }
  local_150 = 0.0;
  if (((0.0 < *(float *)(0x02C8AFB0 + 0xc)) &&
      (iVar4 = FUN_005c1210(0x01E82168 + 0x14d0f0,&DAT_005f5a9b,4), iVar4 == 0)) &&
     (local_150 = SQRT(*(float *)(0x02C8AFB0 + 0xc)) * (float)_DAT_005f5abe + (float)_DAT_005f5ac6
     , (float)_DAT_005f5ace < local_150)) {
    local_150 = 0.7;
  }
  local_44 = -local_2c;
  local_34 = local_150 - _DAT_02c82a80;
  if (local_34 < local_44) {
    local_34 = local_44;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  _DAT_02c82a80 = _DAT_02c82a80 + local_34;
  if (_DAT_02c82a80 <= (float)_DAT_005f5ab6) {
    FUN_0057d9d0(param_1,_DAT_02c82a68);
    _DAT_02c82a80 = 0.0;
  }
  else {
    iVar4 = FUN_0057d9c0(param_1,_DAT_02c82a68);
    if (iVar4 == 0) {
      _DAT_02c82a68 = FUN_00572d20();
    }
    FUN_00573950(_DAT_02c82a68,_DAT_02c82a80);
  }
  if (_DAT_02c832b0 <= local_3c) {
    _DAT_02c832a8 = _DAT_02c832ac;
    _DAT_02c832b0 = 0.0;
  }
  else {
    fVar10 = local_3c / _DAT_02c832b0;
    _DAT_02c832b0 = _DAT_02c832b0 - local_3c;
    _DAT_02c832a8 = fVar10 * (_DAT_02c832ac - _DAT_02c832a8) + _DAT_02c832a8;
  }
  iVar4 = FUN_00573cd0();
  if (iVar4 == 0) {
    FUN_00573c50(3,0);
  }
  else {
    FUN_00573c50(3,1);
    local_18 = (float)FUN_00573bc0();
    FUN_00573b30(3,local_18 * _DAT_02c832a8);
  }
  if (*(int *)(0x01E82168 + 0x15acb8) != 0) {
    local_24 = *(float *)(0x01CCF390 + 0x294);
    if (*(int *)(0x01CCF390 + 0x25c) == 0) {
      if (_DAT_02c83364 != *(int *)(0x01E82168 + 0x15aeb8)) {
        FUN_00559220();
        FUN_005592b0();
        local_54 = (float)_DAT_02c82a6c;
        local_80[(uint)bVar9 * -2 + 0xc] = *(float *)(&DAT_02c82a70 + (uint)bVar9 * -8);
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             *(float *)(&DAT_02c82a74 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        local_80[2] = local_54;
        local_70 = local_4c;
        pfVar5 = local_80 + 8;
        local_80[3] = local_50 + _DAT_005f5ad6;
        local_60[0] = local_54;
        local_80[(uint)bVar9 * -2 + 9] = local_80[(uint)bVar9 * -2 + 3];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        iVar4 = FUN_00557230(0x01E82168,local_80 + 0xb,pfVar5);
        if (iVar4 == 0) {
          PTR_DAT_006236b0 = &DAT_005f5a27;
        }
        else {
          PTR_DAT_006236b0 = &DAT_005f5a23;
        }
        FUN_00559220();
        _DAT_02c83364 = *(int *)(0x01E82168 + 0x15aeb8);
      }
    }
    else {
      PTR_DAT_006236b0 = &DAT_005f5a1f;
      _DAT_02c83364 = -1;
    }
    FUN_00572ac0();
    FUN_005729f0();
    FUN_00572980();
    iVar4 = FUN_005c04e0(PTR_DAT_006236b0,&DAT_005f5a2b);
    if (iVar4 == 0) {
      FUN_00573a80();
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar4 = FUN_005735a0();
      if (iVar4 == 0) {
        FUN_00572ac0();
        FUN_005728e0();
        _DAT_02c8336c = FUN_00572d20();
        FUN_00572b40();
      }
    }
    iVar4 = FUN_005735a0();
    if (iVar4 == 0) {
      FUN_00572ac0();
      FUN_005728e0();
      _DAT_02c83368 = FUN_00572d20();
      FUN_00572b40();
    }
    else {
      iVar4 = FUN_005c04e0(PTR_DAT_006236b4,PTR_DAT_006236b0);
      if (iVar4 != 0) {
        FUN_00573950(_DAT_02c83368,local_154 * (float)_DAT_005f5ade);
      }
    }
    FUN_00572b40();
    pfVar5 = (float *)&DAT_02c832b4;
    PTR_DAT_006236b4 = PTR_DAT_006236b0;
    _DAT_02c83354 = 0.0;
    _DAT_02c83358 = 0.0;
    _DAT_02c8335c = 30.0;
    local_28 = (float *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar4 = FUN_005735a0();
      pfVar3 = pfVar5;
      if (iVar4 != 0) {
        local_6c = _DAT_02c83354 * local_24;
        local_68 = _DAT_02c83358 * local_24;
        local_64 = _DAT_02c8335c * local_24;
        local_84 = _DAT_02c83354 * local_24;
        local_80[(uint)bVar9 * -2] = local_80[(uint)bVar9 * -2 + 6];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        *pfVar5 = *pfVar5 + local_84;
        pfVar5[1] = pfVar5[1] + local_80[0];
        pfVar5[2] = pfVar5[2] + local_80[1];
        pfVar3 = local_28;
        if ((float)_DAT_005f5af6 < ABS(*(float *)(&DAT_02c832bc + local_20))) {
          FUN_00573a80();
          pfVar3 = local_28;
        }
      }
      local_28 = pfVar3;
      local_1c = local_1c + 1;
      pfVar5 = pfVar5 + 4;
    } while (local_1c < 10);
    _DAT_02c83360 = _DAT_02c83360 - local_24;
    if ((_DAT_02c83360 <= 0.0) && (local_28 != (float *)0x0)) {
      _DAT_02c83360 = (float)FUN_0040cc00(0x3f800000,0x40a00000);
      puVar6 = &DAT_006238d8;
      pcVar8 = local_e8;
      local_18 = _DAT_02c83360;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      fVar10 = 1.0;
      iVar4 = FUN_005c084c(0x3f800000);
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar10 = local_154 * (float)_DAT_005f5aee;
        local_38 = 25.0;
        FUN_005bfb40(local_e8,"rail?%s.wav",PTR_DAT_006236b0,fVar10);
        break;
      case 2:
      case 3:
        fVar10 = local_154 * (float)_DAT_005f5ae6;
        pcVar7 = &DAT_005f5a55;
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
        goto switchD_0057d323_caseD_4;
      }
      *local_28 = 0.0;
      local_18 = (float)FUN_0040cc00(0xc0400000,0x40000000);
      fVar2 = local_18 * local_38 + _DAT_02c82a74;
      local_28[1] = 0.0;
      local_28[2] = fVar2;
      FUN_00572ac0();
      FUN_00572980();
      FUN_00572880();
      FUN_005bfb40(local_14c,"%s @ %g",local_e8,(double)fVar10);
      fVar10 = (float)FUN_0057d8d0(0x02C82A60,0,local_14c,local_28);
      local_28[3] = fVar10;
      FUN_00572b40();
    }
  }
switchD_0057d323_caseD_4:
  FUN_00577040();
  return;
}
