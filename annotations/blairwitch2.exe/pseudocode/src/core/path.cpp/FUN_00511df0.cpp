// Name: core_path.cpp_FUN_00511df0
// Address: 00511df0
// Address Range: [[00511df0, 0051219d]]
// Convention: unknown
// Signature: float core_path_cpp_FUN_00511df0(float *param_1,int param_2,int param_3,int param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_path_cpp_FUN_00511df0(float *param_1,int param_2,int param_3,int param_4,float *param_5)

{
  float fVar1;
  byte bVar2;
  float afStackY_1090 [1017];
  float local_a8;
  float local_a4;
  float local_a0;
  uint local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  float local_24;
  int local_18;
  
  bVar2 = 0;
  local_78 = *param_1 - *param_5;
  fStack_74 = param_1[1] - param_5[1];
  fStack_70 = param_1[2] - param_5[2];
  local_60 = local_78;
  local_5c = fStack_74;
  local_58 = fStack_70;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff88);
  local_90 = local_48;
  *(uint *)((int)&stack0xffffff74 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_3c = local_90 * _DAT_005e1759;
  local_38 = local_8c * _DAT_005e1759;
  local_34 = local_88 * _DAT_005e1759;
  local_84 = local_90 * _DAT_005e1759;
  *(uint *)((int)&stack0xffffff80 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_18 = 1;
  local_6c = 0.0;
  local_80 = -local_80;
  local_68 = 0.0;
  local_64 = 0.0;
  switch(param_2) {
  case 1:
    local_64 = 1.0;
  default:
    switch(param_3) {
    case 1:
switchD_00511ebf_caseD_1:
      local_64 = local_64 + 1.0;
      goto LAB_00511ecc;
    case 2:
switchD_00511ebf_caseD_2:
      local_64 = local_64 + _DAT_005e175d;
LAB_00511ecc:
      local_18 = 2;
      break;
    case 3:
switchD_00511ebf_caseD_3:
      local_18 = 2;
      local_6c = local_6c + 1.0;
      break;
    case 4:
switchD_00511ebf_caseD_4:
      local_18 = 2;
      local_6c = local_6c + _DAT_005e175d;
    }
    break;
  case 2:
    local_64 = -1.0;
    switch(param_3) {
    case 1:
      goto switchD_00511ebf_caseD_1;
    case 2:
      goto switchD_00511ebf_caseD_2;
    case 3:
      goto switchD_00511ebf_caseD_3;
    case 4:
      goto switchD_00511ebf_caseD_4;
    default:
      break;
    }
  case 3:
    local_68 = 0.0;
    local_64 = 0.0;
    local_6c = 1.0;
    switch(param_3) {
    case 1:
      goto switchD_00511ebf_caseD_1;
    case 2:
      goto switchD_00511ebf_caseD_2;
    case 3:
      goto switchD_00511ebf_caseD_3;
    case 4:
      goto switchD_00511ebf_caseD_4;
    }
    break;
  case 4:
    local_6c = -1.0;
    switch(param_3) {
    case 1:
      goto switchD_00511ebf_caseD_1;
    case 2:
      goto switchD_00511ebf_caseD_2;
    case 3:
      goto switchD_00511ebf_caseD_3;
    case 4:
      goto switchD_00511ebf_caseD_4;
    }
  }
  local_68 = 0.0;
  if ((ABS(local_6c) == 0.0) && (ABS(local_64) == 0.0)) {
    switch(param_2) {
    case 1:
      return local_80;
    case 2:
      return local_80 + _DAT_005e1791;
    case 3:
      return local_80 + (float)_DAT_005e1789;
    case 4:
      return local_80 + (float)_DAT_005e1781;
    case 5:
      return local_80 + (float)_DAT_005e1779;
    case 6:
      return local_80 + (float)_DAT_005e1771;
    case 7:
      return local_80 + (float)_DAT_005e1769;
    case 8:
      return local_80 + (float)_DAT_005e1761;
    default:
      _DAT_01d046a0 = "..\\core\\path.cpp";
      _DAT_01d046a4 = 0x183;
      core_main_c_FUN_004e4500("CPathMap::getDirection - Should never get here either");
    }
  }
  if ((param_2 != param_4) && (param_4 != param_3)) goto switchD_005120c8_default;
  switch(param_4) {
  case 1:
    local_64 = local_64 + 1.0;
    goto LAB_005120d5;
  case 2:
    local_64 = local_64 + _DAT_005e175d;
LAB_005120d5:
    local_18 = local_18 + 1;
    break;
  case 3:
    local_18 = local_18 + 1;
    local_6c = local_6c + 1.0;
    break;
  case 4:
    local_18 = local_18 + 1;
    local_6c = local_6c + _DAT_005e175d;
  }
switchD_005120c8_default:
  local_24 = (float)local_18;
  fVar1 = 1.0 / (float)local_18;
  local_a8 = local_6c * fVar1;
  local_a4 = local_68 * fVar1;
  local_a0 = local_64 * fVar1;
  local_54 = local_6c * fVar1;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff5c + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffff60 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffffac);
  local_9c = local_30;
  *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return local_98 + local_80;
}
