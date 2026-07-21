// Name: FUN_00554590
// Address: 00554590
// Address Range: [[00554590, 005545fd]]
// Convention: unknown
// Signature: undefined4 * FUN_00554590(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_00554590(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  uVar1 = *(uint *)(iVar3 + 0x348);
  uVar2 = *(uint *)(iVar3 + 0x34c);
  *param_2 = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}
