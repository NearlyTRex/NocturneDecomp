// Name: FUN_005202f0
// Address: 005202f0
// Address Range: [[005202f0, 005203ad]]
// Convention: unknown
// Signature: int FUN_005202f0(undefined4 param_1)

#include "nocturne.h"

int FUN_005202f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ea830(param_1);
  iVar2 = FUN_00567370(iVar2 + 0x1ffac);
  iVar2 = FUN_00522fa0(iVar2 + 0x2478);
  *(byte ***)(iVar2 + -0x222d0) = &PTR_FUN_00603f04;
  FUN_00569f50(iVar2 + -0x222cc,"moloch_h.dfm");
  pcVar3 = "molochToDemon";
  pcVar4 = (char *)(iVar2 + -200);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "molochToHuman";
  pcVar4 = (char *)(iVar2 + -100);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xd4) = 1;
  *(uint *)(iVar2 + -0xd0) = 0;
  *(uint *)(iVar2 + -0xcc) = 0;
  return iVar2 + -0x22424;
}
