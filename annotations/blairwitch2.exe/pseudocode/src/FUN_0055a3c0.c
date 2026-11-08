// Name: FUN_0055a3c0
// Address: 0055a3c0
// Address Range: [[0055a3c0, 0055ac44]]
// Convention: unknown
// Signature: int FUN_0055a3c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0055a3c0(uint param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  ushort extraout_var;
  ushort uVar5;
  int iVar4;
  float *pfVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  float afStackY_106c [960];
  float fVar11;
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
  
  bVar10 = 0;
  local_48 = *(float *)(0x01CB6900 + 0x284);
  local_2c = local_48 * (float)_DAT_005ea8b4;
  local_3c = local_48;
  FUN_00558d50();
  local_40 = -local_2c;
  local_30 = _DAT_0264b2a8 - _DAT_0264b2ac;
  if (local_30 < local_40) {
    local_30 = local_40;
  }
  if (local_2c < local_30) {
    local_30 = local_2c;
  }
  _DAT_0264b2ac = _DAT_0264b2ac + local_30;
  if (_DAT_0264b2ac <= (float)_DAT_005ea8bc) {
    FUN_0055af80(param_1,_DAT_0264b294);
    _DAT_0264b2ac = 0.0;
  }
  else {
    iVar3 = FUN_0055af70(param_1,_DAT_0264b294);
    if (iVar3 == 0) {
      _DAT_0264b294 = FUN_005506b0();
    }
    FUN_00550f20(_DAT_0264b294,_DAT_0264b2ac);
  }
  local_150 = 0.0;
  if (((0.0 < *(float *)(0x02653790 + 0xc)) &&
      (iVar3 = FUN_005b8da0(0x01E661B8 + 0x14d0f0,&DAT_005ea8a1,4), iVar3 == 0)) &&
     (local_150 = SQRT(*(float *)(0x02653790 + 0xc)) * (float)_DAT_005ea8c4 + (float)_DAT_005ea8cc
     , (float)_DAT_005ea8d4 < local_150)) {
    local_150 = 0.7;
  }
  local_44 = -local_2c;
  local_34 = local_150 - _DAT_0264b2b0;
  if (local_34 < local_44) {
    local_34 = local_44;
  }
  if (local_2c < local_34) {
    local_34 = local_2c;
  }
  _DAT_0264b2b0 = _DAT_0264b2b0 + local_34;
  if (_DAT_0264b2b0 <= (float)_DAT_005ea8bc) {
    FUN_0055af80(param_1,_DAT_0264b298);
    _DAT_0264b2b0 = 0.0;
  }
  else {
    iVar3 = FUN_0055af70(param_1,_DAT_0264b298);
    if (iVar3 == 0) {
      _DAT_0264b298 = FUN_005506b0();
    }
    FUN_00550f20(_DAT_0264b298,_DAT_0264b2b0);
  }
  if (_DAT_0264bae0 <= local_3c) {
    _DAT_0264bad8 = _DAT_0264badc;
    _DAT_0264bae0 = 0.0;
  }
  else {
    fVar11 = local_3c / _DAT_0264bae0;
    _DAT_0264bae0 = _DAT_0264bae0 - local_3c;
    _DAT_0264bad8 = fVar11 * (_DAT_0264badc - _DAT_0264bad8) + _DAT_0264bad8;
  }
  iVar3 = FUN_005512a0();
  if (iVar3 == 0) {
    FUN_00551220(3,0);
  }
  else {
    FUN_00551220(3,1);
    local_18 = (float)FUN_00551190();
    FUN_00551100(3,local_18 * _DAT_0264bad8);
  }
  iVar3 = 0x01E661B8;
  if (*(int *)(0x01E661B8 + 0x15acb8) != 0) {
    local_24 = *(float *)(0x01CB6900 + 0x284);
    if (*(int *)(0x01CB6900 + 0x25c) == 0) {
      if (_DAT_0264bb94 != *(int *)(0x01E661B8 + 0x15aeb8)) {
        FUN_00537e00();
        FUN_00537e90();
        local_54 = (float)_DAT_0264b29c;
        local_80[(uint)bVar10 * -2 + 0xc] = *(float *)(&DAT_0264b2a0 + (uint)bVar10 * -8);
        local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             *(float *)(&DAT_0264b2a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        local_80[2] = local_54;
        local_70 = local_4c;
        pfVar6 = local_80 + 8;
        local_80[3] = local_50 + _DAT_005ea8dc;
        local_60[0] = local_54;
        local_80[(uint)bVar10 * -2 + 9] = local_80[(uint)bVar10 * -2 + 3];
        local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        iVar3 = FUN_00535e10(0x01E661B8,local_80 + 0xb,pfVar6);
        if (iVar3 == 0) {
          PTR_DAT_0061c060 = &DAT_005ea82d;
        }
        else {
          PTR_DAT_0061c060 = &DAT_005ea829;
        }
        FUN_00537e00();
        _DAT_0264bb94 = *(int *)(0x01E661B8 + 0x15aeb8);
      }
    }
    else {
      PTR_DAT_0061c060 = &DAT_005ea825;
      _DAT_0264bb94 = -1;
    }
    FUN_00550450();
    FUN_00550380();
    FUN_00550310();
    iVar3 = FUN_005b8130(PTR_DAT_0061c060,&DAT_005ea831);
    if (iVar3 == 0) {
      FUN_00551050();
      local_154 = 0.4;
    }
    else {
      local_154 = 0.7;
      iVar3 = FUN_00550b70();
      if (iVar3 == 0) {
        FUN_00550450();
        FUN_00550270();
        _DAT_0264bb9c = FUN_005506b0();
        FUN_005504d0();
      }
    }
    iVar3 = FUN_00550b70();
    if (iVar3 == 0) {
      FUN_00550450();
      FUN_00550270();
      _DAT_0264bb98 = FUN_005506b0();
      FUN_005504d0();
    }
    else {
      iVar3 = FUN_005b8130(PTR_DAT_0061c064,PTR_DAT_0061c060);
      if (iVar3 != 0) {
        FUN_00550f20(_DAT_0264bb98,local_154 * (float)_DAT_005ea8e4);
      }
    }
    FUN_005504d0();
    pfVar6 = (float *)&DAT_0264bae4;
    PTR_DAT_0061c064 = PTR_DAT_0061c060;
    _DAT_0264bb84 = 0.0;
    _DAT_0264bb88 = 0.0;
    _DAT_0264bb8c = 30.0;
    local_28 = (float *)0x0;
    local_1c = 0;
    do {
      local_20 = local_1c * 0x10;
      iVar3 = FUN_00550b70();
      if (iVar3 == 0) {
        uVar5 = 0;
        local_28 = pfVar6;
      }
      else {
        local_6c = _DAT_0264bb84 * local_24;
        local_68 = _DAT_0264bb88 * local_24;
        local_64 = _DAT_0264bb8c * local_24;
        local_84 = _DAT_0264bb84 * local_24;
        local_80[(uint)bVar10 * -2] = local_80[(uint)bVar10 * -2 + 6];
        local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             local_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        *pfVar6 = *pfVar6 + local_84;
        pfVar6[1] = pfVar6[1] + local_80[0];
        pfVar6[2] = pfVar6[2] + local_80[1];
        uVar5 = (ushort)((uint)local_20 >> 0x10);
        if ((float)_DAT_005ea8fc < ABS(*(float *)(&DAT_0264baec + local_20))) {
          FUN_00551050();
          uVar5 = extraout_var;
        }
      }
      local_1c = local_1c + 1;
      pfVar6 = pfVar6 + 4;
    } while (local_1c < 10);
    _DAT_0264bb90 = _DAT_0264bb90 - local_24;
    iVar3 = CONCAT22(uVar5,(ushort)(0.0 < _DAT_0264bb90) << 8 | (ushort)NAN(_DAT_0264bb90) << 10 |
                           (ushort)(_DAT_0264bb90 == 0.0) << 0xe);
    if ((0.0 >= _DAT_0264bb90) && (local_28 != (float *)0x0)) {
      _DAT_0264bb90 = (float)FUN_0040cf60(0x3f800000,0x40a00000);
      puVar8 = &DAT_0061c288;
      pcVar9 = local_e8;
      local_18 = _DAT_0264bb90;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      local_38 = 20.0;
      fVar11 = 1.0;
      iVar4 = FUN_005b849c(0x3f800000);
      iVar3 = iVar4 / 5;
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar11 = local_154 * (float)_DAT_005ea8f4;
        local_38 = 25.0;
        FUN_005b7790(local_e8,"rail?%s.wav",PTR_DAT_0061c060,fVar11);
        break;
      case 2:
      case 3:
        fVar11 = local_154 * (float)_DAT_005ea8ec;
        pcVar7 = &DAT_005ea85b;
        pcVar9 = local_e8;
        local_38 = 20.0;
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        break;
      case 4:
        goto switchD_0055ac3e_caseD_4;
      }
      *local_28 = 0.0;
      local_18 = (float)FUN_0040cf60(0xc0400000,0x40000000);
      fVar2 = local_18 * local_38 + _DAT_0264b2a4;
      local_28[1] = 0.0;
      local_28[2] = fVar2;
      FUN_00550450();
      FUN_00550310();
      FUN_00550210();
      FUN_005b7790(local_14c,"%s @ %g",local_e8,(double)fVar11);
      fVar11 = (float)FUN_0055ae80(0x0264B290,0,local_14c,local_28);
      local_28[3] = fVar11;
      iVar3 = FUN_005504d0();
      return iVar3;
    }
  }
switchD_0055ac3e_caseD_4:
  return iVar3;
}
