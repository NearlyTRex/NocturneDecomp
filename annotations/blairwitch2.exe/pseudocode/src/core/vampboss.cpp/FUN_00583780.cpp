// Name: core_vampboss.cpp_FUN_00583780
// Address: 00583780
// Address Range: [[00583780, 005837db]]
// Convention: unknown
// Signature: undefined4 core_vampboss_cpp_FUN_00583780(int param_1,int *param_2)

#include "nocturne.h"

uint core_vampboss_cpp_FUN_00583780(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 != 2) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
    if (iVar1 < 2) {
      if (((*param_2 == 1) || (*param_2 == 3)) && (*(int *)(param_1 + 0xc2f3c) == 2)) {
        param_2[8] = param_1 + 0x10af8;
        return 1;
      }
      uVar2 = core_charactr_cpp_FUN_00427680(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}
