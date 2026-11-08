// Name: FUN_00516d70
// Address: 00516d70
// Address Range: [[00516d70, 00516dde]]
// Convention: unknown
// Signature: void FUN_00516d70(char *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00516d70(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00516d92;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_00516d92;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_00516d92:
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_005b8130(pcVar2,0x5e1c41);
    if (iVar1 == 0) {
      FUN_00516960(param_1,param_2);
      return;
    }
    iVar1 = FUN_005b8130(pcVar2,0x5e1c46);
    if (iVar1 == 0) {
      FUN_005171e0(param_1,param_2);
      return;
    }
  }
  return;
}
