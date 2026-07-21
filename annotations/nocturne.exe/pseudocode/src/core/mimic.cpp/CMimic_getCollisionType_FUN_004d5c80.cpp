// Name: core_mimic.cpp_CMimic_getCollisionType_FUN_004d5c80
// Address: 004d5c80
// Address Range: [[004d5c80, 004d5cf9]]
// Convention: unknown
// Signature: undefined4 core_mimic_cpp_CMimic_getCollisionType_FUN_004d5c80(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_mimic_cpp_CMimic_getCollisionType_FUN_004d5c80(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  
  param_2[6] = *(int *)(param_1 + 0x2398);
  param_2[7] = 0x3f800000;
  if (*param_2 == 1) {
    param_2[5] = -0x42333333;
    fVar1 = (float)_DAT_00589507;
    param_2[6] = (int)((float)param_2[6] + _DAT_0058950f);
    param_2[7] = (int)((float)param_2[7] * fVar1);
  }
  else {
    param_2[5] = 0x40000000;
  }
  iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  if (*(int *)(iVar2 + 0x24) == 0xc) {
    return 0;
  }
  return 2;
}
