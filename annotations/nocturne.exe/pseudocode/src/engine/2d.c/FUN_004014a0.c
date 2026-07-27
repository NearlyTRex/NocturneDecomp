// Name: engine_2d.c_FUN_004014a0
// Address: 004014a0
// Address Range: [[004014a0, 004014e4]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004014a0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void engine_2d_c_FUN_004014a0(char *param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < (int)(~uVar3 - 1)) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 1;
      iVar2 = engine_2d_c_FUN_004013d0(cVar1,param_2,param_3,param_4);
      param_2 = param_2 + iVar2;
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return;
}
