// Name: FUN_005499d0
// Address: 005499d0
// Address Range: [[005499d0, 00549a50]]
// Convention: unknown
// Signature: void FUN_005499d0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005499d0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_004659c0("models",param_2,&DAT_005d1b14);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x4c1;
    FUN_004e4330("CDeformableModel::load - Can't open %s",param_2);
  }
  FUN_00549a60(param_1,iVar2);
  pcVar3 = (char *)(param_1 + 0x35b0);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  FUN_005a3a90(iVar2);
  return;
}
