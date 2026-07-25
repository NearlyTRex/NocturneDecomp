// Name: FUN_00461d50
// Address: 00461d50
// Address Range: [[00461d50, 00461d7a]]
// Convention: unknown
// Signature: undefined4 FUN_00461d50(int *param_1,int *param_2)

#include "nocturne.h"

uint FUN_00461d50(int *param_1,int *param_2)

{
  if (*(int *)(*param_2 + 8) < *(int *)(*param_1 + 8)) {
    return 1;
  }
  if (*(int *)(*param_1 + 8) < *(int *)(*param_2 + 8)) {
    return 0xffffffff;
  }
  return 0;
}
