// Name: FUN_00572190
// Address: 00572190
// Address Range: [[00572190, 00572211]]
// Convention: unknown
// Signature: undefined4 FUN_00572190(char *param_1,char *param_2)

#include "nocturne.h"

uint FUN_00572190(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uStack_c;
  
  iVar2 = FUN_0056f5c0(&uStack_c,param_1);
  if (iVar2 == 0) {
    uVar3 = Ordinal_52(param_1,param_2);
    uVar3 = FUN_00571fc0(uVar3);
    return uVar3;
  }
  FUN_005a28f0(param_2,0,0x2b8);
  pcVar4 = param_2;
  do {
    cVar1 = *param_1;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  param_2[0x284] = '\x01';
  param_2[0x285] = '\0';
  param_2[0x286] = '\0';
  param_2[0x287] = '\0';
  *(uint *)(param_2 + 0x288) = uStack_c;
  return 1;
}
