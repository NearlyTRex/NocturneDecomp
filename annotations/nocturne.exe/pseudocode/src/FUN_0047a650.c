// Name: FUN_0047a650
// Address: 0047a650
// Address Range: [[0047a650, 0047a75d]]
// Convention: unknown
// Signature: char * FUN_0047a650(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

char * FUN_0047a650(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  pcVar3 = (char *)*param_1;
  while (((&DAT_005c168c)[(byte)(*pcVar3 + 1)] & 2) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *param_1 = (int)pcVar3;
  if (*pcVar3 != '(') {
    return "No opening parenthesis";
  }
  iVar6 = 0;
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *param_1;
      pcVar3 = (char *)(iVar2 + 1);
      *param_1 = (int)pcVar3;
      if (*pcVar3 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (*pcVar3 == '(') {
        iVar6 = iVar6 + 1;
      }
      else if (*pcVar3 == ')') {
        if (iVar6 == 0) {
          *param_1 = iVar2 + 2;
          param_2[iVar4] = '\0';
          uVar5 = 0xffffffff;
          pcVar3 = param_2;
          goto code_r0x0047a6e9;
        }
        iVar6 = iVar6 + -1;
      }
      pcVar3 = param_2 + iVar4;
      iVar4 = iVar4 + 1;
      *pcVar3 = *(char *)*param_1;
    } while (iVar4 < param_3);
  }
  return "Argument too long";
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
code_r0x0047a6e9:
    if (uVar5 == 0) break;
  }
  iVar4 = ~uVar5 - 1;
  if (0 < iVar4) {
    pcVar3 = param_2 + iVar4;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar3[-1] + 1)] & 2) == 0) break;
      iVar4 = iVar4 + -1;
      pcVar3 = pcVar3 + -1;
    } while (0 < iVar4);
  }
  param_2[iVar4] = '\0';
  while (((&DAT_005c168c)[(byte)(*param_2 + 1)] & 2) != 0) {
    FUN_00566170(param_2,param_2 + 1,iVar4);
    iVar4 = iVar4 + -1;
  }
  pcVar3 = (char *)*param_1;
  while (((&DAT_005c168c)[(byte)(*pcVar3 + 1)] & 2) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *param_1 = (int)pcVar3;
  return (char *)0x0;
}
