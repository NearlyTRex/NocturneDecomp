// Name: crt_string.c_splitpath_FUN_00566498
// Address: 00566498
// Address Range: [[00566498, 00566564]]
// Convention: __cdecl
// Signature: void __cdecl crt_string_c_splitpath_FUN_00566498(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 )

#include "nocturne.h"

void __cdecl splitpath(char *param_1,char *param_2,uint param_3,uint param_4,uint param_5 )

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  cVar1 = *param_1;
  if ((cVar1 == '\0') || (param_1[1] != ':')) {
    if (param_2 != (char *)0x0) {
      *param_2 = '\0';
    }
  }
  else {
    if (param_2 != (char *)0x0) {
      param_2[2] = '\0';
      *param_2 = cVar1;
      param_2[1] = ':';
    }
    param_1 = param_1 + 2;
  }
  pcVar6 = (char *)0x0;
  cVar1 = *param_1;
  pcVar2 = param_1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    iVar3 = FUN_0056d9f0(pcVar2);
    if (iVar3 == 0x2e) {
      pcVar4 = pcVar2 + 1;
      pcVar6 = pcVar2;
    }
    else {
      pcVar4 = (char *)FUN_0056da80(pcVar2);
      if ((iVar3 == 0x5c) || (iVar3 == 0x2f)) {
        pcVar6 = (char *)0x0;
        pcVar5 = pcVar4;
      }
    }
    pcVar2 = pcVar4;
    cVar1 = *pcVar4;
  }
  FUN_00566450(param_3,param_1,(int)pcVar5 - (int)param_1,0xff);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar2;
  }
  FUN_00566450(param_4,pcVar5,(int)pcVar6 - (int)pcVar5,0xff);
  FUN_00566450(param_5,pcVar6,(int)pcVar2 - (int)pcVar6,0xff);
  return;
}
