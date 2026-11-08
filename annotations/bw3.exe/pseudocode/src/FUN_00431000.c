// Name: FUN_00431000
// Address: 00431000
// Address Range: [[00431000, 004310d2]]
// Convention: unknown
// Signature: undefined4 FUN_00431000(int param_1)

#include "nocturne.h"

uint FUN_00431000(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_70 [100];
  
  pcVar2 = (char *)FUN_004fc320(param_1 + 0x158);
  pcVar4 = local_70;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_005a3ff0(local_70);
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar3 = FUN_005a3f90(local_70,&DAT_005b83d7,3);
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = FUN_005a3260(local_70,"DEAD_POSSUM");
  if (iVar3 == 0) {
    return 0xfffffffe;
  }
  iVar3 = FUN_005a4010(local_70,&DAT_005b83e7);
  if ((iVar3 != 0) && (*(float *)(param_1 + 0x2538) <= 0.0)) {
    return 2;
  }
  return 0;
}
