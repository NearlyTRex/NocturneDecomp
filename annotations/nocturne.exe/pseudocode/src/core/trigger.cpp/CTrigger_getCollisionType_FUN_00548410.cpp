// Name: core_trigger.cpp_CTrigger_getCollisionType_FUN_00548410
// Address: 00548410
// Address Range: [[00548410, 00548457]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_CTrigger_getCollisionType_FUN_00548410(int param_1,int *param_2)

#include "nocturne.h"

uint core_trigger_cpp_CTrigger_getCollisionType_FUN_00548410(int param_1,int *param_2)

{
  if ((*param_2 == 1) && ((*(int *)(param_1 + 0x16c) == 4 || (*(int *)(param_1 + 0x16c) == 7)))) {
    return 1;
  }
  if (((*param_2 == 3) && (*(int *)(param_1 + 0x16c) == 5)) &&
     (*(int *)(param_1 + 0x2ec) == param_2[1])) {
    return 1;
  }
  return 0;
}
