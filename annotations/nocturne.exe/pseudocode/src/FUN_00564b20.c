// Name: FUN_00564b20
// Address: 00564b20
// Address Range: [[00564b20, 00564baf]]
// Convention: unknown
// Signature: char * FUN_00564b20(char *param_1,int param_2,int param_3)

#include "nocturne.h"

char * FUN_00564b20(char *param_1,int param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iStack_18;
  
  (*(code *)PTR_FUN_005c1ac0)(*(uint *)(param_3 + 0x10));
  uVar1 = *(uint *)(param_3 + 0xc);
  *(byte *)(param_3 + 0xc) = *(byte *)(param_3 + 0xc) & 0xcf;
  pcVar2 = param_1;
  do {
    param_2 = param_2 + -1;
    pcVar3 = pcVar2;
    if (param_2 < 1) break;
    iStack_18 = FUN_00564570(param_3);
    if (iStack_18 == -1) break;
    pcVar3 = pcVar2 + 1;
    *pcVar2 = (char)iStack_18;
    pcVar2 = pcVar3;
  } while ((char)iStack_18 != '\n');
  if ((iStack_18 == -1) && ((pcVar3 == param_1 || ((*(byte *)(param_3 + 0xc) & 0x20) != 0)))) {
    param_1 = (char *)0x0;
  }
  else {
    *pcVar3 = '\0';
  }
  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) | uVar1 & 0x30;
  (*(code *)PTR_FUN_005c1ac4)(*(uint *)(param_3 + 0x10));
  return param_1;
}
