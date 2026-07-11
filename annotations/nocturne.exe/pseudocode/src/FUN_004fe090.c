// Name: FUN_004fe090
// Address: 004fe090
// Address Range: [[004fe090, 004fe130]]
// Convention: unknown
// Signature: char * FUN_004fe090(int *param_1,int param_2,int param_3)

#include "nocturne.h"

char * FUN_004fe090(int *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = (char *)FUN_004fe070(*param_1);
  *param_1 = (int)pcVar2;
  if (*pcVar2 != '(') {
    return "No opening parenthesis";
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar5 = *param_1;
      pcVar2 = (char *)(iVar5 + 1);
      *param_1 = (int)pcVar2;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar3 == 0) {
          *param_1 = iVar5 + 2;
          *(byte *)(iVar4 + param_2) = 0;
          FUN_004fe000(param_2);
          iVar4 = FUN_004fe070(*param_1);
          *param_1 = iVar4;
          return (char *)0x0;
        }
        iVar3 = iVar3 + -1;
      }
      iVar5 = iVar4 + 1;
      *(byte *)(iVar4 + param_2) = *(byte *)*param_1;
      iVar4 = iVar5;
    } while (iVar5 < param_3);
  }
  return "Argument too long";
}
