// Name: FUN_004f68d0
// Address: 004f68d0
// Address Range: [[004f68d0, 004f692b]]
// Convention: unknown
// Signature: void FUN_004f68d0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5 )

#include "nocturne.h"

void FUN_004f68d0(uint param_1,char *param_2,uint param_3,uint param_4,int param_5 )

{
  char *pcVar1;
  byte *puVar2;
  
  if (param_2 < (char *)0xff000000) {
    pcVar1 = "(none)";
    if (param_2 != (char *)0x0) {
      pcVar1 = param_2;
    }
    puVar2 = &DAT_005c89a1;
    param_2 = pcVar1;
  }
  else {
    puVar2 = &DAT_005c899c;
  }
  FUN_005a3140(param_3,puVar2,param_2);
  if (param_5 != 0) {
    FUN_005a3140(param_3,"\t\t// %s\n",param_5);
    return;
  }
  FUN_005a3140(param_3,&DAT_005c89af);
  return;
}
