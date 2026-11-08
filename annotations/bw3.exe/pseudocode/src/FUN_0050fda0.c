// Name: FUN_0050fda0
// Address: 0050fda0
// Address Range: [[0050fda0, 0050fe0e]]
// Convention: unknown
// Signature: void FUN_0050fda0(char *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0050fda0(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0050fdc2;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_0050fdc2;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_0050fdc2:
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_005a3260(pcVar2,0x5cbd04);
    if (iVar1 == 0) {
      FUN_0050f990(param_1,param_2);
      return;
    }
    iVar1 = FUN_005a3260(pcVar2,0x5cbd09);
    if (iVar1 == 0) {
      FUN_00510210(param_1,param_2);
      return;
    }
  }
  return;
}
