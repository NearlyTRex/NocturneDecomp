// Name: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
// Address Range: [[004cbc50, 004cbc9c]]
// Convention: unknown
// Signature: undefined4 * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  *param_2 = *(uint *)(iVar1 + 0x338);
  param_2[1] = *(uint *)(iVar1 + 0x33c);
  param_2[2] = *(uint *)(iVar1 + 0x340);
  param_2[3] = *(uint *)(iVar1 + 0x344);
  param_2[4] = *(uint *)(iVar1 + 0x348);
  param_2[5] = *(uint *)(iVar1 + 0x34c);
  return param_2;
}
