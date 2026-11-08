// Name: FUN_0048bc10
// Address: 0048bc10
// Address Range: [[0048bc10, 0048bd2d]]
// Convention: unknown
// Signature: char * FUN_0048bc10(int *param_1,char *param_2,int param_3,int param_4)

#include "nocturne.h"

char * FUN_0048bc10(int *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  pcVar2 = (char *)*param_1;
  while (((&DAT_006074b8)[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *param_1 = (int)pcVar2;
  if (param_4 != 0) {
    if (*pcVar2 != '(') {
      return "No opening parenthesis";
    }
    *param_1 = (int)(pcVar2 + 1);
  }
  iVar5 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      cVar1 = *(char *)*param_1;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar5 = iVar5 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar5 == 0) {
          *param_1 = (int)((char *)*param_1 + 1);
          param_2[iVar3] = '\0';
          uVar4 = 0xffffffff;
          pcVar2 = param_2;
          goto code_r0x0048bcb9;
        }
        iVar5 = iVar5 + -1;
      }
      param_2[iVar3] = *(char *)*param_1;
      iVar3 = iVar3 + 1;
      *param_1 = *param_1 + 1;
    } while (iVar3 < param_3);
  }
  return "Argument too long";
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x0048bcb9:
    if (uVar4 == 0) break;
  }
  iVar3 = ~uVar4 - 1;
  if (0 < iVar3) {
    pcVar2 = param_2 + iVar3;
    do {
      if (((&DAT_006074b8)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      iVar3 = iVar3 + -1;
      pcVar2 = pcVar2 + -1;
    } while (0 < iVar3);
  }
  param_2[iVar3] = '\0';
  while (((&DAT_006074b8)[(byte)(*param_2 + 1)] & 2) != 0) {
    FUN_005a54c0(param_2,param_2 + 1,iVar3);
    iVar3 = iVar3 + -1;
  }
  pcVar2 = (char *)*param_1;
  while (((&DAT_006074b8)[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *param_1 = (int)pcVar2;
  return (char *)0x0;
}
