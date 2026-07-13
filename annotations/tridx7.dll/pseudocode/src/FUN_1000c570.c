// Name: FUN_1000c570
// Address: 1000c570
// Address Range: [[1000c570, 1000c59b]]
// Convention: unknown
// Signature: int FUN_1000c570(char *param_1,int param_2)

#include "nocturne.h"

int FUN_1000c570(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_1000c595;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_1000c595:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}
