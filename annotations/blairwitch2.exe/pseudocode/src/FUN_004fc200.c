// Name: FUN_004fc200
// Address: 004fc200
// Address Range: [[004fc200, 004fc268]]
// Convention: unknown
// Signature: void FUN_004fc200(int param_1,char *param_2)

#include "nocturne.h"

void FUN_004fc200(int param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      FUN_004fcda0(param_1,param_2);
    }
    iVar1 = *(int *)(param_1 + 0x1118);
    if (iVar1 != 0) {
      param_2[0x14c] = '\0';
      param_2[0x14d] = '\0';
      param_2[0x14e] = '\0';
      param_2[0x14f] = '\0';
      *(int *)(param_2 + 0x150) = iVar1;
      *(char **)(*(int *)(param_1 + 0x1118) + 0x14c) = param_2;
      *(char **)(param_1 + 0x1118) = param_2;
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
    *(char **)(param_1 + 0x1114) = param_2;
    *(char **)(param_1 + 0x1118) = param_2;
  }
  return;
}
