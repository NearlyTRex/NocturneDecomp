// Name: FUN_00540a10
// Address: 00540a10
// Address Range: [[00540a10, 00540a90]]
// Convention: unknown
// Signature: void FUN_00540a10(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540a10(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00460c70(&DAT_005e6972,param_2,&DAT_005e696f);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x100;
    FUN_004e4500("CSkeleton::load - Can't open %s",param_2);
  }
  FUN_00540aa0(param_1,iVar2);
  pcVar3 = (char *)(param_1 + 0x1d1a8);
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
