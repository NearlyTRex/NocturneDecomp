// Name: core_trigger.cpp_FUN_0059bc10
// Address: 0059bc10
// Address Range: [[0059bc10, 0059bc65]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_FUN_0059bc10(int param_1,int *param_2)

#include "nocturne.h"

uint core_trigger_cpp_FUN_0059bc10(int param_1,int *param_2)

{
  if ((*param_2 == 1) && ((*(int *)(param_1 + 0x174) == 4 || (*(int *)(param_1 + 0x174) == 7)))) {
    return 1;
  }
  if ((((*param_2 != 3) || (*(int *)(param_1 + 0x174) != 5)) ||
      (*(int *)(param_1 + 0x2f4) != param_2[1])) &&
     ((*param_2 != 4 || (*(int *)(param_1 + 0x174) != 10)))) {
    return 0;
  }
  return 1;
}
