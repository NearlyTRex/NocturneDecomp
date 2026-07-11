// Name: FUN_004d8c00
// Address: 004d8c00
// Address Range: [[004d8c00, 004d8c5b]]
// Convention: unknown
// Signature: void FUN_004d8c00(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5 )

#include "nocturne.h"

void FUN_004d8c00(uint param_1,char *param_2,uint param_3,uint param_4,int param_5 )

{
  char *pcVar1;
  byte *puVar2;
  
  if (param_2 < (char *)0xff000000) {
    pcVar1 = "(none)";
    if (param_2 != (char *)0x0) {
      pcVar1 = param_2;
    }
    puVar2 = &DAT_00589c4c;
    param_2 = pcVar1;
  }
  else {
    puVar2 = &DAT_00589c47;
  }
  FUN_005644f0(param_3,puVar2,param_2);
  if (param_5 != 0) {
    FUN_005644f0(param_3,"\t\t// %s\n",param_5);
    return;
  }
  FUN_005644f0(param_3,&DAT_00589c5a);
  return;
}
