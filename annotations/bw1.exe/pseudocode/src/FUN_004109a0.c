// Name: FUN_004109a0
// Address: 004109a0
// Address Range: [[004109a0, 004109dc]]
// Convention: unknown
// Signature: undefined4 FUN_004109a0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_004109a0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x168) != '\0') {
    iVar1 = FUN_0040c550(DAT_007c2ff4,param_1 + 0x168);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
