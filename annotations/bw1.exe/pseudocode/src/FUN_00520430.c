// Name: FUN_00520430
// Address: 00520430
// Address Range: [[00520430, 005204d9]]
// Convention: unknown
// Signature: void FUN_00520430(int param_1)

#include "nocturne.h"

void FUN_00520430(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x22350) == 0) {
    FUN_00569f50(param_1 + 0x158,"moloch_d.dfm");
    pcVar2 = "moloch_h.dfm";
  }
  else {
    FUN_00569f50(param_1 + 0x158,"moloch_h.dfm");
    pcVar2 = "moloch_d.dfm";
  }
  FUN_00569f50(param_1 + 0x1ffac,pcVar2);
  FUN_00569b20(param_1 + 0x158);
  FUN_00569b20(param_1 + 0x1ffac);
  iVar1 = param_1 + 0x22424;
  *(uint *)(param_1 + 0x2304c) = 0;
  FUN_005230c0(iVar1,0,param_1 + 0x158);
  FUN_005230c0(iVar1,1,param_1 + 0x1ffac);
  FUN_00523310(iVar1);
  FUN_004eaa10(param_1);
  return;
}
