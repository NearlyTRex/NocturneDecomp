// Name: FUN_00452650
// Address: 00452650
// Address Range: [[00452650, 00452793]]
// Convention: unknown
// Signature: void FUN_00452650(char *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452650(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_00452f10(param_1);
  iVar2 = FUN_00456a60("models",param_2,&DAT_0057c956);
  pcVar4 = param_2;
  pcVar5 = param_1;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    _DAT_01cc4804 = 0xb8;
    FUN_004c8440("Can't open keyframed model %s",param_2);
  }
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar5[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = FUN_00564570(iVar2);
  FUN_00564740(iVar3,iVar2);
  if (iVar3 == 0x2f) {
    FUN_00563380(iVar2);
    iVar2 = FUN_00456a60("models",param_2,&DAT_0057c991);
    if (iVar2 == 0) {
      _DAT_01cc4800 = "..\\core\\dmodel.cpp";
      _DAT_01cc4804 = 0xc5;
      FUN_004c8440("Can't open keyframed model %s",param_2);
    }
    FUN_00452990(param_1,iVar2);
  }
  else {
    FUN_004527a0(param_1,iVar2);
  }
  FUN_00563380(iVar2);
  FUN_004537d0(param_1);
  iVar2 = 0;
  pcVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      pcVar4[0x128] = '\0';
      pcVar4[0x129] = '\0';
      pcVar4[0x12a] = '\0';
      pcVar4[299] = '\0';
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar2 < *(int *)(param_1 + 0x120));
  }
  FUN_00453620(param_1);
  return;
}
