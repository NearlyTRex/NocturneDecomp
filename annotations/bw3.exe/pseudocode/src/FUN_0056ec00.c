// Name: FUN_0056ec00
// Address: 0056ec00
// Address Range: [[0056ec00, 0056ec55]]
// Convention: unknown
// Signature: undefined4 FUN_0056ec00(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_0056ec00(int param_1,int *param_2)

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
