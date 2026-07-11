// Name: FUN_0052dff0
// Address: 0052dff0
// Address Range: [[0052dff0, 0052e84a]]
// Convention: unknown
// Signature: int FUN_0052dff0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052dff0(uint param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ushort extraout_var;
  ushort uVar5;
  float *pfVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  float fVar11;
  float local_13c;
  float local_138;
  byte local_134 [100];
  char local_d0 [100];
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  float local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  float local_18;
  float local_14;
  
  bVar10 = 0;
  local_3c = *(float *)(0x01C775EC + 0x264);
  local_20 = local_3c * (float)_DAT_00594b86;
  local_30 = local_3c;
  FUN_0052c9d0();
  local_38 = -local_20;
  local_24 = _DAT_02dc9468 - _DAT_02dc946c;
  if (local_24 < local_38) {
    local_24 = local_38;
  }
  if (local_20 < local_24) {
    local_24 = local_20;
  }
  _DAT_02dc946c = _DAT_02dc946c + local_24;
  if (_DAT_02dc946c <= (float)_DAT_00594b8e) {
    FUN_0052ebb0(param_1,_DAT_02dc9454);
    _DAT_02dc946c = 0.0;
  }
  else {
    iVar3 = FUN_0052eba0(param_1,_DAT_02dc9454);
    if (iVar3 == 0) {
      _DAT_02dc9454 = FUN_005265a0();
    }
    FUN_005270d0(_DAT_02dc9454,_DAT_02dc946c);
  }
  local_138 = 0.0;
  if (((0.0 < *(float *)(0x02DD1210 + 0xc)) &&
      (iVar3 = FUN_00564bc0(0x01E57284 + 0x14cd08,&DAT_00594b73,4), iVar3 == 0)) &&
     (local_138 = SQRT(*(float *)(0x02DD1210 + 0xc)) * (float)_DAT_00594b96 + (float)_DAT_00594b9e
     , (float)_DAT_00594ba6 < local_138)) {
    local_138 = 0.7;
  }
  local_34 = -local_20;
  local_28 = local_138 - _DAT_02dc9470;
  if (local_28 < local_34) {
    local_28 = local_34;
  }
  if (local_20 < local_28) {
    local_28 = local_20;
  }
  _DAT_02dc9470 = _DAT_02dc9470 + local_28;
  if (_DAT_02dc9470 <= (float)_DAT_00594b8e) {
    FUN_0052ebb0(param_1,_DAT_02dc9458);
    _DAT_02dc9470 = 0.0;
  }
  else {
    iVar3 = FUN_0052eba0(param_1,_DAT_02dc9458);
    if (iVar3 == 0) {
      _DAT_02dc9458 = FUN_005265a0();
    }
    FUN_005270d0(_DAT_02dc9458,_DAT_02dc9470);
  }
  if (_DAT_02dc9ca0 <= local_30) {
    _DAT_02dc9c98 = _DAT_02dc9c9c;
    _DAT_02dc9ca0 = 0.0;
  }
  else {
    fVar11 = local_30 / _DAT_02dc9ca0;
    _DAT_02dc9ca0 = _DAT_02dc9ca0 - local_30;
    _DAT_02dc9c98 = fVar11 * (_DAT_02dc9c9c - _DAT_02dc9c98) + _DAT_02dc9c98;
  }
  iVar3 = FUN_00527490();
  if (iVar3 == 0) {
    FUN_00527410(3,0);
  }
  else {
    FUN_00527410(3,1);
    local_14 = (float)FUN_00527380();
    FUN_005272e0(3,local_14 * _DAT_02dc9c98);
  }
  iVar3 = 0x01E57284;
  if (*(int *)(0x01E57284 + 0x15a8c0) != 0) {
    local_18 = *(float *)(0x01C775EC + 0x264);
    if (*(int *)(0x01C775EC + 0x240) == 0) {
      if (_DAT_02dc9d54 != *(int *)(0x01E57284 + 0x15aabc)) {
        FUN_00511750();
        FUN_005117e0();
        local_54 = _DAT_02dc945c;
        local_50 = _DAT_02dc9460;
        local_4c = _DAT_02dc9464;
        local_68 = 0x41a00000;
        local_48 = _DAT_02dc945c;
        local_6c = 0;
        local_40 = _DAT_02dc9464;
        local_64 = 0;
        local_44 = _DAT_02dc9460 + _DAT_00594bae;
        iVar3 = FUN_0050fa30(0x01E57284,&local_54,&local_48);
        if (iVar3 == 0) {
          PTR_DAT_005bed60 = &DAT_00594aff;
        }
        else {
          PTR_DAT_005bed60 = &DAT_00594afb;
        }
        FUN_00511750();
        _DAT_02dc9d54 = *(int *)(0x01E57284 + 0x15aabc);
      }
    }
    else {
      _DAT_02dc9d54 = -1;
      PTR_DAT_005bed60 = &DAT_00594af7;
    }
    FUN_00526340();
    FUN_00526240();
    FUN_005261b0();
    iVar3 = FUN_00564520(PTR_DAT_005bed60,&DAT_00594b03);
    if (iVar3 == 0) {
      FUN_00527230();
      local_13c = 0.4;
    }
    else {
      iVar3 = FUN_00526c50();
      local_13c = 0.7;
      if (iVar3 == 0) {
        FUN_00526340();
        FUN_005260f0();
        _DAT_02dc9d5c = FUN_005265a0();
        FUN_005263c0();
      }
    }
    iVar3 = FUN_00526c50();
    if (iVar3 == 0) {
      FUN_00526340();
      FUN_005260f0();
      _DAT_02dc9d58 = FUN_005265a0();
      FUN_005263c0();
    }
    else {
      iVar3 = FUN_00564520(PTR_DAT_005bed64,PTR_DAT_005bed60);
      if (iVar3 != 0) {
        FUN_005270d0(_DAT_02dc9d58,local_13c * (float)_DAT_00594bb6);
      }
    }
    FUN_005263c0();
    pfVar6 = (float *)&DAT_02dc9ca4;
    iVar3 = 0;
    PTR_DAT_005bed64 = PTR_DAT_005bed60;
    _DAT_02dc9d44 = 0.0;
    _DAT_02dc9d48 = 0.0;
    _DAT_02dc9d4c = 30.0;
    local_1c = (float *)0x0;
    do {
      iVar4 = FUN_00526c50();
      if (iVar4 == 0) {
        uVar5 = 0;
        local_1c = pfVar6;
      }
      else {
        local_60 = _DAT_02dc9d44 * local_18;
        local_5c = _DAT_02dc9d48 * local_18;
        local_58 = _DAT_02dc9d4c * local_18;
        *pfVar6 = *pfVar6 + local_60;
        pfVar6[1] = pfVar6[1] + local_5c;
        pfVar6[2] = pfVar6[2] + local_58;
        uVar5 = (ushort)((uint)iVar4 >> 0x10);
        if ((float)_DAT_00594bce < ABS(*(float *)(&DAT_02dc9cac + iVar3 * 0x10))) {
          FUN_00527230();
          uVar5 = extraout_var;
        }
      }
      iVar3 = iVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (iVar3 < 10);
    _DAT_02dc9d50 = _DAT_02dc9d50 - local_18;
    iVar3 = CONCAT22(uVar5,(ushort)(0.0 < _DAT_02dc9d50) << 8 | (ushort)NAN(_DAT_02dc9d50) << 10 |
                           (ushort)(_DAT_02dc9d50 == 0.0) << 0xe);
    if ((0.0 >= _DAT_02dc9d50) && (local_1c != (float *)0x0)) {
      _DAT_02dc9d50 = (float)FUN_0040dda0(0x3f800000,0x40a00000);
      local_2c = 20.0;
      puVar8 = &DAT_005bef88;
      pcVar9 = local_d0;
      local_14 = _DAT_02dc9d50;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      iVar4 = FUN_0056488c();
      iVar3 = iVar4 / 5;
      fVar11 = 1.0;
      switch(iVar4 % 5) {
      case 0:
      case 1:
        fVar11 = local_13c * (float)_DAT_00594bc6;
        local_2c = 25.0;
        FUN_00563c90(local_d0,"rail?%s.wav",PTR_DAT_005bed60,fVar11);
        break;
      case 2:
      case 3:
        fVar11 = local_13c * (float)_DAT_00594bbe;
        pcVar7 = &DAT_00594b2d;
        local_2c = 20.0;
        pcVar9 = local_d0;
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
        goto switchD_0052e844_caseD_4;
      }
      *local_1c = 0.0;
      local_14 = (float)FUN_0040dda0(0xc0400000,0x40000000,fVar11);
      fVar2 = local_14 * local_2c + _DAT_02dc9464;
      local_1c[1] = 0.0;
      local_1c[2] = fVar2;
      FUN_00526340();
      FUN_005261b0();
      FUN_00526090();
      FUN_00563c90(local_134,"%s @ %g",local_d0,(double)fVar11);
      fVar11 = (float)FUN_0052ea90(0x02DC9450,0,local_134,local_1c);
      local_1c[3] = fVar11;
      iVar3 = FUN_005263c0();
      return iVar3;
    }
  }
switchD_0052e844_caseD_4:
  return iVar3;
}
