// Name: FUN_00564e40
// Address: 00564e40
// Address Range: [[00564e40, 00564ec0]]
// Convention: unknown
// Signature: void FUN_00564e40(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564e40(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00479180("models",param_2,&DAT_005f2011);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x4ca;
    FUN_005030e0("CDeformableModel::load - Can't open %s",param_2);
  }
  FUN_00564ed0(param_1,iVar2);
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
  FUN_005c0d10(iVar2);
  return;
}
