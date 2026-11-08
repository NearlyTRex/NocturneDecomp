// Name: FUN_0044dcd0
// Address: 0044dcd0
// Address Range: [[0044dcd0, 0044de13]]
// Convention: unknown
// Signature: void FUN_0044dcd0(char *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044dcd0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_0044e590(param_1);
  iVar2 = FUN_00460c70("models",param_2,&DAT_005cf58f);
  pcVar4 = param_2;
  pcVar5 = param_1;
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dmodel.cpp";
    _DAT_01d046a4 = 0xb8;
    FUN_004e4500("Can't open keyframed model %s",param_2);
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
  iVar3 = FUN_005b8180(iVar2);
  FUN_005b8350(iVar3,iVar2);
  if (iVar3 == 0x2f) {
    FUN_005b89c0(iVar2);
    iVar2 = FUN_00460c70("models",param_2,&DAT_005cf5ca);
    if (iVar2 == 0) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0xc5;
      FUN_004e4500("Can't open keyframed model %s",param_2);
    }
    FUN_0044e010(param_1,iVar2);
  }
  else {
    FUN_0044de20(param_1,iVar2);
  }
  FUN_005b89c0(iVar2);
  FUN_0044ee60(param_1);
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
  FUN_0044ecb0(param_1);
  return;
}
