// Name: FUN_00411860
// Address: 00411860
// Address Range: [[00411860, 0041189c]]
// Convention: unknown
// Signature: undefined4 FUN_00411860(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00411860(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x160) != '\0') {
    iVar1 = FUN_0040d7e0(DAT_00763e44,param_1 + 0x160);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
