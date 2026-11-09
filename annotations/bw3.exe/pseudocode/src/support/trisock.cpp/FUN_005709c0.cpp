// Name: support_trisock.cpp_FUN_005709c0
// Address: 005709c0
// Address Range: [[005709c0, 00570ad5]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_005709c0(char *param_1,char *param_2,undefined2 *param_3,char *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00570a8a) */
/* WARNING: Removing unreachable block (ram,0x00570a92) */
/* WARNING: Removing unreachable block (ram,0x00570a9a) */

uint support_trisock_cpp_FUN_005709c0(char *param_1,char *param_2,ushort *param_3,char *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_2 = '\0';
  *param_4 = '\0';
  *param_3 = 0x50;
  iVar2 = _strnicmp(param_1,(char *)0x5d6b76,5);
  if (iVar2 == 0) {
    param_1 = param_1 + 5;
  }
  iVar2 = _strnicmp(param_1,(char *)0x5d6b7c,2);
  if (iVar2 == 0) {
    param_1 = param_1 + 2;
  }
  cVar1 = *param_1;
  iVar2 = 0;
  pcVar3 = param_2;
  for (; ((cVar1 != '\0' && (cVar1 = *param_1, cVar1 != ':')) && (cVar1 != '/'));
      param_1 = param_1 + 1) {
    pcVar4 = pcVar3;
    if (iVar2 < 0x7f) {
      pcVar4 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      *pcVar3 = cVar1;
    }
    cVar1 = param_1[1];
    pcVar3 = pcVar4;
  }
  param_2[iVar2] = '\0';
  if (*param_1 != ':') {
    iVar2 = 0;
    pcVar3 = param_4;
    while( true ) {
      if (*param_1 == '\0') break;
      if (iVar2 < param_5 + -1) {
        *pcVar3 = *param_1;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    if (iVar2 == 0) {
      *pcVar3 = '/';
      iVar2 = iVar2 + 1;
    }
    param_4[iVar2] = '\0';
    return 1;
  }
  sscanf(param_1,(char *)0x5d6b7f);
  return 0;
}
