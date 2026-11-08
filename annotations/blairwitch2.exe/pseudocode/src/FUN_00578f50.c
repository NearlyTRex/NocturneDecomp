// Name: FUN_00578f50
// Address: 00578f50
// Address Range: [[00578f50, 00578f9b]]
// Convention: unknown
// Signature: void FUN_00578f50(int param_1,char *param_2)

#include "nocturne.h"

void FUN_00578f50(int param_1,char *param_2)

{
  char *pcVar1;
  
  FUN_00578cb0(param_1,param_2);
  do {
    pcVar1 = param_2;
    if (*param_2 == '\0') goto LAB_00578f90;
    if (*param_2 == '\0') break;
    pcVar1 = param_2 + 1;
    if (*pcVar1 == '\0') goto LAB_00578f90;
    param_2 = param_2 + 2;
  } while (*pcVar1 != '\0');
  pcVar1 = (char *)0x0;
LAB_00578f90:
  FUN_005b7790(pcVar1,&DAT_005ed04e,*(ushort *)(param_1 + 4));
  return;
}
