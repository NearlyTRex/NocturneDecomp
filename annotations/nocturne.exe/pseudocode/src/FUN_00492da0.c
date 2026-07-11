// Name: FUN_00492da0
// Address: 00492da0
// Address Range: [[00492da0, 00492e50]]
// Convention: unknown
// Signature: int FUN_00492da0(int param_1,char *param_2)

#include "nocturne.h"

int FUN_00492da0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  pcVar4 = param_2;
  if (*(int *)(param_1 + 0x3190) == 0) {
    while (*param_2 != '\0') {
      iVar2 = 0;
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        if (cVar1 == '\n') break;
        iVar3 = FUN_004930b0(param_1,cVar1);
        iVar2 = iVar2 + iVar3 + *(int *)(param_1 + 0x3174);
      } while (*param_2 != '\0');
      if (0 < iVar2) {
        iVar2 = iVar2 - *(int *)(param_1 + 0x3174);
      }
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
    }
  }
  else {
LAB_00492dc1:
    do {
      pcVar6 = param_2;
      if (*param_2 == '\n') goto LAB_00492dd9;
      if (*param_2 == '\0') break;
      pcVar6 = param_2 + 1;
      if (*pcVar6 == '\n') goto LAB_00492dd9;
      param_2 = param_2 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
LAB_00492dd9:
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3194) + 8))(*(int **)(param_1 + 0x3194),pcVar4);
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    if (pcVar6 != (char *)0x0) {
      param_2 = pcVar6 + 1;
      *pcVar6 = '\n';
      pcVar4 = param_2;
      goto LAB_00492dc1;
    }
  }
  return iVar5;
}
