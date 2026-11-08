// Name: FUN_0040ec30
// Address: 0040ec30
// Address Range: [[0040ec30, 0040ec6c]]
// Convention: unknown
// Signature: undefined4 FUN_0040ec30(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_0040ec30(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x168) != '\0') {
    iVar1 = FUN_0040c790(DAT_007df974,param_1 + 0x168);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
