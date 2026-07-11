// Name: FUN_0056f3e0
// Address: 0056f3e0
// Address Range: [[0056f3e0, 0056f47c]]
// Convention: unknown
// Signature: char * FUN_0056f3e0(longlong *param_1,char *param_2,int param_3)

#include "nocturne.h"

char * FUN_0056f3e0(longlong *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  byte uVar5;
  char local_53 [35];
  int local_30;
  int local_28;
  uint local_24;
  longlong local_20;
  char *local_18;
  
  local_18 = param_2;
  pcVar3 = local_53;
  local_20 = *param_1;
  local_28 = param_3;
  local_24 = 0;
  uVar5 = 0;
  do {
    iVar2 = local_28;
    lVar4 = FUN_00571a9d(uVar5);
    local_30 = iVar2;
    local_20 = lVar4;
    *pcVar3 = "0123456789abcdefghijklmnopqrstuvwxyz"[iVar2];
    pcVar3 = pcVar3 + 1;
  } while (local_20 != 0);
  do {
    cVar1 = pcVar3[-1];
    pcVar3 = pcVar3 + -1;
    *local_18 = cVar1;
    local_18 = local_18 + 1;
  } while (cVar1 != '\0');
  return param_2;
}
