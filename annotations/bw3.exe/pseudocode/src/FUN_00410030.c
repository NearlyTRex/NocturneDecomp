// Name: FUN_00410030
// Address: 00410030
// Address Range: [[00410030, 00410108]]
// Convention: unknown
// Signature: undefined4 FUN_00410030(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint FUN_00410030(uint param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char local_d8 [200];
  
  iVar5 = 0;
  uVar2 = FUN_004fc310(param_1);
  pcVar6 = local_d8;
  while( true ) {
    FUN_005a28c0(local_d8,"%s_%d",param_2,iVar5 + 1);
    iVar3 = FUN_004fba50(uVar2,local_d8,0);
    if (iVar3 < 0) break;
    iVar5 = iVar5 + 1;
  }
  if (iVar5 == 0) {
    do {
      cVar1 = *param_2;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  else {
    uVar4 = FUN_0040cea0(1,iVar5);
    FUN_005a28c0(local_d8,"%s_%d",param_2,uVar4);
  }
  iVar5 = FUN_004fba50(uVar2,local_d8,0);
  if (-1 < iVar5) {
    FUN_004fc0d0(param_1,iVar5,1);
    return 1;
  }
  return 0;
}
