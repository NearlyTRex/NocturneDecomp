// Name: FUN_004efeb0
// Address: 004efeb0
// Address Range: [[004efeb0, 004f0350]]
// Convention: unknown
// Signature: float FUN_004efeb0(float *param_1,int param_2,int param_3,int param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004efeb0(float *param_1,int param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  float local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  byte local_bc [12];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  byte local_68 [12];
  uint local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  int local_18;
  
  local_98 = *param_1 - *param_5;
  local_94 = param_1[1] - param_5[1];
  local_90 = param_1[2] - param_5[2];
  pfVar1 = (float *)FUN_0054e4a0(local_68,&local_98);
  local_a4 = *pfVar1 / _DAT_0058cd47;
  local_9c = _DAT_0058cd4b * pfVar1[2];
  local_18 = 1;
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_a0 = -(pfVar1[1] * _DAT_0058cd4b);
  switch(param_2) {
  case 1:
    local_48 = 1.0;
    local_40 = 0;
    local_44 = 0;
    local_3c = 0x3f800000;
    break;
  case 2:
    local_48 = -1.0;
    local_88 = 0;
    local_8c = 0;
    local_84 = 0xbf800000;
    break;
  case 3:
    local_50 = 1.0;
    switch(param_3) {
    case 1:
      goto switchD_004eff7e_caseD_1;
    case 2:
      goto switchD_004eff7e_caseD_2;
    case 3:
      goto switchD_004eff7e_caseD_3;
    case 4:
      goto switchD_004eff7e_caseD_4;
    default:
      goto switchD_004eff7e_default;
    }
  case 4:
    local_d0 = 0;
    local_cc = 0;
    local_50 = -1.0;
    local_d4 = 0xbf800000;
    switch(param_3) {
    case 1:
      goto switchD_004eff7e_caseD_1;
    case 2:
      goto switchD_004eff7e_caseD_2;
    case 3:
      goto switchD_004eff7e_caseD_3;
    case 4:
      goto switchD_004eff7e_caseD_4;
    }
    goto switchD_004eff7e_default;
  }
  switch(param_3) {
  case 1:
switchD_004eff7e_caseD_1:
    local_74 = 0;
    local_70 = 0;
    local_48 = local_48 + 1.0;
    local_6c = 0x3f800000;
    goto LAB_004effab;
  case 2:
switchD_004eff7e_caseD_2:
    local_80 = 0;
    local_7c = 0;
    local_48 = local_48 + _DAT_0058cd4f;
    local_78 = 0xbf800000;
LAB_004effab:
    local_18 = 2;
    break;
  case 3:
switchD_004eff7e_caseD_3:
    local_18 = 2;
    local_c8 = 0x3f800000;
    local_c4 = 0;
    local_50 = local_50 + 1.0;
    local_c0 = 0;
    break;
  case 4:
switchD_004eff7e_caseD_4:
    local_18 = 2;
    local_2c = 0xbf800000;
    local_28 = 0;
    local_50 = local_50 + _DAT_0058cd4f;
    local_24 = 0;
  }
switchD_004eff7e_default:
  if ((ABS(local_50) == 0.0) && (ABS(local_48) == 0.0)) {
    switch(param_2) {
    case 1:
      return local_a0;
    case 2:
      return local_a0 + (float)_DAT_0058cd87;
    case 3:
      return local_a0 + (float)_DAT_0058cd7f;
    case 4:
      return local_a0 + (float)_DAT_0058cd77;
    case 5:
      return local_a0 + (float)_DAT_0058cd6f;
    case 6:
      return local_a0 + (float)_DAT_0058cd67;
    case 7:
      return local_a0 + (float)_DAT_0058cd5f;
    case 8:
      return local_a0 + (float)_DAT_0058cd57;
    default:
      _DAT_01cc4800 = "..\\core\\path.cpp";
      _DAT_01cc4804 = 0x183;
      FUN_004c8440("CPathMap::getDirection - Should never get here either");
    }
  }
  if ((param_2 != param_4) && (param_4 != param_3)) goto switchD_004f0211_default;
  switch(param_4) {
  case 1:
    local_48 = local_48 + 1.0;
    goto LAB_004f0235;
  case 2:
    local_b0 = 0;
    local_ac = 0;
    local_48 = local_48 + _DAT_0058cd4f;
    local_a8 = 0xbf800000;
LAB_004f0235:
    local_18 = local_18 + 1;
    break;
  case 3:
    local_18 = local_18 + 1;
    local_5c = 0x3f800000;
    local_58 = 0;
    local_50 = local_50 + 1.0;
    local_54 = 0;
    break;
  case 4:
    local_18 = local_18 + 1;
    local_38 = 0xbf800000;
    local_34 = 0;
    local_50 = local_50 + _DAT_0058cd4f;
    local_30 = 0;
  }
switchD_004f0211_default:
  local_20 = (float)local_18;
  local_d8 = 1.0 / local_20;
  local_e0 = local_50 * local_d8;
  local_dc = local_4c * local_d8;
  local_d8 = local_48 * local_d8;
  iVar2 = FUN_0054e4a0(local_bc,&local_e0);
  return *(float *)(iVar2 + 4) + local_a0;
}
