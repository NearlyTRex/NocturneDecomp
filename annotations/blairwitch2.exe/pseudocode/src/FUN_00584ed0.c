// Name: FUN_00584ed0
// Address: 00584ed0
// Address Range: [[00584ed0, 00585027]]
// Convention: unknown
// Signature: int FUN_00584ed0(undefined4 param_1)

#include "nocturne.h"

int FUN_00584ed0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  iVar2 = FUN_0049f180(iVar2 + 0x26c);
  iVar2 = FUN_0044fc80(iVar2 + 0x404);
  pcVar3 = (char *)0x5eddbc;
  *(uint *)(iVar2 + -0x674) = 0x5fdb44;
  FUN_0044fd70(iVar2 + -0x670,"vsslbase.kfm");
  *(uint *)(iVar2 + -0x4f4) = 0;
  *(uint *)(iVar2 + -0x4f0) = 0;
  pcVar4 = (char *)(iVar2 + -0x4e8);
  *(uint *)(iVar2 + -0x4ec) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x420) = 0;
  *(uint *)(iVar2 + -0x41c) = 0;
  pcVar3 = (char *)0x5eddc1;
  *(uint *)(iVar2 + -0x40c) = 0;
  pcVar4 = (char *)(iVar2 + -0x484);
  *(uint *)(iVar2 + -0x410) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x418) = 0x41200000;
  *(uint *)(iVar2 + -0x408) = 1;
  *(uint *)(iVar2 + -0x414) = 0;
  *(uint *)(iVar2 + -4) = 0;
  FUN_0044fd70(iVar2,0x5eddc6);
  *(uint *)(iVar2 + 0x17c) = 1;
  *(uint *)(iVar2 + -0x828) = 1;
  *(uint *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x184) = 0;
  return iVar2 + -0x924;
}
