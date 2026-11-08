// Name: FUN_005427c0
// Address: 005427c0
// Address Range: [[005427c0, 00542840]]
// Convention: unknown
// Signature: void FUN_005427c0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005427c0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00460c70("models",param_2,&DAT_005e6e17);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x4c0;
    FUN_004e4500("CDeformableModel::load - Can't open %s",param_2);
  }
  FUN_00542850(param_1,iVar2);
  pcVar3 = (char *)(param_1 + 0x2a70);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  FUN_005b89c0(iVar2);
  return;
}
