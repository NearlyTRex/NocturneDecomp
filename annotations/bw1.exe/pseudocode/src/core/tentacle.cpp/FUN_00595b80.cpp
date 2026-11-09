// Name: core_tentacle.cpp_FUN_00595b80
// Address: 00595b80
// Address Range: [[00595b80, 00595bb2]]
// Convention: unknown
// Signature: int core_tentacle_cpp_FUN_00595b80(CCharacter *param_1)

#include "nocturne.h"

int core_tentacle_cpp_FUN_00595b80(CCharacter *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x70))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
  return iVar1;
}
