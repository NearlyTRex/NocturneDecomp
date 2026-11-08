// Name: FUN_0059f1a0
// Address: 0059f1a0
// Address Range: [[0059f1a0, 0059f221]]
// Convention: unknown
// Signature: undefined4 FUN_0059f1a0(char *param_1,char *param_2)

#include "nocturne.h"

uint FUN_0059f1a0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uStack_c;
  
  iVar2 = FUN_0059c5d0(&uStack_c,param_1);
  if (iVar2 == 0) {
    uVar3 = Ordinal_52(param_1,param_2);
    uVar3 = FUN_0059efd0(uVar3);
    return uVar3;
  }
  FUN_005bfb70(param_2,0,0x2b8);
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
