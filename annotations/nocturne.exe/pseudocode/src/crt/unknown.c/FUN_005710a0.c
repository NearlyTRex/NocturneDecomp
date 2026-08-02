// Name: crt_unknown.c_FUN_005710a0
// Address: 005710a0
// Address Range: [[005710a0, 0057111b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005710a0(char *param_1,char *param_2)

#include "nocturne.h"

void FUN_005710a0(char *param_1,char *param_2)

{
  int iVar1;
  byte local_10 [4];
  byte local_c [4];
  
  FUN_00572d50(local_c,param_1);
  iVar1 = mblen(param_1);
  local_c[iVar1] = 0;
  FUN_00572d50(local_10,param_2);
  iVar1 = mblen(param_2);
  local_10[iVar1] = 0;
  FUN_00572d90(local_c);
  FUN_00572d90(local_10);
  FUN_00572e00(local_c,local_10);
  return;
}
