// Name: core_thehand.cpp_FUN_0056c880
// Address: 0056c880
// Address Range: [[0056c880, 0056c8b2]]
// Convention: unknown
// Signature: int core_thehand_cpp_FUN_0056c880(CCharacter *param_1)

#include "nocturne.h"

int core_thehand_cpp_FUN_0056c880(CCharacter *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x70))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_FUN_0042e220(param_1);
  return iVar1;
}
