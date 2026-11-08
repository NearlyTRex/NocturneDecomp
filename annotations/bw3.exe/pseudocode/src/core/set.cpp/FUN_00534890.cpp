// Name: FUN_00534890
// Address: 00534890
// Address Range: [[00534890, 00535354]]
// Convention: unknown
// Signature: void FUN_00534890(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534890(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_10b0 [939];
  int aiStack_1f8 [24];
  byte local_198 [80];
  uint local_148 [10];
  uint local_120 [10];
  uint local_f8 [6];
  uint local_e0 [6];
  uint uStack_c8;
  float afStack_c4 [5];
  float local_b0;
  float local_ac;
  uint local_a8;
  float local_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float afStack_70 [4];
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c [4];
  uint local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *piStack_14;
  
  bVar11 = 0;
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x484;
    FUN_004e4330("CDemonSet::setCameraView - invalid index: %d",param_2);
  }
  iVar3 = 0;
  if (0 < _DAT_0203ad1c) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(iVar5 + 0x203ad20);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      FUN_0045ca30(*puVar6);
    } while (iVar3 < _DAT_0203ad1c);
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      FUN_0045ca30(*puVar6);
    } while (iVar3 < _DAT_0203a598);
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      FUN_0045c500(*puVar6);
    } while (iVar3 < _DAT_0203a598);
  }
  FUN_0045c470();
  param_1[0x56bb0] = 0x3f000000;
  param_1[0x56b24] = 1;
  iVar3 = 0;
  param_1[0x57dbe] = 1;
  _DAT_0203a598 = 0;
  param_1[0x56baf] = param_1[0x56bae];
  _DAT_0203b3e8 = 0;
  param_1[0x56bae] = param_2;
  _DAT_0203ad30 = 0;
  _DAT_0203aec4 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x53459]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_00534820(param_1,piVar4[0x5345a]);
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[0x53459]);
  }
  if (param_1[param_2 * 0x69 + 0x51] == 0) {
    piVar8 = param_1 + param_2 * 0x69 + 1;
    FUN_00541fb0(piVar8,0x2038f4c);
    piVar4 = param_1 + 0x56b1c;
    if (param_1[param_2 * 0x69 + 0x55] == 0) {
      param_1[0x56b19] = piVar8[0x55];
      param_1[0x56b1a] = piVar8[0x56];
      param_1[0x56b1b] = piVar8[0x57];
      if (piVar4 != piVar8 + 0x58) {
        *piVar4 = piVar8[0x58];
        param_1[0x56b1d] = piVar8[0x59];
        param_1[0x56b1e] = piVar8[0x5a];
      }
      param_1[0x56b1f] = piVar8[0x5b];
      param_1[0x56b20] = piVar8[0x5c];
      param_1[0x56b21] = piVar8[0x5d];
    }
    else {
      param_1[0x56b19] = param_1[0x56b10];
      param_1[0x56b1a] = param_1[0x56b11];
      param_1[0x56b1b] = param_1[0x56b12];
      if (piVar4 != param_1 + 0x56b13) {
        *piVar4 = param_1[0x56b13];
        param_1[0x56b1d] = param_1[0x56b14];
        param_1[0x56b1e] = param_1[0x56b15];
      }
      param_1[0x56b1f] = param_1[0x56b16];
      param_1[0x56b20] = param_1[0x56b17];
      param_1[0x56b21] = param_1[0x56b18];
    }
    FUN_004503f0(0x2038f4c,param_1 + 0x56b19);
    _DAT_0203b37c = 0;
    FUN_00448ff0(0x2038f4c,0);
    FUN_00449840(0x2038f4c);
    FUN_00539f30(param_1,0x10);
    FUN_00533b80(param_1,0x461c3f9a,1);
    FUN_00451250(0x2038f4c);
    _DAT_0207baa4 = 1;
    FUN_005346b0(param_1,1);
    _DAT_0207baa4 = 0;
    FUN_0044b070(0x2038f4c);
    FUN_004512a0(0x2038f4c);
    FUN_005a28c0(local_198,"%s.raw",param_1 + param_2 * 0x69 + 1);
    FUN_0044c130(0x2038f4c,local_198);
    FUN_005346b0(param_1,1);
    FUN_00449a00(0x2038f4c,0);
    if (_DAT_01c6cee8 != 0) {
      FUN_00533b80(param_1,0x461c3f9a,0);
      if (*0x02CFD950 == 0) {
        FUN_00577760(0x02CFD950,0);
      }
      FUN_005346b0(param_1,1);
    }
    FUN_00449750(0x2038f4c,0);
  }
  if (param_1[0x56b25] == 0) {
    iVar3 = 0;
    if (0 < param_1[0x668b]) {
      local_2c = param_2 << 4;
      local_24 = param_1 + 0x668c;
      piVar4 = param_1;
      iVar5 = 0;
      do {
        if ((piVar4[0x668c] == 1) && (*(char *)(param_2 + 0x19b58 + (int)piVar4) != '\0')) {
          *(int **)(&DAT_0203b3ec + _DAT_0203b3e8 * 4) = local_24 + iVar3 * 0x626;
          _DAT_0203b3e8 = _DAT_0203b3e8 + 1;
          if (199 < _DAT_0203b3e8) {
            _DAT_01d71de0 = "..\\core\\set.cpp";
            _DAT_01d71de4 = 0x50e;
            FUN_004e4330("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar2 = _DAT_0203a598;
        iVar9 = iVar5;
        if ((piVar4[0x668c] == 0) &&
           (iVar9 = iVar5 + 1, *(char *)(param_2 + 0x19b58 + (int)piVar4) != '\0')) {
          *(uint *)(&DAT_0203a59c + _DAT_0203a598 * 4) =
               *(uint *)(&DAT_0203a418 + iVar5 * 4);
          puVar6 = (uint *)(local_2c + 0x19c54 + (int)piVar4);
          puVar10 = (uint *)(iVar2 * 0x10 + 0x203a720 + (uint)bVar11 * -8);
          puVar7 = puVar6 + (uint)bVar11 * -2 + 1;
          *(uint *)(iVar2 * 0x10 + 0x203a71c) = *puVar6;
          puVar6 = puVar10 + (uint)bVar11 * -2 + 1;
          *puVar10 = *puVar7;
          *puVar6 = puVar7[(uint)bVar11 * -2 + 1];
          puVar6[(uint)bVar11 * -2 + 1] = (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          _DAT_0203a598 = _DAT_0203a598 + 1;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x626;
        iVar5 = iVar9;
      } while (iVar3 < param_1[0x668b]);
    }
    FUN_00539c50(param_1);
    iVar3 = 0;
    if (0 < _DAT_0203a598) {
      iVar9 = 0x203a71c;
      local_28 = param_1 + param_2 * 0x69;
      iVar5 = 0;
      do {
        uVar1 = *(uint *)(&DAT_0203a59c + iVar5);
        FUN_0045c480(uVar1);
        FUN_0045c530(uVar1,1);
        FUN_0045c8f0(uVar1);
        FUN_005346b0(param_1,1);
        FUN_0045c9e0(uVar1);
        FUN_0045c7e0(uVar1,0);
        FUN_0045ca30(uVar1);
        if (local_28[0x51] == 0) {
          FUN_0044aa20(0x2038f4c,uVar1,iVar9);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar3 < _DAT_0203a598);
    }
    FUN_0044af70(0x2038f4c,param_1 + 0x53455,param_1[0x53458]);
  }
  param_1[0x56b24] = 0;
  iVar3 = param_1[param_2 * 0x69 + 0x51];
  if (iVar3 == 0) {
    FUN_00448ff0(0x2038f4c,1);
    FUN_00449840(0x2038f4c);
    _DAT_01c6e24c = iVar3;
    if (param_1[0x58590] != 0) {
      FUN_0046f480(0x01C0B558,param_1 + 0x58591,param_1[0x58599]);
    }
    FUN_005346b0(param_1,1);
    FUN_004ce630(0x01D22E44,1,1);
    FUN_004a1e90(0x01C73654,1,1);
    if (*0x02CFD950 == 0) {
      FUN_00577760(0x02CFD950,0);
    }
    FUN_00449a00(0x2038f4c,0);
    FUN_00449750(0x2038f4c,0);
  }
  param_1[0x57dbe] = 0;
  FUN_00535a80(param_1);
  if (param_1[param_2 * 0x69 + 0x55] == 0) {
    iVar3 = param_1[param_2 * 0x69 + 0x5f];
  }
  else {
    iVar3 = param_1[0x56b23];
  }
  FUN_00560c30(0x02CF5680,iVar3);
  afStack_a0[2] = (float)_DAT_02038f50;
  afStack_a0[(uint)bVar11 * -2 + 3] = *(float *)(&DAT_02038f54 + (uint)bVar11 * -8);
  afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       *(float *)(&DAT_02038f58 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  local_4c[2] = afStack_a0[2];
  local_4c[(uint)bVar11 * -2 + 3] = afStack_a0[(uint)bVar11 * -2 + 3];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (afStack_70 + 5 != local_4c + 2) {
    local_5c = local_4c[2];
    local_58 = local_4c[3];
    local_54 = local_3c;
  }
  puVar6 = (uint *)&DAT_02038f5c;
  puVar7 = local_148;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
  }
  puVar6 = local_148;
  puVar7 = local_120;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
  }
  FUN_0045b9b0(local_120);
  local_50 = local_a4;
  local_4c[(uint)bVar11 * -2] = afStack_a0[(uint)bVar11 * -2];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if (afStack_c4 + 5 != &local_50) {
    local_b0 = local_50;
    local_ac = local_4c[0];
    local_a8 = local_4c[1];
  }
  FUN_0057d1a0(0x02D0C1A0,afStack_70 + 5,afStack_c4 + 5);
  iVar3 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x53459]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_00534820(param_1,piVar4[0x5345a]);
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[0x53459]);
  }
  local_1c = 0;
  if (0 < param_1[0x53459]) {
    local_20 = param_1;
    do {
      local_18 = local_20[0x5345a];
      if ((*(int *)(local_18 + 0xfc) != 0) || (*(int *)(local_18 + 0xf8) != 0)) {
        (**(code **)(*(int *)(local_18 + 0x154) + 0x1c))(local_18);
        iVar5 = 0;
        piStack_14 = aiStack_1f8;
        puVar6 = local_f8;
        puVar7 = local_e0;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        }
        do {
          FUN_0041d8b0(local_e0,iVar5);
          uStack_c8 = uStack_74;
          afStack_c4[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
          afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          FUN_00408b80(local_18,&uStack_c8);
          fStack_8c = afStack_c4[2];
          afStack_a0[(uint)bVar11 * -2 + 6] = afStack_c4[(uint)bVar11 * -2 + 3];
          afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          *piStack_14 = (int)ROUND(fStack_8c * _DAT_005e3bc0);
          piStack_14[1] = (int)ROUND(fStack_88 * _DAT_005e3bc0);
          piStack_14[2] = (int)ROUND(fStack_84 * _DAT_005e3bc0);
          iVar5 = iVar5 + 1;
          piStack_14 = piStack_14 + 3;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_1c < param_1[0x53459]);
  }
  _DAT_0207bad4 = 1;
  afStack_70[2] = (float)param_1[0x53455] * (float)param_1[0x53458];
  afStack_70[3] = (float)param_1[0x53456] * (float)param_1[0x53458];
  local_60 = (float)param_1[0x53457] * (float)param_1[0x53458];
  local_38 = (float)param_1[0x53455] * (float)param_1[0x53458];
  local_4c[(uint)bVar11 * -2 + 6] = afStack_70[(uint)bVar11 * -2 + 3];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (afStack_a0 + 8 != local_4c + 5) {
    local_80 = local_38;
    fStack_7c = fStack_34;
    fStack_78 = fStack_30;
  }
  _DAT_0207baac = (int)ROUND(local_80 * _DAT_005e3bc4);
  _DAT_0207bab0 = (int)ROUND(fStack_7c * _DAT_005e3bc4);
  _DAT_0207bab4 = (int)ROUND(fStack_78 * _DAT_005e3bc4);
  return;
}
