// Name: FUN_005380c0
// Address: 005380c0
// Address Range: [[005380c0, 0053812e]]
// Convention: unknown
// Signature: void FUN_005380c0(char *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005380c0(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_005380e2;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_005380e2;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_005380e2:
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_005c04e0(pcVar2,".raw");
    if (iVar1 == 0) {
      FUN_00537cb0(param_1,param_2);
      return;
    }
    iVar1 = FUN_005c04e0(pcVar2,".pbm");
    if (iVar1 == 0) {
      FUN_00538530(param_1,param_2);
      return;
    }
  }
  return;
}
