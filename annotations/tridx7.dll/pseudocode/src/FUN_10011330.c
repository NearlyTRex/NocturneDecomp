// Name: FUN_10011330
// Address: 10011330
// Address Range: [[10011330, 1001135b]]
// Convention: unknown
// Signature: int FUN_10011330(char *param_1,int param_2)

#include "nocturne.h"

int FUN_10011330(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_10011355;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_10011355:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}
