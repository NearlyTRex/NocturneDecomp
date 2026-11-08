// Name: FUN_004f6930
// Address: 004f6930
// Address Range: [[004f6930, 004f6998]]
// Convention: unknown
// Signature: void FUN_004f6930(int param_1,char *param_2)

#include "nocturne.h"

void FUN_004f6930(int param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      FUN_004f7530(param_1,param_2);
    }
    iVar1 = *(int *)(param_1 + 0x1440);
    if (iVar1 != 0) {
      param_2[0x14c] = '\0';
      param_2[0x14d] = '\0';
      param_2[0x14e] = '\0';
      param_2[0x14f] = '\0';
      *(int *)(param_2 + 0x150) = iVar1;
      *(char **)(*(int *)(param_1 + 0x1440) + 0x14c) = param_2;
      *(char **)(param_1 + 0x1440) = param_2;
      return;
    }
    param_2[0x14c] = '\0';
    param_2[0x14d] = '\0';
    param_2[0x14e] = '\0';
    param_2[0x14f] = '\0';
    param_2[0x150] = '\0';
    param_2[0x151] = '\0';
    param_2[0x152] = '\0';
    param_2[0x153] = '\0';
    *(char **)(param_1 + 0x143c) = param_2;
    *(char **)(param_1 + 0x1440) = param_2;
  }
  return;
}
