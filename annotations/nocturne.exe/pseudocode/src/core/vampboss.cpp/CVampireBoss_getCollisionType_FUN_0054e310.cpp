// Name: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_0054e310
// Address: 0054e310
// Address Range: [[0054e310, 0054e36b]]
// Convention: unknown
// Signature: undefined4 core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_0054e310(int param_1,int *param_2)

#include "nocturne.h"

uint core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_0054e310(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 != 2) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
    if (iVar1 < 2) {
      if (((*param_2 == 1) || (*param_2 == 3)) && (*(int *)(param_1 + 0xbe168) == 2)) {
        param_2[8] = param_1 + 0xbd24;
        return 1;
      }
      uVar2 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}
