// Name: FUN_004668a0
// Address: 004668a0
// Address Range: [[004668a0, 004669e3]]
// Convention: unknown
// Signature: void FUN_004668a0(char *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004668a0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_00467160(param_1);
  iVar2 = FUN_00479180("models",param_2,&DAT_005d92ac);
  pcVar4 = param_2;
  pcVar5 = param_1;
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\dmodel.cpp";
    _DAT_01d1d404 = 0xb8;
    FUN_005030e0("Can't open keyframed model %s",param_2);
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
  iVar3 = FUN_005c0530(iVar2);
  FUN_005c0700(iVar3,iVar2);
  if (iVar3 == 0x2f) {
    FUN_005c0d10(iVar2);
    iVar2 = FUN_00479180("models",param_2,&DAT_005d92e7);
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0xc5;
      FUN_005030e0("Can't open keyframed model %s",param_2);
    }
    FUN_00466be0(param_1,iVar2);
  }
  else {
    FUN_004669f0(param_1,iVar2);
  }
  FUN_005c0d10(iVar2);
  FUN_00467a30(param_1);
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
  FUN_00467880(param_1);
  return;
}
