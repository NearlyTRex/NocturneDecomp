// Name: FUN_00441ff0
// Address: 00441ff0
// Address Range: [[00441ff0, 004420b9]]
// Convention: unknown
// Signature: void FUN_00441ff0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00441ff0(int *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_1014 [4096];
  byte *local_14;
  
  bVar5 = 0;
  local_14 = &stack0x0000000c;
  FUN_005a2898(local_1014,param_2,&local_14);
  iVar3 = 0;
  local_14 = (byte *)0x0;
  uVar2 = 0xffffffff;
  pcVar4 = local_1014;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    do {
      pcVar4 = local_1014 + iVar3;
      iVar3 = iVar3 + 1;
      FUN_004420c0(param_1,*pcVar4);
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  FUN_004420c0(param_1,0);
  if (*param_1 != 0) {
    iVar3 = FUN_005a43ec("console.txt",&DAT_005b93df);
    if (iVar3 != 0) {
      FUN_005a3140(iVar3,&DAT_005b93e2,local_1014);
      FUN_005a3a90(iVar3);
      return;
    }
  }
  return;
}
