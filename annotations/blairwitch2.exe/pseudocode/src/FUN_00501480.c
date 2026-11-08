// Name: FUN_00501480
// Address: 00501480
// Address Range: [[00501480, 00501529]]
// Convention: unknown
// Signature: void FUN_00501480(int param_1)

#include "nocturne.h"

void FUN_00501480(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x278f4) == 0) {
    FUN_005478b0(param_1 + 0x2b4,"moloch_d.dfm");
    pcVar2 = "moloch_h.dfm";
  }
  else {
    FUN_005478b0(param_1 + 0x2b4,"moloch_h.dfm");
    pcVar2 = "moloch_d.dfm";
  }
  FUN_005478b0(param_1 + 0x25640,pcVar2);
  FUN_00547480(param_1 + 0x2b4);
  FUN_00547480(param_1 + 0x25640);
  iVar1 = param_1 + 0x279c8;
  *(uint *)(param_1 + 0x285f0) = 0;
  FUN_005b6f80(iVar1,0,param_1 + 0x2b4);
  FUN_005b6f80(iVar1,1,param_1 + 0x25640);
  FUN_005b71d0(iVar1);
  FUN_004ce4a0(param_1);
  return;
}
