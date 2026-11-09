// Name: core_thehand.cpp_FUN_00599890
// Address: 00599890
// Address Range: [[00599890, 005998c2]]
// Convention: unknown
// Signature: int core_thehand_cpp_FUN_00599890(CCharacter *param_1)

#include "nocturne.h"

int core_thehand_cpp_FUN_00599890(CCharacter *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x70))(param_1);
  if ((iVar1 != 0) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
  return iVar1;
}
