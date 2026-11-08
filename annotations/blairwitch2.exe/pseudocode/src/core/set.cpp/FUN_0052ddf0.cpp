// Name: FUN_0052ddf0
// Address: 0052ddf0
// Address Range: [[0052ddf0, 0052e8b4]]
// Convention: unknown
// Signature: void FUN_0052ddf0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ddf0(int *param_1,int param_2)

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
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x477;
    FUN_004e4500("CDemonSet::setCameraView - invalid index: %d",param_2);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc9608) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(iVar5 + 0x1fc960c);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      FUN_0044a520(*puVar6);
    } while (iVar3 < _DAT_01fc9608);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      FUN_0044a520(*puVar6);
    } while (iVar3 < _DAT_01fc8e84);
  }
  iVar3 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      FUN_00449ff0(*puVar6);
    } while (iVar3 < _DAT_01fc8e84);
  }
  FUN_00449f60();
  param_1[0x56bb0] = 0x3f000000;
  param_1[0x56b24] = 1;
  iVar3 = 0;
  param_1[0x57dbd] = 1;
  _DAT_01fc8e84 = 0;
  param_1[0x56baf] = param_1[0x56bae];
  _DAT_01fc9cd4 = 0;
  param_1[0x56bae] = param_2;
  _DAT_01fc961c = 0;
  _DAT_01fc97b0 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x53459]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_0052dd80(param_1,piVar4[0x5345a]);
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[0x53459]);
  }
  if (param_1[param_2 * 0x69 + 0x51] == 0) {
    piVar8 = param_1 + param_2 * 0x69 + 1;
    FUN_0053ad20(piVar8,0x1fc7838);
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
    FUN_00442bf0(0x1fc7838,param_1 + 0x56b19);
    _DAT_01fc9c68 = 0;
    FUN_0043b7f0(0x1fc7838,0);
    FUN_0043c040(0x1fc7838);
    FUN_005332f0(param_1,0x10);
    FUN_0052d0e0(param_1,0x461c3f9a,1);
    FUN_00443a50(0x1fc7838);
    _DAT_0200a390 = 1;
    FUN_0052dc10(param_1,1);
    _DAT_0200a390 = 0;
    FUN_0043d870(0x1fc7838);
    FUN_00443aa0(0x1fc7838);
    FUN_005b7790(local_198,"%s.raw",param_1 + param_2 * 0x69 + 1);
    FUN_0043e930(0x1fc7838,local_198);
    FUN_0052dc10(param_1,1);
    FUN_0043c200(0x1fc7838,0);
    if (_DAT_01c37788 != 0) {
      FUN_0052d0e0(param_1,0x461c3f9a,0);
      if (*0x02653790 == 0) {
        FUN_005862e0(0x02653790,0);
      }
      FUN_0052dc10(param_1,1);
    }
    FUN_0043bf50(0x1fc7838,0);
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
          *(int **)(&DAT_01fc9cd8 + _DAT_01fc9cd4 * 4) = local_24 + iVar3 * 0x626;
          _DAT_01fc9cd4 = _DAT_01fc9cd4 + 1;
          if (199 < _DAT_01fc9cd4) {
            _DAT_01d046a0 = "..\\core\\set.cpp";
            _DAT_01d046a4 = 0x501;
            FUN_004e4500("CDemonSet::setCameraView - Too many omni lights");
          }
        }
        iVar2 = _DAT_01fc8e84;
        iVar9 = iVar5;
        if ((piVar4[0x668c] == 0) &&
           (iVar9 = iVar5 + 1, *(char *)(param_2 + 0x19b58 + (int)piVar4) != '\0')) {
          *(uint *)(&DAT_01fc8e88 + _DAT_01fc8e84 * 4) =
               *(uint *)(&DAT_01fc8d04 + iVar5 * 4);
          puVar6 = (uint *)(local_2c + 0x19c54 + (int)piVar4);
          puVar10 = (uint *)(iVar2 * 0x10 + 0x1fc900c + (uint)bVar11 * -8);
          puVar7 = puVar6 + (uint)bVar11 * -2 + 1;
          *(uint *)(iVar2 * 0x10 + 0x1fc9008) = *puVar6;
          puVar6 = puVar10 + (uint)bVar11 * -2 + 1;
          *puVar10 = *puVar7;
          *puVar6 = puVar7[(uint)bVar11 * -2 + 1];
          puVar6[(uint)bVar11 * -2 + 1] = (puVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          _DAT_01fc8e84 = _DAT_01fc8e84 + 1;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x626;
        iVar5 = iVar9;
      } while (iVar3 < param_1[0x668b]);
    }
    FUN_00533010(param_1);
    iVar3 = 0;
    if (0 < _DAT_01fc8e84) {
      iVar9 = 0x1fc9008;
      local_28 = param_1 + param_2 * 0x69;
      iVar5 = 0;
      do {
        uVar1 = *(uint *)(&DAT_01fc8e88 + iVar5);
        FUN_00449f70(uVar1);
        FUN_0044a020(uVar1,1);
        FUN_0044a3e0(uVar1);
        FUN_0052dc10(param_1,1);
        FUN_0044a4d0(uVar1);
        FUN_0044a2d0(uVar1,0);
        FUN_0044a520(uVar1);
        if (local_28[0x51] == 0) {
          FUN_0043d220(0x1fc7838,uVar1,iVar9);
        }
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar3 < _DAT_01fc8e84);
    }
    FUN_0043d770(0x1fc7838,param_1 + 0x53455,param_1[0x53458]);
  }
  param_1[0x56b24] = 0;
  iVar3 = param_1[param_2 * 0x69 + 0x51];
  if (iVar3 == 0) {
    FUN_0043b7f0(0x1fc7838,1);
    FUN_0043c040(0x1fc7838);
    _DAT_01c38aec = iVar3;
    if (param_1[0x5858f] != 0) {
      FUN_0046e410(0x01BD3A00,param_1 + 0x58590,param_1[0x58598]);
    }
    FUN_0052dc10(param_1,1);
    FUN_004c94c0(0x01CB8284,1,1);
    FUN_0049cb50(0x01C3DEB4,1,1);
    if (*0x02653790 == 0) {
      FUN_005862e0(0x02653790,0);
    }
    FUN_0043c200(0x1fc7838,0);
    FUN_0043bf50(0x1fc7838,0);
  }
  param_1[0x57dbd] = 0;
  FUN_0052ef80(param_1);
  if (param_1[param_2 * 0x69 + 0x55] == 0) {
    iVar3 = param_1[param_2 * 0x69 + 0x5f];
  }
  else {
    iVar3 = param_1[0x56b23];
  }
  FUN_0055b0b0(0x0264B290,iVar3);
  afStack_a0[2] = (float)_DAT_01fc783c;
  afStack_a0[(uint)bVar11 * -2 + 3] = *(float *)(&DAT_01fc7840 + (uint)bVar11 * -8);
  afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       *(float *)(&DAT_01fc7844 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  local_4c[2] = afStack_a0[2];
  local_4c[(uint)bVar11 * -2 + 3] = afStack_a0[(uint)bVar11 * -2 + 3];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  if (afStack_70 + 5 != local_4c + 2) {
    local_5c = local_4c[2];
    local_58 = local_4c[3];
    local_54 = local_3c;
  }
  puVar6 = (uint *)&DAT_01fc7848;
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
  FUN_004496e0(local_120);
  local_50 = local_a4;
  local_4c[(uint)bVar11 * -2] = afStack_a0[(uint)bVar11 * -2];
  local_4c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if (afStack_c4 + 5 != &local_50) {
    local_b0 = local_50;
    local_ac = local_4c[0];
    local_a8 = local_4c[1];
  }
  FUN_0058b4f0(0x02661F80,afStack_70 + 5,afStack_c4 + 5);
  iVar3 = 0;
  piVar4 = param_1;
  if (0 < param_1[0x53459]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_0052dd80(param_1,piVar4[0x5345a]);
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[0x53459]);
  }
  local_1c = 0;
  if (0 < param_1[0x53459]) {
    local_20 = param_1;
    do {
      local_18 = local_20[0x5345a];
      if ((*(int *)(local_18 + 0xfc) != 0) || (*(int *)(local_18 + 0xf8) != 0)) {
        (**(code **)(*(int *)(local_18 + 0x2b0) + 0x24))(local_18);
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
          FUN_0041a600(local_e0,iVar5);
          uStack_c8 = uStack_74;
          afStack_c4[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
          afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          FUN_00408d70(local_18,&uStack_c8);
          fStack_8c = afStack_c4[2];
          afStack_a0[(uint)bVar11 * -2 + 6] = afStack_c4[(uint)bVar11 * -2 + 3];
          afStack_a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          *piStack_14 = (int)ROUND(fStack_8c * _DAT_005fb210);
          piStack_14[1] = (int)ROUND(fStack_88 * _DAT_005fb210);
          piStack_14[2] = (int)ROUND(fStack_84 * _DAT_005fb210);
          iVar5 = iVar5 + 1;
          piStack_14 = piStack_14 + 3;
        } while (iVar5 < 8);
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_1c < param_1[0x53459]);
  }
  _DAT_0200a3b8 = 1;
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
  _DAT_0200a398 = (int)ROUND(local_80 * _DAT_005fb214);
  _DAT_0200a39c = (int)ROUND(fStack_7c * _DAT_005fb214);
  _DAT_0200a3a0 = (int)ROUND(fStack_78 * _DAT_005fb214);
  return;
}
