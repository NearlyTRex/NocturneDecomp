// Name: FUN_004f4ac0
// Address: 004f4ac0
// Address Range: [[004f4ac0, 004f4b2e]]
// Convention: unknown
// Signature: void FUN_004f4ac0(char *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f4ac0(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004f4ae2;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_004f4ae2;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004f4ae2:
  if (pcVar2 != (char *)0x0) {
    iVar1 = FUN_00564520(pcVar2,0x58d1e6);
    if (iVar1 == 0) {
      FUN_004f46b0(param_1,param_2);
      return;
    }
    iVar1 = FUN_00564520(pcVar2,0x58d1eb);
    if (iVar1 == 0) {
      FUN_004f4ef0(param_1,param_2);
      return;
    }
  }
  return;
}
