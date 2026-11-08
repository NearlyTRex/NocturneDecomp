// Name: FUN_0056f820
// Address: 0056f820
// Address Range: [[0056f820, 0056f86b]]
// Convention: unknown
// Signature: void FUN_0056f820(int param_1,char *param_2)

#include "nocturne.h"

void FUN_0056f820(int param_1,char *param_2)

{
  char *pcVar1;
  
  FUN_0056f580(param_1,param_2);
  do {
    pcVar1 = param_2;
    if (*param_2 == '\0') goto LAB_0056f860;
    if (*param_2 == '\0') break;
    pcVar1 = param_2 + 1;
    if (*pcVar1 == '\0') goto LAB_0056f860;
    param_2 = param_2 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_0056f860:
  FUN_005a28c0(pcVar1,&DAT_005d68d7,*(ushort *)(param_1 + 4));
  return;
}
