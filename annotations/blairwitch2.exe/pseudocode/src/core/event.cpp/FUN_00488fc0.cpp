// Name: core_event.cpp_FUN_00488fc0
// Address: 00488fc0
// Address Range: [[00488fc0, 004890dd]]
// Convention: unknown
// Signature: char * core_event_cpp_FUN_00488fc0(int *param_1,char *param_2,int param_3,int param_4)

#include "nocturne.h"

char * core_event_cpp_FUN_00488fc0(int *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  SIZE_T n;
  int iVar5;
  
  pcVar2 = (char *)*param_1;
  while (((&DAT_0061ed94)[(byte)(*pcVar2 + 1)] & 2) != 0) {
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
          goto code_r0x00489069;
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
code_r0x00489069:
    if (uVar4 == 0) break;
  }
  n = ~uVar4 - 1;
  if (0 < (int)n) {
    pcVar2 = param_2 + n;
    do {
      if (((&DAT_0061ed94)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  param_2[n] = '\0';
  while (((&DAT_0061ed94)[(byte)(*param_2 + 1)] & 2) != 0) {
    memmove(param_2,param_2 + 1,n);
    n = n - 1;
  }
  pcVar2 = (char *)*param_1;
  while (((&DAT_0061ed94)[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *param_1 = (int)pcVar2;
  return (char *)0x0;
}
